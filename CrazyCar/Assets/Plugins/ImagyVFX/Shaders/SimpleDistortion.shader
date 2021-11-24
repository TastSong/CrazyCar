// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "QFX/ImagyVFX/Distortion/SimpleDistortion" {
	Properties{
		[HDR]_Color("Color", Color) = (0.5,0.5,0.5,0.5)
		_MainTex("Particle Texture", 2D) = "white" {}
		_DistTex("Distort Texture", 2D) = "white" {}
		_Params("_Params (X=OffsetMultiply, YZW=Unused)", Float) = (0.05, 0, 0, 0)
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
					float4 _Params;

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
						half4 distTex = tex2D(_DistTex, i.texcoord.xy);
						half4 mainTex = tex2D(_MainTex, i.texcoord.xy);
						half2 distOffest = (distTex.xy * 2 - 1) * _Params.x * i.color.a;

						half2 uv = i.screenuv.xy + distOffest;
						half4 grabTex = tex2D(_GrabTexture, uv);
						half4 col = 2.0f * i.color * _Color * mainTex;
						
						col = grabTex + mainTex * col;
						col.a = saturate(col.a);

						return col;
					}
					ENDCG
				}
			}
		}
}
