Shader "QFX/SF_VFX/AnimatedShield" {
	Properties {
		_MainTex("Texture", 2D) = "white" { }
		_ShakeTex("Texture", 2D) = "white" { }
		[HDR]_Color("Color", Color) = (0.5,0.5,0.5,0.5)
		[HDR]_FireColor("_FireColor Color", Color) = (0.5,0.5,0.5,0.5)
		_Width("Width", Float) = 0.25
		_Saturation("Saturation", Float) = 1.0
		_Shake ("Shake", Float) = 1
		_Speed ("Speed", Float) = 0
	}

	SubShader {

		Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }
		Blend One One
		Cull Off
		Lighting Off
		ZWrite Off
		Pass {

			 Blend SrcAlpha OneMinusSrcAlpha
			 //Blend One OneMinusSrcAlpha
			 //Blend One One
			 //Blend SrcAlpha One

			CGPROGRAM

			#pragma vertex vert
			#pragma fragment frag

			#include "UnityCG.cginc"

			float4 _Color, _FireColor;
			sampler2D _MainTex, _ShakeTex;
			float _Saturation, _Width;
			half _Shake, _Speed;

			struct v2f {
				float4 pos : SV_POSITION;
				float2 uv : TEXCOORD0;
			};

			float4 _MainTex_ST, _ShakeTex_ST;

			v2f vert(appdata_base v) {
				v2f o;
				o.pos = UnityObjectToClipPos(v.vertex);
				v.texcoord.x += _Time.y * _Speed;
				v.texcoord.y += _Time.y * _Speed * 0.5;
				o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
				return o;
			}

			half4 frag (v2f i) : COLOR {
                half4 texcol,finalColor;

                texcol = tex2D (_MainTex, i.uv);
                finalColor=half4(texcol.r,texcol.g,texcol.b, texcol.a);

				float2 suv = i.uv;
				suv += _Time.y;

                float4 shakeTex = tex2D(_ShakeTex, suv * _Shake) ;

				float4 dTex = tex2D(_ShakeTex, i.uv);
				float shake = dTex  + _Time.y * _Shake;

				half texcol2 = tex2D (_MainTex, i.uv + shake);
				float4 zz  = texcol2 * _Color * _Saturation;

				float4 dTex1= tex2D(_ShakeTex, i.uv);
				float shake1 = dTex1  + _Time.y * _Shake;
				float2 uv1 =  i.uv - shake1 + 0.09;
				half texcol3 = tex2D (_MainTex, uv1);
				float4 zz1 = texcol3 * _FireColor * _Saturation;

				finalColor = lerp(zz1, zz, _Width);
				
				return finalColor;

			} ENDCG
		}
	}
}