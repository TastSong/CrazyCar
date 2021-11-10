Shader "Amazing Assets/Wireframe Shader/Example/Unlit"
{
    Properties
    {
        _WireframeShader_Thickness("Thickness", Range(0, 1)) = 0.01
		_WireframeShader_Smoothness("Smoothness", Range(0, 1)) = 0	
		_WireframeShader_Diameter("Diameter", Range(0, 1)) = 1
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            #include "Assets/Amazing Assets/Wireframe Shader/Shaders/cginc/WireframeShader.cginc"   //--------------Path to the Wireframe cginc


            float _WireframeShader_Thickness;
            float _WireframeShader_Smoothness;
            float _WireframeShader_Diameter;


            struct appdata
            {
                float4 vertex : POSITION;
                float4 uv3 : TEXCOORD3;     //--------------Wireframe data is saved inside uv4 buffer (note, in shaders uv4 is read using TEXCOORD3)
            };

            struct v2f
            {                
                float4 vertex : SV_POSITION;
                float3 uv3 : TEXCOORD0;
            };

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv3 = v.uv3.xyz;      //--------------Sending uv3 data from vertex to pixel stage

                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                //Reading wireframe data from uv
                float wireframe = WireframeShaderReadTrangleMassFromUV(i.uv3, _WireframeShader_Thickness, _WireframeShader_Smoothness, _WireframeShader_Diameter);


                return wireframe;
            }
            ENDCG
        }
    }
}
