#ifndef MESH_H
#define MESH_H

#include <QString>
#include <QVector>
#include <QVector2D>
#include <QVector3D>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLExtraFunctions>
#include <QOpenGLTexture>
#include <QOpenGLWidget>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

struct Vertex
{
    QVector3D Position;
    QVector3D Normal;
};

class Mesh
{
public:
    /*  网格数据  */
    QVector<Vertex> vertices;               //顶点数据
    QVector<unsigned int> indices;          //索引数组
    QMatrix4x4 model;                       //模型矩阵
    QOpenGLFunctions* glFunc;               //opengl函数入口
    QOpenGLShaderProgram* shaderProgram;    //着色器程序

    /*  函数  */
    Mesh(QOpenGLFunctions* glFunc,QOpenGLShaderProgram* shaderProgram,aiMatrix4x4 model);
    void Draw();
    void setupMesh();

private:
    /*  渲染数据  */
    QOpenGLVertexArrayObject VAO;
    QOpenGLBuffer VBO,EBO;
};

#endif // MESH_H
