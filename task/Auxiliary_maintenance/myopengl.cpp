#include "myopengl.h"

myopengl::myopengl(QWidget *parent)
    : QOpenGLWidget(parent)
    , m_vbo(QOpenGLBuffer::VertexBuffer)
    , m_ebo(QOpenGLBuffer::IndexBuffer)
{

        cam.open(700);
        clk.start(60);
        QObject::connect(&clk,&QTimer::timeout,[=](){
            this->updateWindow();
        });


}

myopengl::~myopengl()
{
    makeCurrent();
    m_vbo.destroy();
    m_ebo.destroy();
    m_vao.destroy();
    delete m_program;
    delete texture;
}

void myopengl::initializeGL()
{
    this->initializeOpenGLFunctions();
    glClear(GL_COLOR_BUFFER_BIT);
    //-------------------------------------------------------------------------------------------------------------------------
    //初始化背景
    const GLfloat vertices[] = {
        // Positions // Colors // Texture Coords
        1.0f, 1.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f, // Top Right
        1.0f, -1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, // Bottom Right
        -1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, // Bottom Left
        -1.0f, 1.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 1.0f // Top Left
    };

    const GLuint indices[] = { // Note that we start from 0!
    0, 1, 3, // First Triangle
    1, 2, 3 // Second Triangle
    };

    m_program = new QOpenGLShaderProgram();
    m_program->addShaderFromSourceFile(QOpenGLShader::Vertex, ":/video.vert");
    m_program->addShaderFromSourceFile(QOpenGLShader::Fragment, ":/video.frag");
    m_program->link();
    m_program->bind();

    // Create Vertex Array Object
    m_vao.create();
    m_vao.bind();

    // Create Buffer (Do not release until VAO is created)
    m_vbo.create();
    m_vbo.bind();
    m_vbo.setUsagePattern(QOpenGLBuffer::StaticDraw);
    m_vbo.allocate(vertices, sizeof(vertices));

    m_ebo.create();
    m_ebo.bind();
    m_ebo.setUsagePattern(QOpenGLBuffer::StaticDraw);
    m_ebo.allocate(indices,sizeof(indices));

    m_program->enableAttributeArray(0);
    m_program->enableAttributeArray(1);
    m_program->enableAttributeArray(2);
    m_program->setAttributeBuffer(0, GL_FLOAT, 0, 3 , 8*sizeof(GLfloat));      // 3表示的是这一个属性里面有几个分量
    m_program->setAttributeBuffer(1, GL_FLOAT, 3*sizeof(GLfloat), 3,  8*sizeof(GLfloat));
    m_program->setAttributeBuffer(2, GL_FLOAT, 6 * sizeof(GLfloat), 2, 8 * sizeof(GLfloat));

    //------------------------------------------------------------------------------------------------------------------
    //纹理初始化
    texture = new QOpenGLTexture(QOpenGLTexture::Target2D);
    texture->create();
    texture->setSize(640,480);
    texture->setFormat(QOpenGLTexture::RGB8_UNorm);
    texture->allocateStorage(QOpenGLTexture::PixelFormat::RGBA,QOpenGLTexture::PixelType::UInt8);
    texture->setMinificationFilter(QOpenGLTexture::Nearest);
    texture->setMagnificationFilter(QOpenGLTexture::Linear);
    texture->setWrapMode(QOpenGLTexture::Repeat);

    m_vbo.release();
    m_vao.release();
    m_program->release();

    //---------------------------------------------------------------------------------------------------------------------------
    //初始化模型
    shaderProgram.addShaderFromSourceFile(QOpenGLShader::Vertex,":/model.vert");
    shaderProgram.addShaderFromSourceFile(QOpenGLShader::Fragment,":/model.frag");
    shaderProgram.link();
    model = Model::createModel("E:/C++-Test/AR_Demo_02/Debug/model/xiangti.obj",context(),&shaderProgram);
    //-----------------------------------------------------------------------------------------------------------------------------
    //初始化相机
    buildProjectionMat(0.01f,1000.0f);

    qDebug()<<projectionMatrix;

    glEnable(GL_DEPTH_TEST);
}

void myopengl::resizeGL(int width, int height)
{
    glViewport(0,0,width,height);
}

void myopengl::paintGL()
{
    glClear(GL_DEPTH_BUFFER_BIT);    // 清除屏幕和深度缓存
    //纹理渲染
    m_program->bind();
    {
        m_program->setUniformValue("ourTexture", 0);
        texture->bind();
        m_vao.bind();
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        glDrawElements(GL_TRIANGLES,6,GL_UNSIGNED_INT,0);
        m_vao.release();
    }
    m_program->release();
    texture->release();

    glClear(GL_DEPTH_BUFFER_BIT);
    //模型渲染
    if(mycamera.is_mark)
    {
        //shaderProgram.bind();
        {
            model->draw();
            shaderProgram.setUniformValue("modelMat", modelMatrix);
            shaderProgram.setUniformValue("viewMat", viewMatrix);
            shaderProgram.setUniformValue("projectionMat", projectionMatrix);
        }
        shaderProgram.release();
    }
}

void myopengl::updateWindow()
{
    cam >> frame;
    //------------------------------------------------------
    //标记检测
    mycamera.pose_estimate(frame);
    //cv::flip(frame,frame,1);

    //-------------------------------------------------------
    //设置viewMatrix
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            viewMatrix(i,j) = mycamera.viewMatrix.at<float>(i,j);
        }
    }
    qDebug()<<viewMatrix;

    cvtColor(frame,frame,COLOR_BGR2RGB);
    cvtImg = QImage((const unsigned char*)frame.data, frame.cols, frame.rows, frame.cols * frame.channels(),QImage::Format_RGB888).mirrored().convertToFormat(QImage::Format_RGB888);
    texture->setData(QOpenGLTexture::RGB,QOpenGLTexture::UInt8,cvtImg.constBits());

    update();
    frame.release();
    cvtImg = QImage();
    texture->release();
}

void myopengl::buildProjectionMat(float nearp, float farp)
{
    float f_x = mycamera.getCameraMatrix().at<float>(0,0);
    float f_y = mycamera.getCameraMatrix().at<float>(1,1);
    float c_x = mycamera.getCameraMatrix().at<float>(0,2);
    float c_y = mycamera.getCameraMatrix().at<float>(1,2);

    projectionMatrix(0,0) = 2 * f_x / (float)SCR_WIDTH;
    projectionMatrix(1,1) = 2 * f_y / (float)SCR_HEIGHT;

    projectionMatrix(2,0) = 1.0f - 2 * c_x / (float)SCR_WIDTH;
    projectionMatrix(2,1) = 2 * c_y / (float)SCR_HEIGHT - 1.0f;

    projectionMatrix(2,2) = -(farp + nearp) / (farp - nearp);
    projectionMatrix(2,3) = -1.0f;
    projectionMatrix(3,2) = -2.0f * farp * nearp / (farp - nearp);
    projectionMatrix(3,3) = 0.0f;//QMatrix默认初始化单位矩阵
}

// void myopengl::setflag()
// {
//     flag=true;
// }

