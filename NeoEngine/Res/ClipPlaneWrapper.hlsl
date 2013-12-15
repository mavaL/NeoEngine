//--------------------------------------------------------------------------------------
// Vertex Shader support clip plane
//--------------------------------------------------------------------------------------
struct PS_INPUT_ClipPlane
{
    VS_OUTPUT	vsData;
	float clip : SV_ClipDistance0;		
};

PS_INPUT_ClipPlane VS_ClipPlane( VS_INPUT input )
{
    PS_INPUT_ClipPlane output = (PS_INPUT_ClipPlane)0;
   
	output.vsData = VS(input);

	output.clip = dot(mul(input.Pos, World), clipPlane);
    
    return output;
}