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
	}
		SubShader
		{
			Pass
			{
				Tags {"LightMode" = "ForwardBase"}
				Name "lighting"

				//不要裁剪背面
				Cull Off

				CGPROGRAM
				...
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
					o.pos = UnityObjectToClipPos(v.vertex);
					//根据缩放和偏移计算diffuse、normal、noise纹理坐标
					o.uv0 = TRANSFORM_TEX(v.texcoord, _MainTex);
					o.uv1 = TRANSFORM_TEX(v.texcoord, _BumpMap);
					o.uv2 = TRANSFORM_TEX(v.texcoord, _NoiseMap);

					//normal、tangent、bitangent由模型空间-->世界空间，构建tbn+position矩阵
					fixed3 worldNormal = normalize(UnityObjectToWorldNormal(v.normal));
					fixed3 worldTangent = normalize(UnityObjectToWorldDir(v.tangent.xyz));
					fixed3 worldBitangent = normalize(cross(worldNormal, worldTangent) * v.tangent.w);
					float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
					o.tbnp0 = float4(worldTangent.x, worldBitangent.x, worldNormal.x, worldPos.x);
					o.tbnp1 = float4(worldTangent.y, worldBitangent.y, worldNormal.y, worldPos.y);
					o.tbnp2 = float4(worldTangent.z, worldBitangent.z, worldNormal.z, worldPos.z);
					//计算阴影纹理坐标_ShadowCoord
					TRANSFER_SHADOW(o);

					return o;
				}

				float4 frag(v2f i) : SV_TARGET
				{
					//采样noise,与阈值比较进行clip
					fixed3 noise = tex2D(_NoiseMap, i.uv2).rgb;
					clip(noise.r - _DissolveThreshold);

					//拼接片元世界坐标
					float3 worldPos = float3(i.tbnp0.w, i.tbnp1.w, i.tbnp2.w);
					//采样材质漫反射颜色，获得材质反射率
					fixed3 albedo = tex2D(_MainTex, i.uv0).rgb;
					//环境光部分
					fixed3 ambient = UNITY_LIGHTMODEL_AMBIENT.xyz * albedo;
					//半兰伯特模型计算diffuse，Blinn-Phong模型计算specular
					fixed3 worldLightDir = normalize(UnityWorldSpaceLightDir(worldPos));
					fixed3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
					fixed3 bump = UnpackNormal(tex2D(_BumpMap, i.uv1));
					bump.xy *= _BumpScale;
					bump.z = sqrt(1.0 - saturate(dot(bump.xy, bump.xy)));
					bump = normalize(half3(dot(i.tbnp0.xyz, bump), dot(i.tbnp1.xyz, bump), dot(i.tbnp2.xyz, bump)));
					fixed halfLambert = dot(bump, worldLightDir) * 0.5 + 0.5;
					fixed3 diffuse = _LightColor0.rgb * albedo * halfLambert;
					fixed3 hDir = normalize(worldLightDir + worldViewDir);
					fixed3 specular = _LightColor0.rgb * _Specular.rgb * pow(max(0, dot(bump, hDir)), _Gloss);

					//计算光衰和阴影
					UNITY_LIGHT_ATTENUATION(atten, i, worldPos);

					//_LineWidth控制消融颜色作用的范围。与光照颜色进行lerp
					fixed t = 1 - smoothstep(0.0, _LineWidth, noise.r - _DissolveThreshold);
					fixed3 finalColor = ambient + (diffuse + specular) * atten;

					if (_DissolveStartPosX < i.objectPos.x)
					{
						//采样noise,与阈值比较进行clip
						fixed3 noise = tex2D(_NoiseMap, i.uv2).rgb;
						clip(noise.r - _DissolveThreshold);

						//在消融边缘增加边缘颜色，_LineWidth * 0.5宽度外保持原消融颜色
						fixed3 finalDisscolveColor = lerp(_DissolveColor, _DissolveBorderColor, step(i.objectPos.x - _DissolveStartPosX, _LineWidth * 0.5));
						//_LineWidth控制消融颜色作用的范围。与光照颜色进行lerp
						fixed t = smoothstep(0.0, _LineWidth, noise.r - _DissolveThreshold) * 0.8;
						finalColor = lerp(ambient + (diffuse + specular) * atten, finalDisscolveColor, t * step(0.001, _DissolveThreshold));
					}

					return float4(finalColor, 1.0);
				}

				ENDCG
			}
		}
}
