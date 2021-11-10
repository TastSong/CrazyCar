#ifndef WIREFRAME_PHYSICALLY_BASED_CGINC
#define WIREFRAME_PHYSICALLY_BASED_CGINC

  
#include "../cginc/WireframeBuiltinRPCore.cginc"

#ifdef UNITY_PASS_META
	#ifndef WIREFRAME_LIGHT_ATTENTION_ON
	#define WIREFRAME_LIGHT_ATTENTION_ON
	#endif
#endif

//Variables//////////////////////////////////
float4 _Color;
float _Wireframe_BaseVertexColor;
sampler2D _MainTex;
float4 _MainTex_ST;
float2 _Wireframe_MainTex_Scroll;

float _Glossiness;
float _Metallic;

float _Wireframe_AmbientOcclusion;
float _Wireframe_AmbientOcclusionStrength; 
sampler2D _Wireframe_AmbientOcclusionMap;

#ifdef _NORMALMAP
	float _Wireframe_NormalScale;
	sampler2D _Wireframe_NormalMap;
#endif


#ifdef WIREFRAME_CUTOUT 
	float _Cutoff;
#endif
	 


#ifdef UNITY_PASS_FORWARDADD
#define UNITY_APPLY_FOG_PBR(coord,col)  UNITY_CALC_FOG_FACTOR((coord).x); UNITY_FOG_LERP_COLOR(col,float4(0,0,0,0),unityFogFactor)
#else
#define UNITY_APPLY_FOG_PBR(coord,col)  UNITY_CALC_FOG_FACTOR((coord).x); UNITY_FOG_LERP_COLOR(col,unity_FogColor,unityFogFactor)
#endif


//Struct/////////////////////////////////////////////////////////
struct Input 
{
	float4 texcoord; // xy - uv, zw - worldNormal.xy (worldNormal.z inside 'wireframeShaderTriangleMass.w')
		
	float4 texcoord1;	//xy - wireTex coord
	 
	float3 worldPos;

	float4 wireframeShaderTriangleMass; //xyz - trangle mass, w - worldNormal.z

	float4 color : COLOR;
};

//Vertex Shader///////////////////////////////////////////
void vert (inout appdata_full v, out Input o) 
{
	UNITY_INITIALIZE_OUTPUT(Input,o);	


//Curved World
#if defined(CURVEDWORLD_IS_INSTALLED) && !defined(CURVEDWORLD_DISABLED_ON)
   #ifdef CURVEDWORLD_NORMAL_TRANSFORMATION_ON
      CURVEDWORLD_TRANSFORM_VERTEX_AND_NORMAL(v.vertex, v.normal, v.tangent)
   #else
      CURVEDWORLD_TRANSFORM_VERTEX(v.vertex)
   #endif
#endif


	o.texcoord.xy = TRANSFORM_TEX(v.texcoord.xy, _MainTex);		
	o.texcoord.xy += _Wireframe_MainTex_Scroll.xy * _Time.x;

	o.texcoord1.xy = TRANSFORM_TEX(v.texcoord.xy, _Wireframe_ColorTexture);
	o.texcoord1.xy += _Wireframe_ColorTexture_Scroll.xy * _Time.x;

	#ifdef WIREFRAME_FRESNEL_ON
		float3 worldNormal = UnityObjectToWorldNormal(v.normal);
		o.texcoord.zw = worldNormal.xy;
		o.wireframeShaderTriangleMass.w = worldNormal.z;
	#endif

	#ifndef WIREFRAME_NO
		o.wireframeShaderTriangleMass.xyz = v.texcoord3;
	#else
		o.wireframeShaderTriangleMass.xyz = 0;
	#endif
}



//Pixel Shader///////////////////////////////////////////
void surf (Input IN, inout SurfaceOutputStandard o) 
{

	float4 mainTex = tex2D (_MainTex, IN.texcoord.xy);

	//Color
	#if defined(WIREFRAME_NO_COLOR_BLACK)
		float4 retColor = 0;
	#elif defined(WIREFRAME_NO_COLOR_WHITE)
		float4 retColor = 1;
	#else
		float4 retColor = mainTex * _Color;
	#endif	


	retColor.rgb *= lerp(float3(1, 1, 1), IN.color.rgb, _Wireframe_BaseVertexColor);


	#if defined(_NORMALMAP)
		o.Normal = UnpackNormal(tex2D(_Wireframe_NormalMap, IN.texcoord.xy));
		o.Normal = normalize(o.Normal * float3(_Wireframe_NormalScale, _Wireframe_NormalScale, 1));
	#elif defined(_NORMALMAP_FAKE)
		o.Normal = float3(0, 0, 1);
	#endif

	
	// Metallic and smoothness come from slider variables
	o.Metallic = _Metallic;
	o.Smoothness = _Glossiness;
	 
	o.Occlusion = lerp(1, LerpOneTo(tex2D (_Wireframe_AmbientOcclusionMap, IN.texcoord.xy).g, _Wireframe_AmbientOcclusionStrength), _Wireframe_AmbientOcclusion);
	 
	
	#ifdef WIREFRAME_FRESNEL_ON		
		float3 worldViewDir = normalize(UnityWorldSpaceViewDir(IN.worldPos));
		
		float fresnel = saturate(dot (worldViewDir, float3(IN.texcoord.zw, IN.wireframeShaderTriangleMass.w)));

		float wFresnel = saturate(fresnel + _Wireframe_FresnelBias);
		wFresnel = lerp(wFresnel, 1 - wFresnel, _Wireframe_FresnelInvert);
		
		wFresnel = pow(wFresnel, _Wireframe_FresnelPow);

		_Wireframe_Color.a *= wFresnel;
	#endif 

	 
	 
	#ifdef WIREFRAME_NO

		#if defined(WIREFRAME_CUTOUT)
		
			#ifdef WIREFRAME_DYNAMIC_MASK_ON
				float dynamicMask = WireframeShaderCalculateDynamicMask(IN.worldPos);

				#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
					float maskMainTexA = lerp(1 - 2 * dynamicMask, 2 * dynamicMask - 1, _Wireframe_DynamicMaskEffectsBaseTexInvert);

					retColor.a = _Cutoff > 0.01 ? retColor.a * maskMainTexA : maskMainTexA;
				#endif
			#endif

			clip(retColor.a - _Cutoff);

		//Mask
		#elif defined(WIREFRAME_DYNAMIC_MASK_ON)
			float dynamicMask = WireframeShaderCalculateDynamicMask(IN.worldPos);

			#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
				float maskMainTexA = lerp(1 - 2 * dynamicMask, 2 * dynamicMask - 1, _Wireframe_DynamicMaskEffectsBaseTexInvert);

				#ifdef WIREFRAME_CUTOUT
					retColor.a = _Cutoff > 0.01 ? retColor.a * maskMainTexA : maskMainTexA;
				#else
					retColor.a *= saturate(maskMainTexA);
				#endif
			#endif
		#endif 

	#else 
		#ifdef WIREFRAME_LIGHT_ATTENTION_ON

			float4 wireTexColor = tex2D(_Wireframe_ColorTexture, IN.texcoord1.xy);
			wireTexColor.rgb *= lerp(float3(1, 1, 1), IN.color.rgb, _Wireframe_WireVertexColor);

			float3 wireEmission = 0;

			#ifdef WIREFRAME_CUTOUT

				float customAlpha = 1;
				#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
					customAlpha = wireTexColor.a;

					customAlpha = lerp(customAlpha, 1 - customAlpha, _Wireframe_TransparentTex_Invert);

					customAlpha = (customAlpha + _Wireframe_TransparentTex_Alpha_Offset) < 0.01 ? 0 : 1;
				#endif
				 
				float dynamicMask = 1;
				#ifdef WIREFRAME_DYNAMIC_MASK_ON
					dynamicMask = WireframeShaderCalculateDynamicMask(IN.worldPos);

					#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
						float maskMainTexA = lerp(1 - 2 * dynamicMask, 2 * dynamicMask - 1, _Wireframe_DynamicMaskEffectsBaseTexInvert);

						retColor.a = _Cutoff > 0.01 ? retColor.a * maskMainTexA : maskMainTexA;
					#endif
				#endif 


				float clipValue = DoWire(wireTexColor, retColor, IN.wireframeShaderTriangleMass, IN.worldPos, dynamicMask, customAlpha, _Cutoff, wireEmission);


				#ifdef WIREFRAME_CUTOUT_HALF
					clip(clipValue - WIREFRAME_CUTOUT_HALF_VALUE);
				#else
					clip(clipValue);
				#endif

			#else //WIREFRAME_CUTOUT

				#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON 
					float customAlpha = wireTexColor.a;

					customAlpha = lerp(customAlpha, 1 - customAlpha, _Wireframe_TransparentTex_Invert);

					customAlpha = saturate(customAlpha + _Wireframe_TransparentTex_Alpha_Offset);

					_Wireframe_Color.a *= customAlpha;
				#endif
			
				//Mask 
				float dynamicMask = 1;
				#ifdef WIREFRAME_DYNAMIC_MASK_ON
					dynamicMask = WireframeShaderCalculateDynamicMask(IN.worldPos);

					#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
						float maskMainTexA = lerp(1 - 2 * dynamicMask, 2 * dynamicMask - 1, _Wireframe_DynamicMaskEffectsBaseTexInvert);

						retColor.a *= maskMainTexA;
					#endif
				#endif 


				float value = DoWire(wireTexColor, retColor, IN.wireframeShaderTriangleMass, IN.worldPos, dynamicMask, wireEmission);


				#ifdef WIREFRAME_DYNAMIC_MASK_ON
					#ifdef _NORMALMAP
						float3 newNormal = float3(o.Normal.x * value, o.Normal.y * value, o.Normal.z);
						o.Normal = lerp(o.Normal, normalize(newNormal), _Wireframe_Color.a);
					#endif

					#ifdef WIREFRAME_REFLECTION_ON
						o.Emission = lerp(o.Emission, o.Emission * value, _Wireframe_Color.a);
					#endif						
				#endif

			#endif //WIREFRAME_CUTOUT

			//Emission
			o.Emission = wireEmission;

		#endif //WIREFRAME_LIGHT_ATTENTION_ON
	#endif


	o.Albedo = retColor.rgb;
	o.Alpha = retColor.a;  
}

void WireFinalColor (Input IN, SurfaceOutputStandard o, inout float4 color)
{	
	#if !defined(WIREFRAME_LIGHT_ATTENTION_ON) && !defined(WIREFRAME_NO) 

		float4 wireTexColor = tex2D(_Wireframe_ColorTexture, IN.texcoord1.xy);
		wireTexColor.rgb *= lerp(float3(1, 1, 1), IN.color.rgb, _Wireframe_WireVertexColor);

		float3 wireEmission = 0;

		#ifdef WIREFRAME_CUTOUT
			
			float customAlpha = 1;
			#ifdef WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
				customAlpha = wireTexColor.a;

				customAlpha = lerp(customAlpha, 1 - customAlpha, _Wireframe_TransparentTex_Invert);

				customAlpha = (customAlpha + _Wireframe_TransparentTex_Alpha_Offset) < 0.01 ? 0 : 1;
			#endif
				 
			float dynamicMask = 1;
			#ifdef WIREFRAME_DYNAMIC_MASK_ON
				dynamicMask = WireframeShaderCalculateDynamicMask(IN.worldPos);

				#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
					float maskMainTexA = lerp(1 - 2 * dynamicMask, 2 * dynamicMask - 1, _Wireframe_DynamicMaskEffectsBaseTexInvert);

					color.a = _Cutoff > 0.01 ? color.a * maskMainTexA : maskMainTexA;
				#endif
			#endif 
			

			#ifdef UNITY_PASS_FORWARDBASE
				float clipValue = DoWire(wireTexColor, color, IN.wireframeShaderTriangleMass, IN.worldPos, dynamicMask, customAlpha, _Cutoff, wireEmission);
			#else
				float clipValue = DoWire(0, color, IN.wireframeShaderTriangleMass, IN.worldPos, dynamicMask, customAlpha, _Cutoff, wireEmission);
			#endif


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
			
			float dynamicMask = 1;
			#ifdef WIREFRAME_DYNAMIC_MASK_ON
				dynamicMask = WireframeShaderCalculateDynamicMask(IN.worldPos);

				#ifdef WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
					float maskMainTexA = lerp(1 - 2 * dynamicMask, 2 * dynamicMask - 1, _Wireframe_DynamicMaskEffectsBaseTexInvert);

					#ifdef WIREFRAME_CUTOUT
						color.a = _Cutoff > 0.01 ? retColor.a * maskMainTexA : maskMainTexA;
					#else
						color.a *= maskMainTexA;
					#endif
				#endif
			#endif

			#ifdef UNITY_PASS_FORWARDBASE
				DoWire(wireTexColor, color, IN.wireframeShaderTriangleMass, IN.worldPos, dynamicMask, wireEmission);
			#else 
				DoWire(0, color, IN.wireframeShaderTriangleMass, IN.worldPos, dynamicMask, wireEmission);
			#endif
		#endif

		color.rgb += wireEmission;
	#endif


	//Fog
#if defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2)
	float fogCoord = mul(UNITY_MATRIX_VP, float4(IN.worldPos.xyz, 1)).z;
	UNITY_APPLY_FOG_PBR(fogCoord, color);
#endif
	
} 



#endif
