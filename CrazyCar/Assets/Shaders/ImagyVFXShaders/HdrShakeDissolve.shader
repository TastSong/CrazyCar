Shader "QFX/ImagyVFX/Dissolve/AddHdrShakeDissolve"
{
	Properties{
		_MainTex("Texture", 2D) = "white" {}
		[HDR]_Color("Color", Color) = (1, 1, 1, 1)
   		[HDR]_DissolveColor("Dissolve Color", Color) = (1,1,1,1)
		_Shake ("Shake", Float) = 0.5
		_ShakeTex("Shake Texture", 2D) = "white" {}
        _DissolveTex ("Dissolve Texture", 2D) = "white" {}
		_Dissolve("Dissolve", float) = 0
		_DissolveSize ("Dissolve Size", Range(0.0, 1.0)) = 0.15
	}
	
	SubShader{
		Pass {
            Tags { "Queue" = "Opaque" "IgnoreProjector" = "True" "RenderType" = "Opaque" }
            Blend SrcAlpha One
            Cull Off Lighting Off ZWrite Off
    
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"
    
            struct appdata_t
            {
                float4 vertex    : POSITION;
                float4 texcoord  : TEXCOORD0;
                float4 color     : COLOR;
            };
    
            struct v2f {
                float4 vertex : SV_POSITION;
                half4 uv : TEXCOORD0;
                float4 color : COLOR;
            };
    
            sampler2D _MainTex, _ShakeTex, _DissolveTex;
            float4 _MainTex_ST, _ShakeTex_ST, _DissolveTex_ST;
            fixed4 _Color, _DissolveColor;
            float _Shake, _Dissolve, _DissolveSize;
    
            v2f vert(appdata_t v) {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.color = v.color;
                o.uv.xy = TRANSFORM_TEX(v.texcoord, _MainTex);
                o.uv.zw = v.texcoord;
                return o;
            }
    
            fixed4 frag(v2f i) : COLOR {
                float4 dTex = tex2D(_ShakeTex, i.uv + _Time.y);

				float shake = dTex * _Shake;

				float2 uv = i.uv + shake - 0.01;
				float2 dUv = i.uv - 0.5 + shake - 0.01;

               	float4 mainTex = tex2D(_MainTex, uv);
				float4 color = 2 * i.color * mainTex * _Color;

				half r = sqrt (dUv.x*dUv.x + dUv.y*dUv.y);

	            half4 dissolveTex = tex2D(_DissolveTex, r);
				half dissolve = dissolveTex - _Dissolve;
				clip(dissolve);
 				
				if(dissolve < _DissolveSize)
   				 	return _DissolveColor * mainTex * 1;

				return color;
            }

		ENDCG
		}
	}
	FallBack "Diffuse"
}