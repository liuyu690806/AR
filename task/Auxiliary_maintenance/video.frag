uniform sampler2D ourTexture;
varying vec3 ourColor;
varying vec2 TexCoord;

void main(void)
{
    gl_FragColor = texture2D(ourTexture, TexCoord);
}
