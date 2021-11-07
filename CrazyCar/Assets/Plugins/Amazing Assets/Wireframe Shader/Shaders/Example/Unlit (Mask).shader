Shader "Amazing Assets/Wireframe Shader/Example/Unlit (Mask)"
{
    Properties
    {
        _WireframeShader_Thickness("Thickness", Range(0, 1)) = 0.01
		_WireframeShader_Smoothness("Smoothness", Range(0, 1)) = 0	
		_WireframeShader_Diameter("Diameter", Range(0, 1)) = 1

        [KeywordEnum(None, Plane, Sphere, Box)] _MASK ("Mask", Float) = 0

        _Wireframe_DynamicMaskEdgeSmooth("Edge Smooth", float) = 0
        [Toggle]_Wireframe_DynamicMaskInvert("Invert", float) = 0
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


            #pragma shader_feature_local _MASK_NONE _MASK_PLANE _MASK_SPHERE _MASK_BOX



            float _WireframeShader_Thickness;
            float _WireframeShader_Smoothness;
            float _WireframeShader_Diameter;
            float _Wireframe_DynamicMaskEdgeSmooth;
            float _Wireframe_DynamicMaskInvert;


            struct appdata
            {
                float4 vertex : POSITION;
                float4 uv3 : TEXCOORD3;     //--------------Wireframe data is saved inside uv4 buffer (note, in shaders uv4 is read using TEXCOORD3)
            };

            struct v2f
            {                
                float4 vertex : SV_POSITION;
                float3 uv3 : TEXCOORD0;
                float3 positionWS : TEXCOORD1;
            };

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv3 = v.uv3.xyz;       //--------------Sending uv3 data from vertex to pixel stage

                o.positionWS = mul(unity_ObjectToWorld, v.vertex).xyz;

                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                //Reading wireframe data from uv3
                float wireframe = WireframeShaderReadTrangleMassFromUV(i.uv3, _WireframeShader_Thickness, _WireframeShader_Smoothness, _WireframeShader_Diameter);


                //Mask
                float mask = 1;
                #if defined(_MASK_PLANE)
                    mask = WireframeShaderMaskPlane(i.positionWS,_Wireframe_DynamicMaskEdgeSmooth, _Wireframe_DynamicMaskInvert);
                #elif defined(_MASK_SPHERE)
                    mask = WireframeShaderMaskSphere(i.positionWS, _Wireframe_DynamicMaskEdgeSmooth, _Wireframe_DynamicMaskInvert);
                #elif defined(_MASK_BOX)
                    mask = WireframeShaderMaskBox(i.positionWS, _Wireframe_DynamicMaskEdgeSmooth, _Wireframe_DynamicMaskInvert);
                #endif


                return mask;
            }
            ENDCG
        }
    }
}
