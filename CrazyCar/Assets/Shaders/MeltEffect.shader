Shader "Self/MeltEffect"
{
	Properties
	{
		_MainTex("Main Texture", 2D) = "white" {}
		_BumpMap("Normal Map", 2D) = "bump" {}
		_Specular("Specular", Color) = (1, 1, 1, 1)
		_BumpScale("Bump Scale", Float) = 1.0
		_Gloss("Gloss", Range(8.0, 256)) = 20

		_NoiseMap("Noise Map", 2D) = "white" {}
		_DissolveThreshold("Dissolve Threshold", Range(0.0, 1.0)) = 0.0
		_LineWidth("Dissolve Line Width", Range(0.0, 0.2)) = 0.1
		_DissolveColor("Dissolve First Color", Color) = (0, 0, 1, 1)

		_OffsetDirection("Offset Direction", Vector) = (0, 0, 0, 0)
		_OffsetThreshold("Vertex Offset Threshold", Range(0.0, 1.0)) = 0.5
		_OffsetScale("Vertex Offset Scale", Range(0.0, 1.0)) = 0.3
	}
	SubShader{

		Pass
		{
			Tags {
			"RenderPipeline" = "UniversalPipeline"
			"LightMode" = "ForwardBase"}
			Name "lighting"

				//不要裁剪背面
				Cull Off

				HLSLINCLUDE
				#include"Packages/com.unity.render-pipelines.universal/ShaderLibrary/Lighting.hlsl"

				#pragma multi_compile _ _MAIN_LIGHT_SHADOWS
				#pragma vertex vert
				#pragma fragment frag

				sampler2D _MainTex;
				float4 _MainTex_ST;
				sampler2D _BumpMap;
				float4 _BumpMap_ST;
				float4 _Specular;
				float _BumpScale;
				float _Gloss;
				sampler2D _NoiseMap;
				float4 _NoiseMap_ST;
				float _DissolveThreshold;
				float _LineWidth;
				float _DissolveColor;

				float4 _OffsetDirection;
				float _OffsetThreshold;
				float _OffsetScale;

				struct a2v
				{
					float4 vertex : POSITION;
					float3 normal : NORMAL;
					float4 tangent : TANGENT;
					float4 texcoord : TEXCOORD0;
				};

				struct v2f
				{
					float4 pos : SV_POSITION;
					float2 uv0 : TEXCOORD0;
					float2 uv1 : TEXCOORD1;
					float2 uv2 : TEXCOORD2;
					float4 tbnp0 : TEXCOORD3;
					float4 tbnp1 : TEXCOORD4;
					float4 tbnp2 : TEXCOORD5;
				};

				v2f vert(a2v v)
				{
					v2f o;
					//模型空间-->裁剪空间
					v.vertex.xyz += _OffsetDirection * saturate(_OffsetThreshold) * _OffsetScale;
					o.pos = TransformObjectToHClip(v.vertex);
					//根据缩放和偏移计算diffuse、normal、noise纹理坐标
					o.uv0 = TRANSFORM_TEX(v.texcoord, _MainTex);
					o.uv1 = TRANSFORM_TEX(v.texcoord, _BumpMap);
					o.uv2 = TRANSFORM_TEX(v.texcoord, _NoiseMap);

					//normal、tangent、bitangent由模型空间-->世界空间，构建tbn+position矩阵
					half3 worldNormal = normalize(TransformObjectToWorldNormal(v.normal));
					half3 worldTangent = normalize(TransformObjectToWorldDir(v.tangent.xyz));
					half3 worldBitangent = normalize(cross(worldNormal, worldTangent) * v.tangent.w);
					float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
					o.tbnp0 = float4(worldTangent.x, worldBitangent.x, worldNormal.x, worldPos.x);
					o.tbnp1 = float4(worldTangent.y, worldBitangent.y, worldNormal.y, worldPos.y);
					o.tbnp2 = float4(worldTangent.z, worldBitangent.z, worldNormal.z, worldPos.z);
					//计算阴影纹理坐标_ShadowCoord
					//TRANSFER_SHADOW(o);
					//o.shadowCoord = TransformWorldToShadowCoord(worldSpaePosition);

					return o;
				}

				float4 frag(v2f i) : SV_TARGET
				{
					//采样noise,与阈值比较进行clip
					half3 noise = tex2D(_NoiseMap, i.uv2).rgb;
					clip(noise.r - _DissolveThreshold);

					//拼接片元世界坐标
					float3 worldPos = float3(i.tbnp0.w, i.tbnp1.w, i.tbnp2.w);
					//采样材质漫反射颜色，获得材质反射率
					half3 albedo = tex2D(_MainTex, i.uv0).rgb;
					//环境光部分
					half3 ambient = UNITY_LIGHTMODEL_AMBIENT.xyz * albedo;
					//半兰伯特模型计算diffuse，Blinn-Phong模型计算specular
					//half3 worldLightDir = normalize(TransformWorldSpaceLightDir(worldPos));
					half3 worldLightDir = _MainLightPosition.xyz - TransformObjectToWorld(worldPos);
					half3 worldViewDir =  _WorldSpaceCameraPos.xyz - worldPos;
					half3 bump = UnpackNormal(tex2D(_BumpMap, i.uv1));
					bump.xy *= _BumpScale;
					bump.z = sqrt(1.0 - saturate(dot(bump.xy, bump.xy)));
					bump = normalize(half3(dot(i.tbnp0.xyz, bump), dot(i.tbnp1.xyz, bump), dot(i.tbnp2.xyz, bump)));
					half halfLambert = dot(bump, worldLightDir) * 0.5 + 0.5;
					half3 diffuse = _MainLightColor.rgb * albedo * halfLambert;
					half3 hDir = normalize(worldLightDir + worldViewDir);
					half3 specular = _MainLightColor.rgb * _Specular.rgb * pow(max(0, dot(bump, hDir)), _Gloss);

					//计算光衰和阴影
					UNITY_LIGHT_ATTENUATION(atten, i, worldPos);

					//_LineWidth控制消融颜色作用的范围。与光照颜色进行lerp
					half t = 1 - smoothstep(0.0, _LineWidth, noise.r - _DissolveThreshold);
					half3 finalColor = lerp(ambient + (diffuse + specular) * atten, _DissolveColor, t * step(0.001, _DissolveThreshold));

					return float4(finalColor, 1.0);
				}

				ENDHLSL
		}
		Pass
		{
			Tags { "LightMode" = "ShadowCaster" }

			Name "shadowCaster"

			HLSLPROGRAM
			#include"Packages/com.unity.render-pipelines.universal/ShaderLibrary/Lighting.hlsl"

			#pragma multi_compile _ _MAIN_LIGHT_SHADOWS
			#pragma vertex vert
			#pragma fragment frag

			sampler2D _NoiseMap;
			float4 _NoiseMap_ST;
			float _DissolveThreshold;

			struct v2f
			{
			//frag需要的shadowCaster信息，包括位置、bias、depth等
			V2F_SHADOW_CASTER;
			//noise map的纹理坐标
			float2 uv0 : TEXCOORD0;
			};

			v2f vert(appdata_base v)
			{
				v2f o;
				//完成：
				//1.UnityClipSpaceShadowCasterPos：根据模型空间pos和normal，计算裁剪空间阴影位置，与光照配置中的NormalBias有关（unity_LightShadowBias.z==NormalBias）
				//2.UnityApplyLinearShadowBias：增加裁剪空间中Z值。与光照参数中的Bias、UNITY_NEAR_CLIP_VALUE、UNITY_REVERSED_Z有关
				TRANSFER_SHADOW_CASTER_NORMALOFFSET(o)
					//根据缩放和偏移计算noise map纹理坐标
					o.uv0 = TRANSFORM_TEX(v.texcoord, _NoiseMap);

					return o;
				}

			half4 frag(v2f i) : SV_Target
			{
				//采样noise,与阈值比较，未通过不显示阴影
				half3 noise = tex2D(_NoiseMap, i.uv0).rgb;
				clip(noise.r - _DissolveThreshold);
				//平行光、聚光灯情况下返回 0（黑色）
				//点光源情况下调用UnityEncodeCubeShadowDepth得到cubemap shadow值
				SHADOW_CASTER_FRAGMENT(i)
			}

			ENDHLSL
		}
	}
}
