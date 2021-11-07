#ifndef WIREFRAME_BUILTIN_RP_CORE_CGINC
#define WIREFRAME_BUILTIN_RP_CORE_CGINC

#include "WireframeShader.cginc"

#if defined(WIREFRAME_DYNAMIC_MASK_PLANE) || defined(WIREFRAME_DYNAMIC_MASK_SPHERE) || defined(WIREFRAME_DYNAMIC_MASK_BOX)
	#define WIREFRAME_DYNAMIC_MASK_ON
#endif 
 
  

float _WireframeShader_Smoothness;
float _WireframeShader_Thickness;
float _WireframeShader_Diameter;

float4 _Wireframe_Color;
float _Wireframe_ColorEmissionStrength;

sampler2D _Wireframe_ColorTexture;
float4 _Wireframe_ColorTexture_ST;
float2 _Wireframe_ColorTexture_Scroll;
float _Wireframe_WireVertexColor;

float _Wireframe_MetaPassMultiplier;

#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON	
	float _Wireframe_TransparentTex_Invert;
	float _Wireframe_TransparentTex_Alpha_Offset;
#endif

#ifdef WIREFRAME_FRESNEL_ON
	float _Wireframe_FresnelBias;
	float _Wireframe_FresnelInvert;

	#if defined(WIREFRAME_PHYSICALLY_BASED) 
		float _Wireframe_FresnelPow;
	#endif
#endif

#ifdef WIREFRAME_DISTANCE_FADE_ON
	float _Wireframe_DistanceFadeStart;
	float _Wireframe_DistanceFadeEnd;
#endif

#ifdef WIREFRAME_DYNAMIC_MASK_ON	
	float _Wireframe_DynamicMaskEdgeSmooth;
	float _Wireframe_DynamicMaskInvert;	
	float _Wireframe_DynamicMaskEffectsBaseTexInvert;   	
#endif



#define WIREFRAME_CUTOUT_HALF_VALUE 0.25


#ifdef UNITY_PASS_META
	#ifdef WIREFRAME_TRANSPARENT
		#define WIREFRAME_EMISSION_STRENGTH 0 
	#else
		#ifdef _EMISSION
			#define WIREFRAME_EMISSION_STRENGTH _Wireframe_MetaPassMultiplier * (1 + _Wireframe_ColorEmissionStrength)
		#else
			#define WIREFRAME_EMISSION_STRENGTH 0
		#endif
	#endif
#else
	#define WIREFRAME_EMISSION_STRENGTH _Wireframe_ColorEmissionStrength
#endif


inline float GetDistanceFadeValue(float3 worldPos)
{
	#ifdef WIREFRAME_DISTANCE_FADE_ON
		return WireframeShaderDistanceFade(_WorldSpaceCameraPos, worldPos, _Wireframe_DistanceFadeStart, _Wireframe_DistanceFadeEnd);
	#else
		return 1;
	#endif
}


inline float WireOpaque(float4 wireTexColor, inout float4 srcColor, float3 mass, float3 worldPos, float maskValue, out float3 emission)
{
	float value = 1 - WireframeShaderReadTrangleMassFromUV(mass, _WireframeShader_Thickness, _WireframeShader_Smoothness, _WireframeShader_Diameter);
			

	#ifdef WIREFRAME_DYNAMIC_MASK_ON
		value = lerp(value, 1, maskValue);

		#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
			#if defined(WIREFRAME_ADDATIVE)
				srcColor.rgb = lerp(srcColor.rgb * (1 - maskValue), srcColor.rgb * maskValue, _Wireframe_DynamicMaskEffectsBaseTexInvert);
			#elif defined(WIREFRAME_MULTIPLY)
				srcColor.rgb = lerp(lerp(srcColor.rgb, float3(1, 1, 1), maskValue), lerp(float3(1, 1, 1), srcColor.rgb, maskValue), _Wireframe_DynamicMaskEffectsBaseTexInvert);
			#endif
		#endif 
	#endif 

	float wireColorAlpha = _Wireframe_Color.a * GetDistanceFadeValue(worldPos);

	srcColor = lerp(lerp(srcColor, _Wireframe_Color * wireTexColor, wireColorAlpha), srcColor, value);

		

	emission = wireTexColor.rgb * _Wireframe_Color.rgb * (1 - value) * wireColorAlpha * WIREFRAME_EMISSION_STRENGTH;
	

	return value;
}

#ifdef WIREFRAME_TRANSPARENT
inline float WireTransparent(float4 wireTexColor, inout float4 srcColor, float3 mass, float3 worldPos, float maskValue, out float3 emission)
{
	float value = 1 - WireframeShaderReadTrangleMassFromUV(mass, _WireframeShader_Thickness, _WireframeShader_Smoothness, _WireframeShader_Diameter);


	float4 wColor = _Wireframe_Color * wireTexColor;


	#ifdef WIREFRAME_SAME_COLOR
		srcColor.rgb = wColor.rgb;
	#endif		
	
		 
	#ifdef WIREFRAME_DYNAMIC_MASK_ON 
		value = lerp(value, 1, maskValue);

		#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
			srcColor.a = lerp(srcColor.a, maskValue * srcColor.a, _Wireframe_DynamicMaskEffectsBaseTexInvert);
		#endif
	#endif 	   

	float wireColorAlpha = _Wireframe_Color.a * GetDistanceFadeValue(worldPos);
	
	float3 wireColor = lerp(lerp(wColor.rgb, srcColor.rgb, srcColor.a), wColor.rgb, wireColorAlpha);
	wireColor = lerp(srcColor.rgb, wireColor, wireColorAlpha);

	srcColor.rgb = lerp(wireColor.rgb, srcColor.rgb, value);
	srcColor.a = saturate(srcColor.a + (1 - value) * wireColorAlpha);

	
	emission = wColor.rgb * (1 - value) * wireColorAlpha * WIREFRAME_EMISSION_STRENGTH;


	return value;
}
#endif

#ifdef WIREFRAME_CUTOUT
inline float WirCutout(float4 wireTexColor, inout float4 srcColor, float3 mass, float3 worldPos, float maskValue, float customAlpha, float cutoff, out float3 emission)
{
	float value = 1 - WireframeShaderReadTrangleMassFromUV(mass, _WireframeShader_Thickness, _WireframeShader_Smoothness, _WireframeShader_Diameter);


	float4 wColor = _Wireframe_Color * wireTexColor;

	#ifdef WIREFRAME_SAME_COLOR
		srcColor.rgb = wColor.rgb;
	#endif 
	  

	#ifdef WIREFRAME_DYNAMIC_MASK_ON
		value = lerp(value, 1, maskValue); 
	#endif 


	value = lerp(1, value, GetDistanceFadeValue(worldPos));

	  
	float clipValue = 1;
	#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON

		float3 transColor = lerp(srcColor.rgb, wColor.rgb, customAlpha);
		srcColor.rgb = cutoff > 0.01 ? lerp(transColor, (srcColor.a - cutoff) > 0 ? srcColor.rgb : transColor, value) : lerp(transColor, srcColor.rgb, value);

		clipValue = srcColor.a - cutoff;
		clipValue = (1 - value) * customAlpha > 0.5 ? 1 : clipValue;
		 
	#else
			
		srcColor.rgb = lerp(wColor.rgb, (srcColor.a - cutoff + 0.01) > 0 ? srcColor.rgb : wColor.rgb, value);
		 
		clipValue = srcColor.a - cutoff;
		clipValue = (1 - value) > 0.5 ? 1 : clipValue;
	#endif


	
	#ifdef WIREFRAME_SHADOWCASTER	
		emission = 0;
	#else
		emission = wColor.rgb * (1 - value) * WIREFRAME_EMISSION_STRENGTH;
		#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
			emission *= customAlpha;
		#endif
	#endif


	return clipValue;
}
#endif

 
#ifdef WIREFRAME_DYNAMIC_MASK_ON 
inline float WireframeShaderCalculateDynamicMask(float3 maskPos)
{
	#if defined(WIREFRAME_DYNAMIC_MASK_PLANE)
		
		return 1 - WireframeShaderMaskPlane(maskPos, _Wireframe_DynamicMaskEdgeSmooth, _Wireframe_DynamicMaskInvert);

	#elif defined(WIREFRAME_DYNAMIC_MASK_SPHERE)

		return 1 - WireframeShaderMaskSphere(maskPos, _Wireframe_DynamicMaskEdgeSmooth, _Wireframe_DynamicMaskInvert);

	#elif defined(WIREFRAME_DYNAMIC_MASK_BOX)

		return 1 - WireframeShaderMaskBox(maskPos, _Wireframe_DynamicMaskEdgeSmooth, _Wireframe_DynamicMaskInvert);
 
	#else 

		return 0;

	#endif
}
#endif


#if defined(WIREFRAME_CUTOUT)
#define DoWire(wireTexColor,srcColor,mass,worldPos,dynamicMaskValue,customAlpha,cutoff,emission) WirCutout(wireTexColor,srcColor,mass.xyz,worldPos,dynamicMaskValue,customAlpha,cutoff,emission)
#elif defined(WIREFRAME_TRANSPARENT)
#define DoWire(wireTexColor,srcColor,mass,worldPos,dynamicMaskValue,emission) WireTransparent(wireTexColor,srcColor,mass.xyz,worldPos,dynamicMaskValue,emission)
#else
#define DoWire(wireTexColor,srcColor,mass,worldPos,dynamicMaskValue,emission) WireOpaque(wireTexColor,srcColor,mass.xyz,worldPos,dynamicMaskValue,emission)
#endif

#endif
