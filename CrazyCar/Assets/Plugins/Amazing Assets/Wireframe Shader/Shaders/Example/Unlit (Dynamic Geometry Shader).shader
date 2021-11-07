Shader "Amazing Assets/Wireframe Shader/Example/Unlit (Dynamic Geometry Shader)"
{
    Properties
    {
        _WireframeShader_Thickness("Thickness", Range(0, 1)) = 0.01
		_WireframeShader_Smoothness("Smoothness", Range(0, 1)) = 0	
		_WireframeShader_Diameter("Diameter", Range(0, 1)) = 1

        [Toggle(WIREFRAME_NORMALIZE_EDGES_ON)] _Wireframe_NormalizeEdges("Normalize Edges", Float) = 0
		[Toggle(WIREFRAME_TRY_QUAD_ON)] _Wireframe_TryQuad("Try Quad", Float) = 0

    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma geometry geom
            #pragma fragment frag

            #include "UnityCG.cginc"

            #pragma target 5.0
            #include "Assets/Amazing Assets/Wireframe Shader/Shaders/cginc/WireframeShader.cginc"   //--------------Path to the Wireframe cginc

            #pragma shader_feature_local WIREFRAME_NORMALIZE_EDGES_ON
		    #pragma shader_feature_local WIREFRAME_TRY_QUAD_ON


            float _WireframeShader_Thickness;
            float _WireframeShader_Smoothness;
            float _WireframeShader_Diameter;


            struct appdata
            {
                float4 vertex : POSITION;
            };

            struct v2f
            {                
                float4 vertex : SV_POSITION;
                float3 positionVS : TEXCOORD0;
                float3 uv3 : TEXCOORD1;
            };

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.positionVS = v.vertex.xyz;        //-------------------------Vertex position is required in Geometry Shader for calcualting wireframe
                o.uv3 = 0;                 //-------------------------Geometry Shader will save calcualted data here

                return o;
            }

            [maxvertexcount(3)]
            void geom(triangle v2f input[3], inout TriangleStream<v2f> triStream)
            {
	            float3 mass0, mass1, mass2;
	
	            WireframeShaderCalculateTriangleMass(input[0].positionVS, input[1].positionVS, input[2].positionVS, mass0, mass1, mass2);

	            input[0].uv3.xyz = mass0;
 	            input[1].uv3.xyz = mass1;
 	            input[2].uv3.xyz = mass2;

	
	            triStream.Append(input[0]);
	            triStream.Append(input[1]);
	            triStream.Append(input[2]);

	            triStream.RestartStrip();
            }

            fixed4 frag (v2f i) : SV_Target
            {
                //Reading wireframe data from uv3
                float wireframe = WireframeShaderReadTrangleMassFromUV(i.uv3, _WireframeShader_Thickness, _WireframeShader_Smoothness, _WireframeShader_Diameter);


                return wireframe;
            }
            ENDCG
        }
    }
}
