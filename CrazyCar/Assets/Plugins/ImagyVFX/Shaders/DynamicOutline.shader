// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "QFX/ImagyVFX/OutlineShader" {
	Properties{
		_MainTex("Base (RGB)", 2D) = "white" {}
		_Outline("Outline Thickness", Range(0.0, 0.3)) = 0.002
		[HDR]_OutlineColor("Outline Color", Color) = (0,0,0,1)
		[HDR]_MainColor("Main Color", Color) = (0,0,0,1)
		_DistortionTex("Distortion Texture", 2D) = "white" {}
		_Params("Params", Float) = (0.2, 0.5, 0, 0)
	}

		CGINCLUDE
			#include "UnityCG.cginc"
			sampler2D _MainTex, _DistortionTex;
			float4 _MainTex_ST;
			half4 _DistortionTex_ST;
			
			half _Outline;
			half4 _OutlineColor, _MainColor;
			fixed4 _Params;

			struct appdata {
				half4 vertex : POSITION;
				half2 uv : TEXCOORD0;
				half2 uvDist : TEXCOORD1;
				half3 normal : NORMAL;
				fixed4 color : COLOR;
			};

			struct v2f {
				half4 pos : POSITION;
				fixed4 color : COLOR;
				half2 uv : TEXCOORD0;
				half2 uvDist : TEXCOORD1;
			};
			
			struct v2f_Base {
			    half4 pos : POSITION;
				fixed4 color : COLOR;
				half2 uv : TEXCOORD0;
            };
		ENDCG

		SubShader
		{
			Tags{
			"RenderType" = "Opaque"
			"Queue" = "Transparent"
		}

		Pass {
			Name "OUTLINE"

			Cull Front

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			v2f vert(appdata v)
			{
				v2f o;
				o.pos = UnityObjectToClipPos(v.vertex);

				half3 norm = mul((half3x3)UNITY_MATRIX_IT_MV, v.normal);
				half2 offset = TransformViewToProjection(norm.xy);

				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				o.uvDist = TRANSFORM_TEX(v.uvDist, _DistortionTex);
				o.uvDist.xy += _Time.y * _Params.w;

				float4 defTex = tex2Dlod(_DistortionTex, float4(o.uvDist.x, o.uvDist.y,0,0));

				float2 newPos = offset * o.pos.z * _Outline * defTex.a * _Params.z;
				o.pos.xy += newPos;

				o.pos.x += _Params.x;
				o.pos.y += _Params.y;

				o.color = _OutlineColor;

				return o;
			}

			fixed4 frag(v2f i) : COLOR
			{
				half4 color = i.color;
				float4 o = tex2D(_DistortionTex, i.uvDist);
				return color;
			}

			ENDCG
		}

		Pass {
			Name "TEXTURE"

			Cull Back
			ZWrite On
			ZTest LEqual

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			v2f_Base vert(appdata v)
			{
				v2f_Base o;
				o.pos = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				o.color = v.color;
				return o;
			}

			fixed4 frag(v2f i) : COLOR
			{
				fixed4 o;
				o = tex2D(_MainTex, i.uv.xy);
				return o * _MainColor;
			}
			ENDCG
		}
	}
}