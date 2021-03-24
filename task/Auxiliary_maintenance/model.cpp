﻿#include "model.h"

Model::Model(QString path,QOpenGLContext* context, QOpenGLShaderProgram*shaderProgram)
    : context(context)
    , shaderProgram(shaderProgram)
    , directory(path)
{
    Assimp::Importer import;
    const aiScene *scene = import.ReadFile(directory.absolutePath().toLocal8Bit(), aiProcess_Triangulate | aiProcess_FlipUVs);
    if(!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode)
    {
       qDebug() << "ERROR::ASSIMP::"<<import.GetErrorString() << endl;
       return;
    }
    qDebug() <<directory.absolutePath()<<"加载成功";
    qDebug()<<"**************************************";
    qDebug() <<"网格："<<scene->mNumMeshes;
    directory.cdUp();
    processNode(scene->mRootNode, scene);
}

Model::~Model()
{
    for(auto&it:meshes){
        delete it;
    }
}

void Model::draw()
{
    shaderProgram->bind();
    for(Mesh* mesh:meshes){
        mesh->Draw();
    }
}

void Model::destroy()
{
    delete this;
    context->doneCurrent();
}


Model *Model::createModel(QString path, QOpenGLContext *context, QOpenGLShaderProgram *shaderProgram)
{
    return new Model(path,context,shaderProgram);
}

Mesh* Model::processMesh(aiMesh *mesh,const aiScene *scene ,aiMatrix4x4 model)
{
    //  初始化网格
    Mesh* m_mesh=new Mesh(context->functions(),shaderProgram,model);
    // 遍历网格的每个顶点
    for(unsigned int i = 0; i < mesh->mNumVertices; i++)
    {
        Vertex vertex;
        QVector3D vector; //将assimp的数据转化为QtOpenGL支持的数据

        // 位置
        vector.setX(mesh->mVertices[i].x) ;
        vector.setY(mesh->mVertices[i].y) ;
        vector.setZ(mesh->mVertices[i].z) ;
        vertex.Position = vector;
        // 法向量
        if(mesh->mNormals){
            vector.setX(mesh->mNormals[i].x);
            vector.setY(mesh->mNormals[i].y);
            vector.setZ(mesh->mNormals[i].z);
            vertex.Normal = vector;
        }

        m_mesh->vertices.push_back(vertex);
    }

    for(unsigned int i = 0; i < mesh->mNumFaces; i++)
    {
        aiFace face = mesh->mFaces[i];
        // 将所有面的索引数据添加到索引数组中
        for(unsigned int j = 0; j < face.mNumIndices; j++){
            m_mesh->indices.push_back(face.mIndices[j]);
        }
    }

    m_mesh->setupMesh();
    return m_mesh;
}


void Model::processNode(aiNode *node, const aiScene *scene, aiMatrix4x4 mat4)
{

    // 处理节点所有的网格（如果有的话）
    for(unsigned int i = 0; i < node->mNumMeshes; i++)
    {
       aiMesh *mesh = scene->mMeshes[node->mMeshes[i]];
       meshes.push_back(processMesh(mesh, scene,mat4));

    }
    // 接下来对它的子节点重复这一过程
    for(unsigned int i = 0; i < node->mNumChildren; i++)
    {
       processNode(node->mChildren[i], scene,mat4*node->mChildren[i]->mTransformation);
    }
}
