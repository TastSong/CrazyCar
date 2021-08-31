// EasyRoads3D v3 Shader
// Blends one road textures from opposite directions (I Connector)

Shader "EasyRoads3D/ER Single Road Blend" {
    Properties {

		[Header(Road Texture)]
        _MainTex ("Road", 2D) = "white" {}
        _Color ("Color", Color) = (1,1,1,1)
        _BumpMap ("Road Normal", 2D) = "bump" {}
        _Metallic ("Road Metallic", Range(0.0, 1.0)) = 0.0 
        _Glossiness ("Road Smoothness", Range(0.0, 1.0)) = 0.5  

		_SecondTex ("2nd Road", 2D) = "white" {}
		_BumpMap2 ("2nd Road Normal", 2D) = "bump" {}
		_Metallic2 ("2nd Road Metallic", Range(0.0, 1.0)) = 0.0 
        _Glossiness2 ("2nd Road Smoothness", Range(0.0, 1.0)) = 0.5  
		
		_maskTex ("Blend Mask", 2D) = "white" {}

        _Cutoff ("Alpha Cutoff", Range(0,1)) = 0.5
        _Threshold ("Blend Threshold", Range(0.001,1)) = 1

        [Header(Terrain Z Fighting Offset)]
		_OffsetFactor ("Offset Factor", Range(0.0,-10.0)) = -1
        _OffsetUnit ("Offset Unit", Range(0.0,-10.0)) = -1
    }

    SubShader {
        Tags {
            "SplatCount" = "3"
            "Queue" = "AlphaTest"
            "RenderType" = "TransparentCutout"
        }
        LOD 200
		Offset [_OffsetFactor],[_OffsetUnit]

        CGPROGRAM
        #pragma surface surf Standard  fullforwardshadows alphatest:_Cutoff
        #pragma target 3.0
        #pragma multi_compile_fog
        #pragma exclude_renderers gles
        #include "UnityPBSLighting.cginc"

        half _depthThresh;

        uniform sampler2D _Control;

        sampler2D _MainTex, _SecondTex, _maskTex;
        sampler2D _BumpMap2, _BumpMap;

        half _Metallic1;

        half _Glossiness1;

		half _Metallic;
		half _Glossiness;

		half _Metallic2;
		half _Glossiness2;

        half _NormalStrengh;

        struct Input {
            float3 worldPos;
            float3 worldNormal;
            float2 uv_MainTex : TEXCOORD0;
            float2 uv4_BumpMap : TEXCOORD1;

            float4 color : COLOR;

            INTERNAL_DATA
        };

        fixed4 _Color, _Color2;
        half _Threshold;

        void surf (Input IN, inout SurfaceOutputStandard o) {

            fixed4 alb = 0.0f;
			float4 c = IN.color;
			if(c.a < _Threshold){
				if(c.a > 0)c.a = (c.a / _Threshold);
			}else{
				c.a = 1;
			}
			
			float4 _main = tex2D (_MainTex, IN.uv_MainTex) * _Color;
			float4 _main1 = tex2D (_MainTex, IN.uv4_BumpMap) * _Color;
			
            fixed4 nrm = tex2D(_BumpMap, IN.uv_MainTex);
            fixed4 nrm1 = tex2D(_BumpMap, IN.uv4_BumpMap);

			half alpha = 0;
			if(_main.a > _main1.a)alpha = _main.a;
			else alpha = _main1.a;
			
            o.Normal = UnpackNormal(lerp(nrm, nrm1, c.a));
            o.Albedo = lerp(_main.rgb, _main1.rgb, c.a);
            o.Alpha = alpha;
            o.Smoothness = lerp(_Glossiness, _Glossiness2, c.a);
            o.Metallic = lerp(_Metallic, _Metallic2, c.a);
        }
        ENDCG
    }

    Fallback "Standard"
}
