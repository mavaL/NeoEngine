

uniform cbufferCustom0
{
	vec4	vCombParams;	// xyz = combine direction, w = combine strength
	vec4	vModelCamPos;	// camera pos in object space
	vec4	vModelLightDir;	// light in object space
	float	fFinMaxOpacity;
	float	shellIncrement;
	float	shellTexTiling;
	int		iShell;
};

uniform sampler2D	tex0;


layout (lines_adjacency) in;
layout (triangle_strip, max_vertices = 4) out;

in vec2 oUv[4];
in vec3 oNormal[4];

out vec2 TextureFin;
out vec2 TextureMesh;
out float Opacity;

const float finThreshold = 0.25;
const int numShells = 15;

//extrude an edge into two triangles if we determine that its a silhouette edge or almost a silhouette edge
void makeFin(float eyeDotN1, float eyeDotN2)
{    
       
	float opacity = fFinMaxOpacity;
    bool makeFin = false;
    
    //if its a silhouette edge
    if( eyeDotN1 * eyeDotN2 < 0 )
    {   makeFin = true;
        opacity = fFinMaxOpacity;
    }    
    else if( abs(eyeDotN1)<finThreshold )
    {   
        //if its almost a silhouette edge (render these to avoid popping during animation)
        makeFin = true;
		opacity = (finThreshold - abs(eyeDotN1))*(fFinMaxOpacity / finThreshold);
    }
    else if( abs(eyeDotN2)<finThreshold )
    {   
        //if its almost a silhouette edge (render these to avoid popping during animation)
        makeFin = true;
		opacity = (finThreshold - abs(eyeDotN2))*(fFinMaxOpacity / finThreshold);
    }
    
    
    //if this edge has to be expanded to a fin create the four vertices
    //for the two triangles in the triangle strip and append them to the
    //triangle stream
    if( makeFin )
    {
      
        float texcoord[2] = {1,0.1};
        float furLengths[2];

		vec4 color = texture(tex0, oUv[1]);
        furLengths[0] = color.a;

		color = texture(tex0, oUv[0]); 
        furLengths[1] = color.a;
 
        // Extrude silhouette to create two new triangles for the fin
        
        TextureMesh = oUv[1];
        Opacity = opacity;

        for(int v=0; v<2; v++)
        {
            vec4 vPos = (gl_in[1].gl_Position + v*vec4(normalize(oNormal[1]) + vCombParams.w*vCombParams.xyz, 0)*numShells*shellIncrement*furLengths[0]) * World;
			gl_Position = vPos * ViewProj;
            TextureFin = vec2(0,texcoord[v]);

            EmitVertex();
        }

        TextureMesh = oUv[0];
        Opacity = opacity;

        for(int w=0; w<2; w++)
        {
            vec4 vPos = (gl_in[0].gl_Position + w*vec4(normalize(oNormal[0]) + vCombParams.w*vCombParams.xyz, 0)*numShells*shellIncrement*furLengths[1]) * World;
			gl_Position = vPos * ViewProj;
            TextureFin = vec2(1,texcoord[w]);
            
			EmitVertex();
        }
        
        EndPrimitive();
    }
}

void main()
{     

     //output some fins if necessary
 
	vec3 eyeVec = normalize(vModelCamPos.xyz - gl_in[0].gl_Position.xyz);

     //compute the triangles' normals, all of these calculations are in object space 
     vec3 triNormal1 = normalize( cross( gl_in[0].gl_Position.xyz - gl_in[1].gl_Position.xyz,
                                           gl_in[3].gl_Position.xyz - gl_in[1].gl_Position.xyz ));
     float eyeDotN1 = dot(triNormal1, eyeVec);
     vec3 triNormal2 = normalize(cross( gl_in[1].gl_Position.xyz - gl_in[0].gl_Position.xyz, 
                                          gl_in[2].gl_Position.xyz - gl_in[0].gl_Position.xyz ));
     float eyeDotN2 = dot( triNormal2, eyeVec);

     makeFin(eyeDotN1,eyeDotN2);
}
