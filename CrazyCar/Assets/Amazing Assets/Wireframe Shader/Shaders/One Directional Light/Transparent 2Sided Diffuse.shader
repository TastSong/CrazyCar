


Shader "Hidden/Amazing Assets/Wireframe Shader/One Directional Light/Transparent/2 Sided/Diffuse"
{
	Properties     
	{                     
[WireframeCurvedWorldTitle] _CurvedWorldTitle("", Float) = 0
//[CurvedWorldBendSettings] _CurvedWorldBendSettings("0|1|1", Vector) = (0, 0, 0, 0)
		  
		
		//Rendering Options
		[WireframeTitle] _Wireframe_Title_Rendering_Options("Rendering Options", float) = 0  
		[WireframeRenderingOptions] _Wireframe_RenderingOptions_ODLEnumID("", float) = 0
		 
		 		 		
		//Visual Options	 
		[WireframeTitle] _Wireframe_Title_V_Options("Default Visual Options", float) = 0  
		
		//Base 
		_Color("Color (RGB) Trans (A)", color) = (1, 1, 1, 1)

		//Vertex Color
		[Enum(Off,0,On,1)] _Wireframe_BaseVertexColor("Vertex Color", float) = 0

		_MainTex("Base (RGB) Trans(A)", 2D) = "white"{}			
		[WireframeUVScroll] _Wireframe_MainTex_Scroll("", vector) = (0, 0, 0, 0)
		 
		//Bump
	    [WireframeBumpODL]  _Wireframe_BumpEnumID ("", Float) = 0	
		[HideInInspector] _Wireframe_NormalMap ("", 2D) = "bump" {}

		//Specular
	    [WireframeSpecular] _Wireframe_SpecularEnumID ("", Float) = 0
		[HideInInspector] _Wireframe_Specular_Lookup("", 2D) = "black"{}

		//Reflection
		[WireframeReflection] _Wireframe_ReflectionEnumID("", float) = 0
		[HideInInspector]   _Cube("", Cube) = ""{}  
		[HideInInspector]   _ReflectColor("", Color) = (0.5, 0.5, 0.5, 1)
		[HideInInspector]   _Wireframe_Reflection_Strength("", Range(0, 1)) = 0.5
		[HideInInspector]   _Wireframe_Reflection_Fresnel_Bias("", Range(-1, 1)) = -1
		[HideInInspector]   _Wireframe_Reflection_Roughness("", Range(0, 1)) = 0.3

	
			

		     
		//Wire S Options  
		[WireframeTitle] _Wireframe_Title_S_Options("Wireframe Shader Options", float) = 0  		
		
		//Source
		_WireframeShader_Thickness("Thickness", Range(0, 1)) = 0.01
		_WireframeShader_Smoothness("Smoothness", Range(0, 1)) = 0	
		_WireframeShader_Diameter("Diameter", Range(0, 1)) = 1

		//Wire Options  
		[WireframeHeader] _Wireframe_Title_W_Options("Base Options", float) = 0  	

		_Wireframe_Color("Color (RGB) Trans (A)", color) = (1, 0, 0, 1)
		[WireframePositiveFloat]_Wireframe_ColorEmissionStrength("Emission Strength", float) = 0
		_Wireframe_ColorTexture("Color Texture (RGBA)", 2D) = "white"{}
		[WireframeUVScroll] _Wireframe_ColorTexture_Scroll("", vector) = (0, 0, 0, 0)
		
		
		//Vertex Color
		[Enum(Off,0,On,1)] _Wireframe_WireVertexColor("Vertex Color", Float) = 0

		//Light
		[WireframeLightInteraction] _Wireframe_IncludeLightEnumID ("", float) = 0

		//Improved Transparent Blend
		[WireframeImprovedBlend] _Wireframe_ImprovedBlendEnumID ("", int) = 0

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
		Tags { "Queue"="Transparent" 
		       "IgnoreProjector"="True" 
			   "RenderType"="Transparent"
			 }
		LOD 200		
		
		Blend SrcAlpha OneMinusSrcAlpha 		      

		//PassName "FORWARD" 
		Pass
	    { 			
			Name "FORWARD" 
			Tags { "LightMode" = "ForwardBase" } 
			  
			ZWrite Off
			Cull Front


			CGPROGRAM            
			#pragma vertex vert   
	    	#pragma fragment frag  		  
			#pragma multi_compile_fwdbase nodirlightmap nodynlightmap
			#pragma target 3.0
			       
			#pragma multi_compile_fog   


//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"
			

			#pragma shader_feature_local _ WIREFRAME_REFLECTION_CUBE_SIMPLE WIREFRAME_REFLECTION_CUBE_ADVANED WIREFRAME_REFLECTION_UNITY_REFLECTION_PROBES
			#pragma shader_feature_local WIREFRAME_LIGHT_ATTENTION_ON
			#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
			#pragma shader_feature_local WIREFRAME_FRESNEL_ON
			#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON	
			#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX 
		    #pragma shader_feature_local WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON 
						 
			#define WIREFRAME_HAS_TEXTURE
			#define WIREFRAME_TRANSPARENT

			#include "../cginc/WireframeForwardBase.cginc"
			ENDCG   			 
		} //Pass   
		
		
		Pass
	    { 
			Name "FORWARD" 
			Tags { "LightMode" = "ForwardBase" } 

			ZWrite On
			Cull Back

			  
			CGPROGRAM            
			#pragma vertex vert   
	    	#pragma fragment frag  		  
			#pragma multi_compile_fwdbase nodirlightmap nodynlightmap
			#pragma target 3.0
			       
			#pragma multi_compile_fog   


//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"
			

			#pragma shader_feature_local _ WIREFRAME_REFLECTION_CUBE_SIMPLE WIREFRAME_REFLECTION_CUBE_ADVANED WIREFRAME_REFLECTION_UNITY_REFLECTION_PROBES
			#pragma shader_feature_local WIREFRAME_LIGHT_ATTENTION_ON
			#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
			#pragma shader_feature_local WIREFRAME_FRESNEL_ON
			#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON	
			#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX 
		    #pragma shader_feature_local WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON 
						 
			#define WIREFRAME_HAS_TEXTURE
			#define WIREFRAME_TRANSPARENT

			#include "../cginc/WireframeForwardBase.cginc"
			ENDCG   			 
		} //Pass   	
			 
	} //SubShader

	FallBack "Hidden/Amazing Assets/Wireframe Shader/Vertex Lit/Transparent/Full"
} //Shader
