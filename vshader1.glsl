#version 400

layout(location = 0) in vec4 vPosition;

uniform mat4 model;

out vec4 v2fcolor;

void main()
{
    float gray = (vPosition.z + 1) * 0.5;
    v2fcolor = vec4(gray, gray, gray, 1);
    gl_Position = vec4(vPosition.x, vPosition.y, -vPosition.z, vPosition.w);
}
