// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "QFX/ImagyVFX/InkAura" {
	Properties{
		[HDR]_Color("Color", Color) = (0.5,0.5,0.5,0.5)
		_MainTex("Particle Texture", 2D) = "white" {}
		_MainTex2("Particle Texture 2", 2D) = "white" {}
		_AnimTex("Anim Texture", 2D) = "white" {}
		_Params("XY=Uv Speed, Z=Combine", Float) = (0,0,0,0)
		_Offset("Offset", Range(0,1)) = 0
	}
		Category{
			Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }
			Blend SrcAlpha OneMinusSrcAlpha
			Cull Off Lighting Off ZWrite Off

			SubShader {
				Pass {
					CGPROGRAM
					#pragma vertex vert
					#pragma fragment frag

					#include "UnityCG.cginc"

					fixed4 _Color;
                    sampler2D _MainTex, _AnimTex, _MainTex2;

					struct appdata_t {
						float4 vertex : POSITION;
						fixed4 color : COLOR;
						float2 uv : TEXCOORD0;
						float2 uvD : TEXCOORD1;
					};

					struct v2f {
						float4 vertex : SV_POSITION;
						half4 uv : TEXCOORD0;
						half4 uvD : TEXCOORD1;
						float4 color : COLOR;
						half4 screenuv : TEXCOORD2;
					};

					float4 _MainTex_ST, _AnimTex_ST, _MainTex2_ST;
					float4 _Params;
					float _Offset;

					v2f vert(appdata_t v)
					{
						v2f o;
						UNITY_INITIALIZE_OUTPUT(v2f, o);

						o.vertex = UnityObjectToClipPos(v.vertex);

						o.uv.xy = TRANSFORM_TEX(v.uv, _MainTex);
						o.uvD.xy = TRANSFORM_TEX(v.uvD, _AnimTex);
						
					 	o.uvD.x += _Params.x * _Time.y;
						o.uvD.y += _Params.y * _Time.y;

						half4 screenpos = ComputeGrabScreenPos(o.vertex);
						o.screenuv.xy = screenpos.xy / screenpos.w;

						return o;
					}

					float4 frag(v2f i) : SV_Target
					{
						float4 movTex = tex2D(_AnimTex, i.uvD);
						float4 newUv1 = i.uv + movTex * _Params.z;

						float4 newUv2 = 1 - i.uv + movTex * _Params.z;
						newUv1.x = saturate(newUv1.x + _Offset);

						float4 mainTex1 = tex2D(_MainTex, newUv1);
						float4 mainTex2 = tex2D(_MainTex, newUv2);

						float4 mainTex3 = tex2D(_MainTex2, newUv1);
						float4 combinedTex = (mainTex1 * mainTex2);
						float4 color = (combinedTex * mainTex3 )* _Color;

						return color;
					}
					ENDCG
				}
			}
		}
}
