// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "QFX/ImagyVFX/Distortion/DistorionShaker" {
	Properties{
		[HDR]_Color("Color", Color) = (0.5,0.5,0.5,0.5)
		_MainTex("Particle Texture", 2D) = "white" {}
		_DistTex("Distort Texture", 2D) = "white" {}
		_Distortion ("Distortion", Float) = 0.05
		_Shake ("Shake", Float) = 1
	}
		Category{
			Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }
			Blend SrcAlpha OneMinusSrcAlpha
			Cull Back Lighting Off ZWrite Off

			SubShader {
				GrabPass{ "_GrabTexture" }
				Pass {
					CGPROGRAM
					#pragma vertex vert
					#pragma fragment frag

					#include "UnityCG.cginc"

					fixed4 _Color;
                    sampler2D _MainTex;
					sampler2D _GrabTexture;
					sampler2D _DistTex;
					half _Distortion, _Shake;


					struct appdata_t {
						float4 vertex : POSITION;
						fixed4 color : COLOR;
						float2 texcoord : TEXCOORD0;
					};

					struct v2f {
						float4 vertex : SV_POSITION;
						half4 texcoord : TEXCOORD0;
						float4 color : COLOR;
						half4 screenuv : TEXCOORD1;
					};

					float4 _MainTex_ST;

					v2f vert(appdata_t v)
					{
						v2f o;
						UNITY_INITIALIZE_OUTPUT(v2f, o);
						o.vertex = UnityObjectToClipPos(v.vertex);
						o.texcoord.xy = TRANSFORM_TEX(v.texcoord, _MainTex);
						half4 screenpos = ComputeGrabScreenPos(o.vertex);
						o.screenuv.xy = screenpos.xy / screenpos.w;
						o.color = v.color;
						return o;
					}

					float4 frag(v2f i) : SV_Target
					{
						float2 suv = i.texcoord;
						suv.y += _Time.y;
						float4 shakeTex = tex2D(_MainTex, suv * _Shake) ;

						half4 distTex = tex2D(_DistTex, i.texcoord + shakeTex);
						float4 mainTex = tex2D(_MainTex, i.texcoord + shakeTex );
						
						half2 distOffest = (distTex.xy * 2 - 1) * _Distortion * i.color.a;

						half2 uv = i.screenuv.xy + distOffest;
						half4 grabTex = tex2D(_GrabTexture, uv);
						half4 color = 2.0f * i.color * _Color * mainTex;

						color = grabTex + mainTex * color;
						color.a = saturate(color.a);

						return color;
					}
					ENDCG
				}
			}
		}
}
