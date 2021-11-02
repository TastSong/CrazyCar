// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "QFX/ImagyVFX/DecalBlended" {
	Properties{
		[HDR]_TintColor("Tint Color", Color) = (0.5,0.5,0.5,1)
		_MainTex("Main Texture", 2D) = "gray" {}
		_MaskPow("Alpha Pow", Float) = 1
	}
		Subshader{
			Tags {"Queue" = "Transparent"}
			Pass {
				ZWrite Off
				Blend SrcAlpha OneMinusSrcAlpha
				Offset -1, -1

				CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag
				#include "UnityCG.cginc"

				half4 _TintColor;

				struct v2f {
					float4 vertex : SV_POSITION;
					float4 uvMainTex : TEXCOORD0;
					float2 texcoord : TEXCOORD1;
					float4 uvShadow : TEXCOORD2;
				};

				float4x4 unity_Projector;
				float4x4 unity_ProjectorClip;
				float4 _MainTex_ST;
				half _MaskPow;

				v2f vert(float4 vertex : POSITION)
				{
					v2f o;
	#if UNITY_VERSION >= 550
					o.vertex = UnityObjectToClipPos(vertex);
	#else 
					o.vertex = UnityObjectToClipPos(vertex);
	#endif
					o.uvMainTex = mul(unity_Projector, vertex);

					o.uvShadow = mul(unity_Projector, vertex);
					o.texcoord = TRANSFORM_TEX(o.uvMainTex.xyz,_MainTex);

					return o;
				}

				sampler2D _MainTex;
				sampler2D _FalloffTex;

				half4 frag(v2f i) : SV_Target
				{
					float clampMutliplier = 1 - step(i.uvMainTex.x, 0);
					clampMutliplier *= 1 - step(1, i.uvMainTex.x);
					clampMutliplier *= 1 - step(i.uvMainTex.y, 0);
					clampMutliplier *= 1 - step(1, i.uvMainTex.y);

					float projectedCordZ = i.uvShadow.z;
					clampMutliplier *= step(projectedCordZ, 1);
					clampMutliplier *= step(-1, projectedCordZ);

					half4 tex = tex2D(_MainTex, i.texcoord) * clampMutliplier;
					half4 res = tex * _TintColor * tex;
					res.a = saturate(pow(res.a + res.a * saturate(1 - _MaskPow), _MaskPow));
					return res;
				}
				ENDCG
			}
		}
}
