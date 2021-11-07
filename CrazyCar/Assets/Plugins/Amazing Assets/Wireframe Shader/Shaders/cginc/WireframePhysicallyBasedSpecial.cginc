#ifndef WIREFRAME_PHYSICALLY_BASED_SPECIAL_CGINC
#define WIREFRAME_PHYSICALLY_BASED_SPECIAL_CGINC

  
#include "../cginc/WireframeBuiltinRPCore.cginc"


//Variables//////////////////////////////////
float4 _Color;
float _Wireframe_BaseVertexColor;
sampler2D _MainTex;
float4 _MainTex_ST;
float2 _Wireframe_MainTex_Scroll;

 


//Struct/////////////////////////////////////////////////////////
struct v2f_surf
{
	float4 pos : SV_POSITION;

	float3 worldPos : TEXCOORD0;

	float4 texcoord : TEXCOORD1; // xy - uv, zw - wireTex coord,
		
	float3 custompack2 : TEXCOORD2; //xyz - wireframeShaderTriangleMass

	float3 worldNormal : TEXCOORD3;	//xyz - normal
	
	float4 color : COLOR;

	UNITY_FOG_COORDS(4)

	UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
};

//Vertex Shader///////////////////////////////////////////
v2f_surf vert_surf(appdata_full v) 
{
	v2f_surf o;
	UNITY_INITIALIZE_OUTPUT(v2f_surf,o);

	UNITY_SETUP_INSTANCE_ID(v);
	UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);


//Curved World
#if defined(CURVEDWORLD_IS_INSTALLED) && !defined(CURVEDWORLD_DISABLED_ON)
   #ifdef CURVEDWORLD_NORMAL_TRANSFORMATION_ON
      CURVEDWORLD_TRANSFORM_VERTEX_AND_NORMAL(v.vertex, v.normal, v.tangent)
   #else
      CURVEDWORLD_TRANSFORM_VERTEX(v.vertex)
   #endif
#endif


	o.pos = UnityObjectToClipPos(v.vertex);

#ifdef WIREFRAME_TRY_QUAD_ON
	o.worldPos = v.vertex.xyz;
#else
	o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
#endif

	o.texcoord.xy = TRANSFORM_TEX(v.texcoord.xy, _MainTex);		
	o.texcoord.xy += _Wireframe_MainTex_Scroll.xy * _Time.x;

	o.texcoord.zw = TRANSFORM_TEX(v.texcoord.xy, _Wireframe_ColorTexture);
	o.texcoord.zw += _Wireframe_ColorTexture_Scroll.xy * _Time.x;

	#ifdef WIREFRAME_FRESNEL_ON
		o.worldNormal = UnityObjectToWorldNormal(v.normal);
	#endif


	o.color = v.color;


	o.custompack2 = v.texcoord3;


	UNITY_TRANSFER_FOG(o, o.pos);

	return o;
}



//Pixel Shader///////////////////////////////////////////
float4 frag_surf(v2f_surf IN) : SV_Target
{	
	//Color
	#if defined(WIREFRAME_NO_COLOR_BLACK)
		float4 retColor = 0;
	#elif defined(WIREFRAME_NO_COLOR_WHITE)
		float4 retColor = 1;
	#else
		float4 retColor = _Color;
	#endif	

	//Main Texture
	#ifdef WIREFRAME_HAS_TEXTURE
		float4 mainTex = tex2D(_MainTex, IN.texcoord.xy);

		#if defined(WIREFRAME_HAS_TEXTURE) && !defined(WIREFRAME_NO_COLOR_BLACK) && !defined(WIREFRAME_NO_COLOR_WHITE)
			retColor *= mainTex;
		#endif		
	#endif 
	 
	//Vertex Color
	retColor.rgb *= lerp(float3(1, 1, 1), IN.color.rgb, _Wireframe_BaseVertexColor);



	//Dynamic Mask
	float dynamicMask = 1;
	#ifdef WIREFRAME_DYNAMIC_MASK_ON	
		dynamicMask = WireframeShaderCalculateDynamicMask(IN.worldPos);
				
		#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
			float maskMainTexA = lerp(1 - 2 * dynamicMask, 2 * dynamicMask - 1, _Wireframe_DynamicMaskEffectsBaseTexInvert);

			#ifdef WIREFRAME_CUTOUT
				retColor.a = _Cutoff > 0.01 ? retColor.a * maskMainTexA : maskMainTexA;
			#else
				retColor.a *= maskMainTexA;
			#endif
		#endif
	#endif



	 
	//Wire
	float4 wireTexColor = tex2D(_Wireframe_ColorTexture, IN.texcoord.zw);
	wireTexColor.rgb *= lerp(float3(1, 1, 1), IN.color.rgb, _Wireframe_WireVertexColor);

	
	#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
		float customAlpha = wireTexColor.a;

		customAlpha = lerp(customAlpha, 1 - customAlpha, _Wireframe_TransparentTex_Invert);
				 
		customAlpha = saturate(customAlpha + _Wireframe_TransparentTex_Alpha_Offset);


		_Wireframe_Color.a *= customAlpha;
	#endif

	#ifdef WIREFRAME_MULTIPLY
		retColor.rgb = lerp(float3(1, 1, 1), retColor.rgb, retColor.a);
	#endif

	#ifdef WIREFRAME_ADDATIVE
		retColor.rgb = lerp(float3(0, 0, 0), retColor.rgb, retColor.a);
	#endif
			

	#ifdef WIREFRAME_FRESNEL_ON		
		float3 worldViewDir = normalize(UnityWorldSpaceViewDir(IN.worldPos));
		
		float fresnel = saturate(dot (worldViewDir, IN.worldNormal));

		float wFresnel = saturate(fresnel + _Wireframe_FresnelBias);
		wFresnel = lerp(wFresnel, 1 - wFresnel, _Wireframe_FresnelInvert);
		
		wFresnel = pow(wFresnel, _Wireframe_FresnelPow);

		_Wireframe_Color.a *= wFresnel;
	#endif 

				
	float3 wireEmission = 0;
	DoWire(wireTexColor, retColor, IN.custompack2, IN.worldPos, dynamicMask, wireEmission);

	//Emission
	retColor.rgb += wireEmission;

	
	//Fog
	#if defined(WIREFRAME_ADDATIVE)
		UNITY_APPLY_FOG_COLOR(IN.fogCoord, retColor, float4(0,0,0,0)); // fog towards black due to our blend mode
	#elif defined(WIREFRAME_MULTIPLY)
		UNITY_APPLY_FOG_COLOR(IN.fogCoord, retColor, float4(1,1,1,1)); // fog towards white due to our blend mode
	#else
		UNITY_APPLY_FOG(IN.fogCoord, retColor);
	#endif

	//Alpha
	UNITY_OPAQUE_ALPHA(retColor.a);


	return retColor;	
}


#endif
