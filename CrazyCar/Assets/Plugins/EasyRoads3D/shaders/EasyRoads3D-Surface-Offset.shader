Shader "EasyRoads3D/edit-mode-surfaces" {
Properties {
	_Color ("Main Color", Color) = (1,1,1,1)
	_MainTex ("Base (RGB)", 2D) = "white" {}

	[Header(Terrain Z Fighting Offset)]
	_OffsetFactor ("Offset Factor", Range(0.0,-10.0)) = -1
    _OffsetUnit ("Offset Unit", Range(0.0,-10.0)) = -1

	[Header(Active State)]
	[Toggle] _Show ( "Show Surfaces", Float ) = 1
}
   SubShader {
        Tags {
            "SplatCount" = "3"
            "Queue" = "AlphaTest"
            "RenderType" = "TransparentCutout"
            "ForceNoShadowCasting"="True"

        }
        LOD 200
		Offset [_OffsetFactor],[_OffsetUnit]

        CGPROGRAM
        #pragma surface surf Standard  fullforwardshadows decal:blend
        #pragma target 3.0
        #pragma multi_compile_fog
        #pragma exclude_renderers gles
        #include "UnityPBSLighting.cginc"

        half _depthThresh;

        uniform sampler2D _Control;

        sampler2D _MainTex;
        sampler2D _BumpMap;
        sampler2D _Metallic;
	//	half _Metallic;
	//	half _Glossiness;


        half _NormalStrengh;

        struct Input {
            float3 worldPos;
            float3 worldNormal;
            float2 uv_MainTex : TEXCOORD0;
            float2 uv4_BumpMap : TEXCOORD1;
            float2 uv_Metallic : TEXCOORD2;

            float4 color : COLOR;

            INTERNAL_DATA
        };

        fixed4 _Color, _Color2;
        half _Threshold;
		float _Show;

        void surf (Input IN, inout SurfaceOutputStandard o) {

            fixed4 alb = 0.0f;
			float4 c = IN.color;

			float4 _main = tex2D (_MainTex, IN.uv_MainTex) * _Color;

            o.Albedo = _main.rgb;
            o.Alpha = _Color.a * _Show;
        }
        ENDCG
    }

    Fallback "Standard"
}
