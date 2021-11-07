#ifndef WIREFRAME_VERTEXLIT_CGINC
#define WIREFRAME_VERTEXLIT_CGINC


//Variables//////////////////////////////////
float4 _Color;
float _Wireframe_BaseVertexColor;
sampler2D _MainTex;
float4 _MainTex_ST;
float2 _Wireframe_MainTex_Scroll;

#ifdef WIREFRAME_CUTOUT
	float _Cutoff; 
#endif

#include "UnityCG.cginc"
#include "../cginc/WireframeBuiltinRPCore.cginc"

////////////////////////////////////////////////////////////////////////////
//																		  //
//Struct    															  //
//																		  //
////////////////////////////////////////////////////////////z////////////////
struct v2f  
{  
	float4 pos : SV_POSITION;
	float4 uv : TEXCOORD0;	

	#ifdef WIREFRAME_LIGHTMAP_ON
		float2 lm : TEXCOORD1;
	#else
		float4 vLight : TEXCOORD1;
	#endif		
	
	float4 color : TEXCOORD2;
	
	float3 worldPos : TEXCOORD3;
	
	
	
	float3 wireframeShaderTriangleMass : TEXCOORD4;


	//FOG
	UNITY_FOG_COORDS(5)	

	UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
};

 
////////////////////////////////////////////////////////////////////////////
//																		  //
//Vertex    															  //
//																		  //
////////////////////////////////////////////////////////////////////////////
v2f vert (appdata_full v) 
{   
	v2f o;
	UNITY_INITIALIZE_OUTPUT(v2f,o); 

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
	o.uv.xy = v.texcoord.xy * _MainTex_ST.xy + _MainTex_ST.zw;
	o.uv.xy += _Wireframe_MainTex_Scroll.xy * _Time.x;

	o.uv.zw = TRANSFORM_TEX(v.texcoord.xy, _Wireframe_ColorTexture);
	o.uv.zw += _Wireframe_ColorTexture_Scroll.xy * _Time.x;
			 

	float3 worldPos = mul(unity_ObjectToWorld, float4(v.vertex.xyz, 1)).xyz;



	#ifdef WIREFRAME_LIGHTMAP_ON
		o.lm = v.texcoord1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
	#else
		float4 lighting = float4(ShadeVertexLightsFull(v.vertex, v.normal, 4, true), 1);
		o.vLight = lighting * 0.5;
	#endif

	
	o.color = v.color;
	
	o.worldPos = worldPos;
	


	//FOG
	UNITY_TRANSFER_FOG(o, o.pos);

	#ifndef WIREFRAME_NO
		o.wireframeShaderTriangleMass = v.texcoord3;
	#endif

	return o; 
}


////////////////////////////////////////////////////////////////////////////
//																		  //
//Fragment    															  //
//																		  //
////////////////////////////////////////////////////////////////////////////
float4 frag (v2f i) : SV_Target 
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
		float4 mainTex = tex2D(_MainTex, i.uv.xy);

		#if defined(WIREFRAME_HAS_TEXTURE) && !defined(WIREFRAME_NO_COLOR_BLACK) && !defined(WIREFRAME_NO_COLOR_WHITE)
			retColor *= mainTex;
		#endif		
	#endif

	//Vertex Color
	retColor.rgb *= lerp(float3(1, 1, 1), i.color.rgb, _Wireframe_BaseVertexColor);


	#ifdef WIREFRAME_LIGHTMAP_ON
		float3 lm = DecodeLightmap(UNITY_SAMPLE_TEX2D(unity_Lightmap, i.lm));

		retColor.rgb *= lm.rgb;

		#ifdef WIREFRAME_LIGHT_ATTENTION_ON
			_Wireframe_Color.rgb *= lm.rgb;	
		#endif
	#else 
		retColor.rgb *= i.vLight * 2;

		#ifdef WIREFRAME_LIGHT_ATTENTION_ON
			_Wireframe_Color.rgb *= i.vLight.rgb;
		#endif
	#endif
	

	//Dynamic Mask
	float dynamicMask = 1;
	#ifdef WIREFRAME_DYNAMIC_MASK_ON	 
		dynamicMask = WireframeShaderCalculateDynamicMask(i.worldPos);

					
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
	#ifndef WIREFRAME_NO

		float4 wireTexColor = tex2D(_Wireframe_ColorTexture, i.uv.zw);
		wireTexColor.rgb *= lerp(float3(1, 1, 1), i.color.rgb, _Wireframe_WireVertexColor);

		float3 wireEmission = 0;

		#ifdef WIREFRAME_CUTOUT
		
			float customAlpha = 1;
			#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
				customAlpha = wireTexColor.a;

				customAlpha = lerp(customAlpha, 1 - customAlpha, _Wireframe_TransparentTex_Invert);
				
				customAlpha = (customAlpha + _Wireframe_TransparentTex_Alpha_Offset) < 0.01 ? 0 : 1;
			#endif
							
			float clipValue = DoWire(wireTexColor, retColor, i.wireframeShaderTriangleMass, i.worldPos, dynamicMask, customAlpha, _Cutoff, wireEmission);


			#ifdef WIREFRAME_CUTOUT_HALF
				clip(clipValue - WIREFRAME_CUTOUT_HALF_VALUE);
			#else
				clip(clipValue);	
			#endif 

		#else 			

			#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
				float customAlpha = wireTexColor.a;

				customAlpha = lerp(customAlpha, 1 - customAlpha, _Wireframe_TransparentTex_Invert);

				customAlpha = saturate(customAlpha + _Wireframe_TransparentTex_Alpha_Offset);


				_Wireframe_Color.a *= customAlpha;
			#endif
				
			DoWire(wireTexColor, retColor, i.wireframeShaderTriangleMass, i.worldPos, dynamicMask, wireEmission);

		#endif

		//Emission
		retColor.rgb += wireEmission;

	#else

		#ifdef WIREFRAME_CUTOUT
			clip(retColor.a - _Cutoff);
		#endif

	#endif

	
	//Fog
	UNITY_APPLY_FOG(i.fogCoord, retColor);

	//Alpha
	#if !defined(WIREFRAME_CUTOUT) && !defined(WIREFRAME_TRANSPARENT)
		UNITY_OPAQUE_ALPHA(retColor.a);
	#endif

	return retColor;
} 

#endif 
