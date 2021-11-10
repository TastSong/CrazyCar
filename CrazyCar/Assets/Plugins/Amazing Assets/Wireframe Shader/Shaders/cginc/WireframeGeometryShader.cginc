#ifndef WIREFRAME_GEOMETRY_SHADER_CGINC
#define WIREFRAME_GEOMETRY_SHADER_CGINC

[maxvertexcount(3)]
void geom(triangle v2f_surf input[3], inout TriangleStream<v2f_surf> triStream)
{
	float3 mass0, mass1, mass2;
	
	#if defined(WIREFRAME_ADDATIVE) || defined(WIREFRAME_MULTIPLY) || defined(WIREFRAME_DEPTH_NORMALS_CGINC)
		WireframeShaderCalculateTriangleMass(input[0].worldPos, input[1].worldPos, input[2].worldPos, mass0, mass1, mass2);
	#else
		WireframeShaderCalculateTriangleMass(input[0].objectPos, input[1].objectPos, input[2].objectPos, mass0, mass1, mass2);
	#endif

	input[0].custompack2.xyz = mass0;
 	input[1].custompack2.xyz = mass1;
 	input[2].custompack2.xyz = mass2;

	
	triStream.Append(input[0]);
	triStream.Append(input[1]);
	triStream.Append(input[2]);

	triStream.RestartStrip();
}

#endif
