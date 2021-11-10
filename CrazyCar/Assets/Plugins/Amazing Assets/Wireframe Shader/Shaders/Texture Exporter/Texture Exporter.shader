
Shader "Hidden/Amazing Assets/Wireframe Shader/Texture Exporter"
{	
	Properties
    {        
		_WireframeShader_Thickness("", Range(0, 1)) = 0.01
        _WireframeShader_Smoothness("", Range(0, 1)) = 0  
		_WireframeShader_Diameter("", Range(0, 1)) = 1
    }

	//With GeometryShaders
	SubShader
	{
		Tags{ "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }

		Cull Off
		ZWrite Off		

		Pass
		{
			CGPROGRAM 
			#pragma vertex vert
			#pragma fragment frag
			#pragma geometry geom
			
			#include "UnityCG.cginc"


			#pragma shader_feature_local WIREFRAME_READ_FROM_MESH WIREFRAME_CALCULATE_USING_GEOMETRY_SHADER
			#pragma shader_feature_local _ WIREFRAME_NORMALIZE_EDGES_ON
			#pragma shader_feature_local _ WIREFRAME_TRY_QUAD_ON
			#include "../cginc/WireframeShader.cginc"


			float _ClipValue;
			float _WireframeShader_Thickness;
			float _WireframeShader_Smoothness;			
			float _WireframeShader_Diameter;

            struct vertOut 
			{ 
                float4 pos : SV_POSITION;
                
				float3 wireframeShaderTriangleMass : TEXCOORD1;
            };

            vertOut vert(appdata_full v)
			{
                vertOut o;
                o.pos = UnityObjectToClipPos(fixed4(clamp(v.texcoord.xy, 0, 1), 0, 1));
                
				#if defined(WIREFRAME_CALCULATE_USING_GEOMETRY_SHADER)
					o.wireframeShaderTriangleMass = v.vertex;          
				#else
					o.wireframeShaderTriangleMass = v.texcoord3;          
				#endif

                return o;
            }

			[maxvertexcount(3)]
            void geom(triangle vertOut input[3], inout TriangleStream<vertOut> triStream)
            {
				#if defined(WIREFRAME_CALCULATE_USING_GEOMETRY_SHADER)
					float3 b0, b1, b2;	
					WireframeShaderCalculateTriangleMass(input[0].wireframeShaderTriangleMass.xyz, input[1].wireframeShaderTriangleMass.xyz, input[2].wireframeShaderTriangleMass.xyz, b0, b1, b2); 
					
					input[0].wireframeShaderTriangleMass = float4(b0, 0); 
					input[1].wireframeShaderTriangleMass = float4(b1, 0); 
					input[2].wireframeShaderTriangleMass = float4(b2, 0);
				#endif


                triStream.Append(input[0]);
                triStream.Append(input[1]);
                triStream.Append(input[2]);

                triStream.RestartStrip();
            }

            fixed4 frag(vertOut i) : SV_Target 
			{
				float wireframe = saturate(WireframeShaderReadTrangleMassFromUV(i.wireframeShaderTriangleMass, _WireframeShader_Thickness, _WireframeShader_Smoothness, _WireframeShader_Diameter) * 2);
				
				if(_ClipValue <= -0.5)
					clip(-1);


				float3 RGB = wireframe;
				float Alpha = 1;

				return float4(RGB, Alpha);				
            }

            ENDCG
        }
    }

	//Without GeometryShaders
	SubShader
	{
		Tags{ "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }

		Cull Off
		ZWrite Off		

		Pass
		{
			CGPROGRAM 
			#pragma vertex vert
			#pragma fragment frag
			
			#include "UnityCG.cginc"


			#include "../cginc/WireframeShader.cginc"


			float _ClipValue;
			float _WireframeShader_Thickness;
			float _WireframeShader_Smoothness;			
			float _WireframeShader_Diameter;

            struct vertOut 
			{ 
                float4 pos : SV_POSITION;
                
				float3 wireframeShaderTriangleMass : TEXCOORD1;
            };

            vertOut vert(appdata_full v)
			{
                vertOut o;
                o.pos = UnityObjectToClipPos(fixed4(clamp(v.texcoord.xy, 0, 1), 0, 1));
                
				o.wireframeShaderTriangleMass = v.texcoord3;          

                return o;
            }

            fixed4 frag(vertOut i) : SV_Target 
			{
				float wireframe = saturate(WireframeShaderReadTrangleMassFromUV(i.wireframeShaderTriangleMass, _WireframeShader_Thickness, _WireframeShader_Smoothness, _WireframeShader_Diameter) * 2);
				
				if(_ClipValue <= -0.5)
					clip(-1);


				float3 RGB = wireframe;
				float Alpha = 1;

				return float4(RGB, Alpha);			
            }

            ENDCG
        }
    }
}
