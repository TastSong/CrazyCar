#ifndef WIREFRAME_DEPTH_NORMALS_CGINC
#define WIREFRAME_DEPTH_NORMALS_CGINC

#include  "UnityCG.cginc"   
#include "../cginc/WireframeBuiltinRPCore.cginc"


//Variables//////////////////////////////////
float4 _Color;
float _Wireframe_BaseVertexColor;
#ifdef WIREFRAME_HAS_TEXTURE
	sampler2D _MainTex;
	float4 _MainTex_ST;
	float2 _Wireframe_MainTex_Scroll;
#endif


#ifdef WIREFRAME_CUTOUT
	float _Cutoff; 
#endif

struct v2f_surf
{
	float4 pos :SV_POSITION;

	float4 uv : TEXCOORD0;	//xy - mainTex, zw - wireTex
	
	float3 worldPos : TEXCOORD1;
		
	float3 custompack2 : TEXCOORD2; //Wireframe Trangle Mass

	float4 color : TEXCOORD3;


	float4 nz : TEXCOORD4;
}; 


//Vertex Shader///////////////////////////////////////////
v2f_surf vert_surf(appdata_full v)
{ 
	v2f_surf o = (v2f_surf)0;


//Curved World
#if defined(CURVEDWORLD_IS_INSTALLED) && !defined(CURVEDWORLD_DISABLED_ON)
   CURVEDWORLD_TRANSFORM_VERTEX(v.vertex)   
#endif
	

	o.pos = UnityObjectToClipPos(v.vertex);

	#ifdef WIREFRAME_HAS_TEXTURE
		o.uv.xy = TRANSFORM_TEX(v.texcoord.xy, _MainTex);		
		o.uv.xy += _Wireframe_MainTex_Scroll.xy * _Time.x;
	#endif
	
	o.uv.zw = TRANSFORM_TEX(v.texcoord.xy, _Wireframe_ColorTexture);
	o.uv.zw += _Wireframe_ColorTexture_Scroll.xy * _Time.x;
	


	o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;

	o.custompack2 = v.texcoord3;

	o.color = v.color;


	//DepthNormals
	o.nz.xyz = COMPUTE_VIEW_NORMAL;
	o.nz.w = COMPUTE_DEPTH_01;
	
	return o;				
}


//Pixel Shader///////////////////////////////////////////
float4 frag(v2f_surf i) : SV_Target
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

			float clipValue = DoWire(wireTexColor, retColor, i.custompack2, i.worldPos, dynamicMask, customAlpha, _Cutoff, wireEmission);
			 

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

			#ifdef WIREFRAME_MULTIPLY
				retColor.rgb = lerp(float3(1, 1, 1), retColor.rgb, retColor.a);
			#endif

			#ifdef WIREFRAME_ADDATIVE
				retColor.rgb = lerp(float3(0, 0, 0), retColor.rgb, retColor.a);
			#endif
			
				
			DoWire(wireTexColor, retColor, i.custompack2, i.worldPos, dynamicMask, wireEmission);
		#endif


	#else

		#ifdef WIREFRAME_CUTOUT
			clip(retColor.a - _Cutoff);
		#endif

	#endif




	return EncodeDepthNormal(i.nz.w, i.nz.xyz);
} 


#endif
