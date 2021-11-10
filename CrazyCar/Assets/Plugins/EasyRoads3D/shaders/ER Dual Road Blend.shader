// EasyRoads3D v3 Shader
// Blends two road textures


Shader "EasyRoads3D/ER Dual Road Blend" {
    Properties {
		
		[Header(Road 1)]
        _MainTex ("Albedo", 2D) = "white" {}
        _Color ("Color", Color) = (1,1,1,1)
        _BumpMap ("Normal", 2D) = "bump" {}
        _Metallic ("Metallic", Range(0.0, 1.0)) = 0.0 
        _Glossiness ("Smoothness", Range(0.0, 1.0)) = 0.5  

		[Space][Header(Road 2)]
		_SecondTex ("Albedo", 2D) = "white" {}
		_Color2 ("Color", Color) = (1,1,1,1)
		_BumpMap2 ("Normal", 2D) = "bump" {}
		_Metallic2 ("Metallic", Range(0.0, 1.0)) = 0.0 
        _Glossiness2 ("Smoothness", Range(0.0, 1.0)) = 0.5  
		
		[Space]_maskTex ("Blend Mask", 2D) = "white" {}
		
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
   //     #pragma surface surf Standard  fullforwardshadows alphatest:_Cutoff
   		#pragma surface surf Standard  fullforwardshadows decal:blend
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
			float4 _main1 = tex2D (_SecondTex, IN.uv4_BumpMap) * _Color2;
			
		//	float4 _mask = tex2D (_maskTex, IN.uv_MainTex);
			
            fixed4 nrm = tex2D(_BumpMap, IN.uv_MainTex);
            fixed4 nrm1 = tex2D(_BumpMap2, IN.uv4_BumpMap);

			half alpha = 0;
			if(_main.a > _main1.a)alpha = _main.a;
			else alpha = _main1.a;
			
		//	if(c.a > 0.9)c.a = 0.9;
		//	if(alpha < 0.8) 
			//alpha = 0;
			
		//	if(_mask.a < c.a)c.a = _mask.a;
			if(_main1.a < c.a)c.a = _main1.a; 

            o.Normal = UnpackNormal(lerp(nrm, nrm1, c.a));
            o.Albedo = lerp(_main.rgb, _main1.rgb, c.a);
            o.Alpha = alpha;
            o.Smoothness = lerp(_Glossiness, _Glossiness2, c.a);;
            o.Metallic = lerp(_Metallic, _Metallic2, c.a);
        }
        ENDCG
    }

    Fallback "Standard"
}
