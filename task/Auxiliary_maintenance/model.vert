attribute vec3 aPos;
attribute vec3 aNormal;

uniform mat4 modelMat;
uniform mat4 viewMat;
uniform mat4 projectionMat;

varying vec4 ourColor;


void main(void)
{
    //程序玄学,这里要反着相乘
    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0f) *  modelMat * viewMat * projectionMat;
    ourColor = vec4(aNormal.x,aNormal.y,aNormal.z,1.0f);
}
