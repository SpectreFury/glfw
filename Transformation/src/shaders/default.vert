#version 330 core

layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aCol;
layout (location = 2) in vec2 aTex;

out vec2 texCoord;
out vec3 Color;

uniform mat4 model;

void main() {
    gl_Position = model * vec4(aPos, 1.0f);
    texCoord = aTex;
    Color = aCol;
}