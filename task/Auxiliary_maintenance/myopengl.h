#ifndef MYOPENGL_H
#define MYOPENGL_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLShaderProgram>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLTexture>
#include <QTimer>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include "mesh.h"
#include "model.h"
#include "camera.h"

#define SCR_WIDTH 640.0
#define SCR_HEIGHT 480.0

using namespace cv;

class myopengl : public QOpenGLWidget, public QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    explicit myopengl(QWidget *parent = nullptr);
    ~myopengl();

    //渲染模型
    Model* model;
    QMatrix4x4 projectionMatrix;
    QMatrix4x4 modelMatrix;
    QMatrix4x4 viewMatrix;

    //渲染视频
    QTimer clk;
    VideoCapture cam;
    Mat frame;
    QImage cvtImg;

    //标记检测
    camera mycamera;
//    void setflag();
//    bool flag=false;

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);

private:
    QOpenGLShaderProgram shaderProgram;
    void updateWindow();
    void buildProjectionMat(float nearp, float farp);

    //视频渲染
    QOpenGLBuffer m_vbo;
    QOpenGLBuffer m_ebo;
    QOpenGLVertexArrayObject m_vao;
    QOpenGLShaderProgram *m_program;
    QOpenGLTexture *texture;

};

#endif // MYOPENGL_H
