#ifndef WIREFRAME_UNLIT_CGINC
#define WIREFRAME_UNLIT_CGINC

#include  "UnityCG.cginc"   
#include "../cginc/WireframeBuiltinRPCore.cginc"

 
#if defined(WIREFRAME_REFLECTION_CUBE_SIMPLE) || defined(WIREFRAME_REFLECTION_CUBE_ADVANED) || defined(WIREFRAME_REFLECTION_UNITY_REFLECTION_PROBES)
	#define WIREFRAME_REFLECTION_ON
#endif

//Variables//////////////////////////////////
float4 _Color;
float _Wireframe_BaseVertexColor;
#ifdef WIREFRAME_HAS_TEXTURE
	sampler2D _MainTex;
	float4 _MainTex_ST;
	float2 _Wireframe_MainTex_Scroll;
#endif

#ifdef WIREFRAME_REFLECTION_ON

	float4 _ReflectColor;
	float _Wireframe_Reflection_Strength;
	float _Wireframe_Reflection_Fresnel_Bias;

	#if defined(WIREFRAME_REFLECTION_CUBE_SIMPLE) || defined(WIREFRAME_REFLECTION_CUBE_ADVANED)
		UNITY_DECLARE_TEXCUBE(_Cube);
	#endif

	#if defined(WIREFRAME_REFLECTION_CUBE_ADVANED) || defined(WIREFRAME_REFLECTION_UNITY_REFLECTION_PROBES)
		float _Wireframe_Reflection_Roughness;
	#endif
#endif

#ifdef WIREFRAME_IMAGE_BASED_LIGHTING_ON
	samplerCUBE _Wireframe_IBL_Cube;
	float _Wireframe_IBL_Cube_Intensity;
	float _Wireframe_IBL_Cube_Contrast;		
	float _Wireframe_IBL_Light_Strength;
#endif

#ifdef WIREFRAME_CUTOUT
	float _Cutoff; 
#endif

//Struct/////////////////////////////////////////////////////////
struct vInput
{
    float4 vertex : POSITION;

	float4 texcoord  : TEXCOORD0;
	float4 texcoord1 : TEXCOORD1;
	float4 uv4       : TEXCOORD3;	//Wireframe triangle mass is here

	float3 normal : NORMAL;
	float4 tangent : TANGENT;

	float4 color : COLOR;

	UNITY_VERTEX_INPUT_INSTANCE_ID
};

struct vOutput
{
	float4 pos :SV_POSITION;

	float4 uv : TEXCOORD0;	//xy - mainTex, zw - wireTex

	float3 worldPos : TEXCOORD1;
	
		
	
	#if defined(WIREFRAME_IMAGE_BASED_LIGHTING_ON) || defined(WIREFRAME_FRESNEL_ON)
		float4 normal : TEXCOORD2;	//xyz - normal, w - fresnel
	#endif
	

	#ifdef WIREFRAME_REFLECTION_ON
		float4 refl : TEXCOORD3; //xyz - reflection, w - fresnel	
	#endif

	float4 vColor : TEXCOORD4;

	 
	float3 wireframeShaderTriangleMass : TEXCOORD5;

	UNITY_FOG_COORDS(8)	

	UNITY_VERTEX_INPUT_INSTANCE_ID
	UNITY_VERTEX_OUTPUT_STEREO
}; 


//Vertex Shader///////////////////////////////////////////
vOutput vert(vInput v)
{ 
	vOutput o = (vOutput)0;	

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

	#ifdef WIREFRAME_HAS_TEXTURE
		o.uv.xy = TRANSFORM_TEX(v.texcoord.xy, _MainTex);		
		o.uv.xy += _Wireframe_MainTex_Scroll.xy * _Time.x;
	#endif
	
	o.uv.zw = TRANSFORM_TEX(v.texcoord.xy, _Wireframe_ColorTexture);
	o.uv.zw += _Wireframe_ColorTexture_Scroll.xy * _Time.x;
	


	float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;

	#if defined(WIREFRAME_IMAGE_BASED_LIGHTING_ON) || defined(WIREFRAME_REFLECTION_ON)
		float3 worldNormal = UnityObjectToWorldNormal(v.normal);
	#endif

	#if defined(WIREFRAME_REFLECTION_ON) || defined(WIREFRAME_FRESNEL_ON)
		float fresnel = dot (normalize(ObjSpaceViewDir(v.vertex).xyz), v.normal);
	#endif

	
	o.worldPos = worldPos;


	#if defined(WIREFRAME_IMAGE_BASED_LIGHTING_ON)
		o.normal.xyz = worldNormal;
	#endif

	#ifdef WIREFRAME_FRESNEL_ON
		o.normal.w = saturate(fresnel + _Wireframe_FresnelBias);

		o.normal.w = lerp(o.normal.w, 1 - o.normal.w, _Wireframe_FresnelInvert);

		o.normal.w *= o.normal.w * o.normal.w;
		o.normal.w *= o.normal.w * o.normal.w;
	#endif


	#ifdef WIREFRAME_REFLECTION_ON
		float3 worldViewDir = UnityWorldSpaceViewDir(worldPos);
		o.refl.xyz = reflect( -worldViewDir, worldNormal );		
		
		o.refl.w = 1 - saturate(fresnel + _Wireframe_Reflection_Fresnel_Bias);
		o.refl.w *= o.refl.w;
		o.refl.w *= o.refl.w;
	#endif 
		  

	o.vColor = v.color;
	
	//Fog
	UNITY_TRANSFER_FOG(o, o.pos);

	#ifndef WIREFRAME_NO
		o.wireframeShaderTriangleMass = v.uv4.xyz; 
	#endif
	
	return o;				
}


//Pixel Shader///////////////////////////////////////////
float4 frag(vOutput i) : SV_Target 
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
	retColor.rgb *= lerp(float3(1, 1, 1), i.vColor.rgb, _Wireframe_BaseVertexColor);



	//Dynamic Mask
	float dynamicMask = 1;
	#ifdef WIREFRAME_DYNAMIC_MASK_ON	
		dynamicMask = WireframeShaderCalculateDynamicMask(i.worldPos);	
				
		#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
			float maskMainTexA = lerp(1 - 2 * dynamicMask, 2 * dynamicMask - 1, _Wireframe_DynamicMaskEffectsBaseTexInvert);
			
			#ifdef WIREFRAME_CUTOUT
				retColor.a = _Cutoff > 0.01 ? retColor.a * maskMainTexA : maskMainTexA;
			#else
				retColor.a *= saturate(maskMainTexA);
			#endif
		#endif
	#endif
				

	//IBL
	#ifdef WIREFRAME_IMAGE_BASED_LIGHTING_ON
		float3 ibl = ((texCUBE(_Wireframe_IBL_Cube, i.normal.xyz).rgb - 0.5) * _Wireframe_IBL_Cube_Contrast + 0.5) * _Wireframe_IBL_Cube_Intensity;
					
		retColor.rgb *= (_Wireframe_IBL_Light_Strength + ibl);

		retColor.rgb = saturate(retColor.rgb);
	#endif
			
	 
	//Reflection
	#ifdef WIREFRAME_REFLECTION_ON
		#if defined(WIREFRAME_REFLECTION_CUBE_SIMPLE)
			float4 reflTex = UNITY_SAMPLE_TEXCUBE( _Cube, i.refl.xyz ) * _ReflectColor;
		#elif defined(WIREFRAME_REFLECTION_CUBE_ADVANED)
			float4 reflTex = UNITY_SAMPLE_TEXCUBE_LOD( _Cube, i.refl.xyz, _Wireframe_Reflection_Roughness * 10) * _ReflectColor;
		#elif defined(WIREFRAME_REFLECTION_UNITY_REFLECTION_PROBES)
			float4 reflTex = UNITY_SAMPLE_TEXCUBE_LOD(unity_SpecCube0, i.refl.xyz, _Wireframe_Reflection_Roughness * 10) * _ReflectColor;
		#else
			float4 reflTex = _ReflectColor;
		#endif
		

		#ifdef WIREFRAME_HAS_TEXTURE
			retColor.rgb = lerp(retColor.rgb, reflTex.rgb, saturate(mainTex.a + _Wireframe_Reflection_Strength * 2 - 1) *  i.refl.w);
		#else
			retColor.rgb = lerp(retColor.rgb, reflTex.rgb, _Wireframe_Reflection_Strength *  i.refl.w);
		#endif
	#endif

	 
	//Wire
	#ifndef WIREFRAME_NO
		
		float4 wireTexColor = tex2D(_Wireframe_ColorTexture, i.uv.zw);
		wireTexColor.rgb *= lerp(float3(1, 1, 1), i.vColor.rgb, _Wireframe_WireVertexColor);

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

			#ifdef WIREFRAME_MULTIPLY
				retColor.rgb = lerp(float3(1, 1, 1), retColor.rgb, retColor.a);
			#endif

			#ifdef WIREFRAME_ADDATIVE
				retColor.rgb = lerp(float3(0, 0, 0), retColor.rgb, retColor.a);
			#endif
			

			#ifdef WIREFRAME_FRESNEL_ON
				_Wireframe_Color.a *= i.normal.w;
			#endif	

			DoWire(wireTexColor, retColor, i.wireframeShaderTriangleMass, i.worldPos, dynamicMask, wireEmission);
		#endif

		//Emission
		retColor.rgb += wireEmission;

	#else

		#if defined(WIREFRAME_CUTOUT)
			clip(retColor.a - _Cutoff);
		#elif defined(WIREFRAME_TRANSPARENT)

			#ifdef WIREFRAME_DYNAMIC_MASK_ON
			//retColor.a = 0;
			#endif
		#endif

	#endif

	
	//Fog
	#if defined(WIREFRAME_ADDATIVE)
		UNITY_APPLY_FOG_COLOR(i.fogCoord, retColor, float4(0,0,0,0)); // fog towards black due to our blend mode
	#elif defined(WIREFRAME_MULTIPLY)
		UNITY_APPLY_FOG_COLOR(i.fogCoord, retColor, float4(1,1,1,1)); // fog towards white due to our blend mode
	#else
		UNITY_APPLY_FOG(i.fogCoord, retColor);
	#endif

	//Alpha
	#if !defined(WIREFRAME_CUTOUT) && !defined(WIREFRAME_TRANSPARENT)
		UNITY_OPAQUE_ALPHA(retColor.a);
	#endif

	return retColor;
} 


#endif
