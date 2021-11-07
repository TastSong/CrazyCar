#ifndef WIREFRAME_SHADOW_CGINC
#define WIREFRAME_SHADOW_CGINC


//Variables//////////////////////////////////

#ifdef WIREFRAME_CUTOUT
	float _Cutoff; 

	float4 _Color;
	sampler2D _MainTex;
	float4 _MainTex_ST;
	float2 _Wireframe_MainTex_Scroll;
#endif

#include "UnityCG.cginc"
#include "../cginc/WireframeBuiltinRPCore.cginc"

////////////////////////////////////////////////////////////////////////////
//																		  //
//Struct    															  //
//																		  //
////////////////////////////////////////////////////////////////////////////
struct v2f_surf
{ 
	V2F_SHADOW_CASTER;	
			
	float3 custompack2 : TEXCOORD1;

	#ifdef WIREFRAME_CUTOUT
		float4 uv : TEXCOORD2;		
		
		float3 worldPos : TEXCOORD4;
	#endif

	float3 objectPos : TEXCOORD5;


	UNITY_VERTEX_INPUT_INSTANCE_ID
		UNITY_VERTEX_OUTPUT_STEREO
};

 
////////////////////////////////////////////////////////////////////////////
//																		  //
//Vertex    															  //
//																		  //
////////////////////////////////////////////////////////////z////////////////
v2f_surf vert_surf( appdata_full v )
{
	v2f_surf o = (v2f_surf)0;

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


	o.objectPos = v.vertex.xyz;

	#ifdef WIREFRAME_CUTOUT
		o.uv.xy = v.texcoord.xy * _MainTex_ST.xy + _MainTex_ST.zw;
		o.uv.xy += _Wireframe_MainTex_Scroll.xy * _Time.x;

		o.uv.zw = TRANSFORM_TEX(v.texcoord.xy, _Wireframe_ColorTexture);
		o.uv.zw += _Wireframe_ColorTexture_Scroll.xy * _Time.x;

		o.custompack2 = v.texcoord3;				
		
		o.worldPos = mul(unity_ObjectToWorld, float4(v.vertex.xyz, 1)).xyz;
	#endif

	TRANSFER_SHADOW_CASTER_NORMALOFFSET(o)
	return o;
}

////////////////////////////////////////////////////////////////////////////
//																		  //
//Fragment    															  //
//																		  //
////////////////////////////////////////////////////////////////////////////
float4 frag(v2f_surf i ) : SV_Target
{
	#ifdef WIREFRAME_CUTOUT

		#if defined(WIREFRAME_NO_COLOR_BLACK)
			float4 retColor = 0;
		#elif defined(WIREFRAME_NO_COLOR_WHITE)
			float4 retColor = 1;
		#else
			float4 retColor = tex2D (_MainTex, i.uv.xy) * _Color;	
		#endif	

							
		//Dynamic Mask
		float dynamicMask = 1;
		#ifdef WIREFRAME_DYNAMIC_MASK_ON	
			dynamicMask = WireframeShaderCalculateDynamicMask(i.worldPos);
					  
				 
			#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
				float maskMainTexA = lerp(1 - 2 * dynamicMask, 2 * dynamicMask - 1, _Wireframe_DynamicMaskEffectsBaseTexInvert);
						 
				retColor.a = _Cutoff > 0.01 ? retColor.a * maskMainTexA : maskMainTexA;
			#endif  
		#endif  
					 
		float customAlpha = 1;
		#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
			customAlpha = tex2D(_Wireframe_ColorTexture, i.uv.zw).a;
					
			customAlpha = lerp(customAlpha, 1 - customAlpha, _Wireframe_TransparentTex_Invert);

			customAlpha = (customAlpha + _Wireframe_TransparentTex_Alpha_Offset) < 0.01 ? 0 : 1;
		#endif

		float3 wireEmission = 0;
		float clipValue = DoWire(1, retColor, i.custompack2, i.worldPos, dynamicMask, customAlpha, _Cutoff, wireEmission);


		#ifdef WIREFRAME_CUTOUT_HALF
			clip(clipValue - WIREFRAME_CUTOUT_HALF_VALUE);
		#else
			clip(clipValue); 
		#endif
	#endif

	SHADOW_CASTER_FRAGMENT(i)
}
#endif 
