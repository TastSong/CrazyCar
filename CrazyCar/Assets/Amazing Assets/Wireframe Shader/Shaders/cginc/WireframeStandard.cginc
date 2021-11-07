#ifndef WIREFRAME_STANDRAD_CGINC
#define WIREFRAME_STANDRAD_CGINC


#include "../cginc/WireframeBuiltinRPCore.cginc"


inline void SetupWireframe(float3 barycentric, float2 wireTexUV, float3 worldPos, float3 worldNormal, inout float3 dstColor, inout float alpha, out float3 emission)
{
	wireTexUV += _Wireframe_ColorTexture_Scroll.xy * _Time.x;

	float4 wireTexColor = tex2D(_Wireframe_ColorTexture, wireTexUV);

	
	
	//Transparency
	#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON 
		float customAlpha = wireTexColor.a;

		customAlpha = lerp(customAlpha, 1 - customAlpha, _Wireframe_TransparentTex_Invert);

		customAlpha = saturate(customAlpha + _Wireframe_TransparentTex_Alpha_Offset);

		_Wireframe_Color.a *= customAlpha;
	#endif

	//Fresnel
	#ifdef WIREFRAME_FRESNEL_ON

		float3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));

		float fresnel = saturate(dot(worldViewDir, worldNormal));

		float wFresnel = saturate(fresnel + _Wireframe_FresnelBias);
		wFresnel = lerp(wFresnel, 1 - wFresnel, _Wireframe_FresnelInvert);

		wFresnel = pow(wFresnel, _Wireframe_FresnelPow);

		_Wireframe_Color.a *= wFresnel;
	#endif 

	//Dynamic Mask
	float dynamicMask = 1;
	#ifdef WIREFRAME_DYNAMIC_MASK_ON
		dynamicMask = WireframeShaderCalculateDynamicMask(worldPos);

		#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
			
			#ifdef _ALPHATEST_ON
				float maskMainTexA = lerp(1 - 2 * dynamicMask, 2 * dynamicMask - 1, _Wireframe_DynamicMaskEffectsBaseTexInvert);
		
				clip(maskMainTexA);
			#endif

			#ifdef _ALPHABLEND_ON
				alpha *= lerp(1 - dynamicMask, dynamicMask, _Wireframe_DynamicMaskEffectsBaseTexInvert);
			#endif  
			
		#endif
	#endif  
		


	float4 retColor = dstColor.rgbb; 
	
	WireOpaque(wireTexColor, retColor, barycentric, worldPos, dynamicMask, emission);
	dstColor = retColor.rgb;
}


#endif
