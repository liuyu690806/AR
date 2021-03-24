#include "mesh.h"
#include <QtOpenGLExtensions/QOpenGLExtensions>

Mesh::Mesh(QOpenGLFunctions* glFunc, QOpenGLShaderProgram* shaderProgram, aiMatrix4x4 model)
    :   glFunc(glFunc)
    ,   shaderProgram(shaderProgram)
    ,   VBO(QOpenGLBuffer::VertexBuffer)
    ,   EBO(QOpenGLBuffer::IndexBuffer)
{

}


void Mesh::Draw()
{
    // 绘制网格
    QOpenGLVertexArrayObject::Binder bind(&VAO);
    glFunc->glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_INT, 0);
    VAO.release();
}
void Mesh::setupMesh()
{

    VAO.create();
    VAO.bind();

    VBO.create();
    EBO.create();

    VBO.bind();
    VBO.allocate(vertices.data(),vertices.size() * sizeof(Vertex));

    EBO.bind();
    EBO.allocate(indices.data(),indices.size() * sizeof(unsigned int));


    shaderProgram->enableAttributeArray(0);
    shaderProgram->setAttributeBuffer(0,GL_FLOAT,0,3,sizeof(Vertex));

    shaderProgram->enableAttributeArray(1);
    shaderProgram->setAttributeBuffer(1,GL_FLOAT,offsetof(Vertex,Normal),3,sizeof(Vertex));

    VAO.release();
}

