Shader "QFX/ImagyVFX/Metaball" {
	Properties {
		_MainTex("Particle Texture", 2D) = "white" {}
		[HDR]_Color("Color", Color) = (0.5,0.5,0.5,0.5)
		[HDR]_OutlineColor("Outline Color", Color) = (0.5,0.5,0.5,0.5)
		_OutlineWidth("Outline Width", Float) = 0.25
		_Saturation("Saturation", Range(0.0,1.0)) = 1.0
	}

	SubShader {

		Tags { "Queue" = "Transparent" }
		Pass {
			Blend SrcAlpha OneMinusSrcAlpha

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#include "UnityCG.cginc"

			float4 _Color, _OutlineColor;
			sampler2D _MainTex;
			float _Saturation, _OutlineWidth;

			float4 _MainTex_ST;

			struct v2f {
				float4 pos : SV_POSITION;
				float2 uv : TEXCOORD0;
			};

			v2f vert(appdata_base v) {
				v2f o;
				o.pos = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
				return o;
			}

		    half4 frag (v2f i) : COLOR {
                float4 texcol = tex2D (_MainTex, i.uv);
                float4 finalColor=float4(texcol.r,texcol.g,texcol.b,texcol.a);
               
                if(texcol.a>_OutlineWidth) {
                    finalColor.a=_Saturation;
                    finalColor.b=floor((finalColor/0.2)*0.5);
                }
                
                if (texcol.a < _OutlineWidth && texcol.a > 0.05)
                    return _OutlineColor;
                
                return finalColor * _Color;
			} 
			ENDCG
		}
	}
}