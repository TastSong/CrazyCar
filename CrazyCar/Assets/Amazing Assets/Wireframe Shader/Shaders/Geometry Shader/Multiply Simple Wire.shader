


Shader "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Multiply/Simple/Wire Only"
{
    Properties 
    { 
[WireframeCurvedWorldTitle] _CurvedWorldTitle("", Float) = 0
//[CurvedWorldBendSettings] _CurvedWorldBendSettings("0|1|1", Vector) = (0, 0, 0, 0)
		

		//Rendering Options
		[WireframeTitle] _Wireframe_Title_Rendering_Options("Rendering Options", float) = 0  
		[WireframeRenderingOptions] _Wireframe_RenderingOptions_PBREnumID("", float) = 0

		[MaterialEnum(Off,0,Front,1,Back,2)] _Cull("Cull", Int) = 2

		//Wire S Options   
		[WireframeTitle] _Wireframe_Title_S_Options("Wireframe Shader Options", float) = 0  		
		
		//Source
		_WireframeShader_Thickness("Thickness", Range(0, 1)) = 0.01
		_WireframeShader_Smoothness("Smoothness", Range(0, 1)) = 0	
		_WireframeShader_Diameter("Diameter", Range(0, 1)) = 1
		[Toggle(WIREFRAME_NORMALIZE_EDGES_ON)] _Wireframe_NormalizeEdges("Normalize Edges", Float) = 0
		[Toggle(WIREFRAME_TRY_QUAD_ON)] _Wireframe_TryQuad("Try Quad", Float) = 0
			 
		//Wire Options  
		[WireframeHeader] _Wireframe_Title_W_Options("Base Options", float) = 0  

		_Wireframe_Color("Color (RGB) Trans (A)", color) = (1, 0, 0, 1)
		[WireframePositiveFloat]_Wireframe_ColorEmissionStrength("Emission Strength", float) = 0
		_Wireframe_ColorTexture("Color Texture (RGBA)", 2D) = "white"{}
		[WireframeUVScroll] _Wireframe_ColorTexture_Scroll("", vector) = (0, 0, 0, 0)
		
			 
		//Vertex Color
		[Enum(Off,0,On,1)] _Wireframe_WireVertexColor("Vertex Color", Float) = 0

		//Transparency          
		[WireframeHeader]		  _Wireframe_Transparency_M_Options("Transparency Options", float) = 0  
		[WireframeTextureTransparency] _Wireframe_TransparencyEnumID("", float) = 0 				
		[HideInInspector]	  _Wireframe_TransparentTex_Invert("    ", float) = 0
		[HideInInspector]	  _Wireframe_TransparentTex_Alpha_Offset("    ", Range(-1, 1)) = 0
				  
		//Fresnel
	    [WireframeFresnel]  _Wireframe_FresnelEnumID ("Fresnel", Float) = 0	
		[HideInInspector] _Wireframe_FresnelInvert("", float) = 0
		[HideInInspector] _Wireframe_FresnelBias("", Range(-1, 1)) = 0
		[HideInInspector] _Wireframe_FresnelPow("", Range(1, 16)) = 1

		//Distance Fade  
	    [WireframeDistanceFade]  _Wireframe_DistanceFade ("Distance Fade", Float) = 0
		[HideInInspector] _Wireframe_DistanceFadeStart("", Float) = 5
		[HideInInspector] _Wireframe_DistanceFadeEnd("", Float) = 10

		//Dynamic Mask
		[WireframeHeader]		 _Wireframe_Title_M_Options("Dynamic Mask Options", float) = 0  
		[WireframeDynamicMask] _Wireframe_DynamicMaskEnumID("", float) = 0
		[HideInInspector]    _Wireframe_DynamicMaskInvert("", float) = 0
		[HideInInspector]    _Wireframe_DynamicMaskEffectsBaseTexEnumID("", int) = 0
		[HideInInspector]    _Wireframe_DynamicMaskEffectsBaseTexInvert("", float) = 0	
		[HideInInspector]    _Wireframe_DynamicMaskType("", Float) = 1
		[HideInInspector][PositiveFloatDrawer]    _Wireframe_DynamicMaskEdgeSmooth("", float) = 0

			[WireframeTitle]		 _Wireframe_Title_UAR_Options("Unity Advanced Rendering Options", float) = 0
    }

    SubShader  
    {
		Tags { "Queue"="Transparent+2" 
		       "IgnoreProjector"="True" 
			   "RenderType"="Transparent" 
			 }
			  
		
		Blend Zero SrcColor
		ColorMask RGB
		Lighting Off ZWrite Off Fog { Color (0,0,0,0) }
		Cull [_Cull]
		  

		// ---- forward rendering base pass:
		Pass
		{
			Name "BASE" 

			CGPROGRAM
			// compile directives
			#pragma vertex vert_surf
			#pragma geometry geom
			#pragma fragment frag_surf
			#include "../cginc/WireframeGeometryShaderPlatform.cginc"
			#pragma multi_compile_instancing

			#include "UnityCG.cginc"  
			#include "Lighting.cginc"

			#pragma multi_compile_fog
		

//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"


			#pragma shader_feature_local WIREFRAME_FRESNEL_ON
			#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON	
			#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON

			#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX
			#pragma shader_feature_local WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON

			#pragma shader_feature_local WIREFRAME_NORMALIZE_EDGES_ON
		#pragma shader_feature_local WIREFRAME_TRY_QUAD_ON

#define WIREFRAME_PHYSICALLY_BASED
#define WIREFRAME_NO_COLOR_BLACK
#define WIREFRAME_MULTIPLY  
			        
#include "../cginc/WireframePhysicallyBasedSpecial.cginc"  
#include "../cginc/WireframeGeometryShader.cginc"

			ENDCG

		} 
         
    } //SubShader

} //Shader
