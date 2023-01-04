// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "QFX/ImagyVFX/Common/AddHDR" {
	Properties{
		[HDR]_Color("Color", Color) = (0.5,0.5,0.5,0.5)
		_MainTex("Particle Texture", 2D) = "white" {}
	}
		Category{
			Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }
			Blend SrcAlpha One
			Cull Off Lighting Off ZWrite Off

			SubShader {
				Pass {

					CGPROGRAM
					#pragma vertex vert
					#pragma fragment frag

					#include "UnityCG.cginc"

					fixed4 _Color;
                    sampler2D _MainTex;

					struct appdata_t {
						float4 position : POSITION;
						fixed4 color : COLOR;
						float2 texcoord : TEXCOORD0;
					};

					struct v2f {
						float4 position : SV_POSITION;
						fixed4 color : COLOR;
						float2 texcoord : TEXCOORD0;
					};

					float4 _MainTex_ST;

					v2f vert(appdata_t v)
					{
						v2f o;
						o.position = UnityObjectToClipPos(v.position);
						o.color = v.color;
						o.texcoord = TRANSFORM_TEX(v.texcoord,_MainTex);
						return o;
					}

					float4 frag(v2f i) : SV_Target
					{
						float4 mainTex = tex2D(_MainTex, i.texcoord);
						float4 color = 2 * i.color * mainTex * _Color;
						color.a = saturate(color.a);
						return color;
					}
					ENDCG
				}
			}
		}
}
