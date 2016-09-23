

//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
layout(location = 0) in vec3 iPos;
layout(location = 1) in vec2 iUv;
layout(location = 2) in vec3 oNormal;
layout(location = 3) in vec4 iColor;


out vec2 oUv;
out vec4 oColor;


//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
void main()
{
    gl_Position = vec4(iPos, 1);
    oUv = iUv;
    oColor = iColor;
}