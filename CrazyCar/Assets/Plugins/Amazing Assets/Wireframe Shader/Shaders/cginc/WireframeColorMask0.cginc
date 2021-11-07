#ifndef WIREFRAME_COLOR_MASK_0_CGINC
#define WIREFRAME_COLOR_MASK_0_CGINC


struct v2f   
{  
	float4 pos : SV_POSITION;	

	UNITY_VERTEX_INPUT_INSTANCE_ID
	UNITY_VERTEX_OUTPUT_STEREO
};
	 
v2f vert(appdata_full v)
{
	v2f o;
	UNITY_INITIALIZE_OUTPUT(v2f,o); 

	UNITY_SETUP_INSTANCE_ID(v);
	UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
	

//Curved World
#if defined(CURVEDWORLD_IS_INSTALLED) && !defined(CURVEDWORLD_DISABLED_ON)
    CURVEDWORLD_TRANSFORM_VERTEX(v.vertex) 
#endif


	o.pos = UnityObjectToClipPos(v.vertex);

	return o;
}

float4 frag () : SV_Target 
{
	return 0;
}

	
#endif
