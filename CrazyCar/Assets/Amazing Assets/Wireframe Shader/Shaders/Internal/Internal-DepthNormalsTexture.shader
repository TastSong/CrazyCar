Shader "Hidden/Amazing Assets/Wireframe Shader/DepthNormalsTexture" 
{
Properties 
{
[WireframeCurvedWorldTitle] _CurvedWorldTitle("", Float) = 0
//[CurvedWorldBendSettings] _CurvedWorldBendSettings("0|1|1", Vector) = (0, 0, 0, 0)

	_MainTex ("", 2D) = "white" {}
	_Cutoff ("", Float) = 0.5
	_Color ("", Color) = (1,1,1,1)
}



SubShader
{
	Tags{ "RenderType" = "Wireframe_Opaque" }
	
	Pass
	{
		CGPROGRAM                  
		#pragma vertex vert_surf    
	    #pragma fragment fragOpaque     
		#pragma target 3.0 
			  
		      
		#include "../cginc/WireframeDepthNormals.cginc"

		fixed4 fragOpaque(v2f_surf i) : SV_Target
		{
			return EncodeDepthNormal(i.nz.w, i.nz.xyz);
		}
		ENDCG   	
	}
}


SubShader
{
	Tags{ "RenderType" = "Wireframe_Full_TransparentCutout" }
	
	Pass
	{
		CGPROGRAM                  
		#pragma vertex vert_surf    
	    #pragma fragment frag     
		#pragma target 3.0 
			       
		
//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"

		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX 
		#pragma shader_feature_local WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON 
			  
			   
		#define WIREFRAME_HAS_TEXTURE
		#define WIREFRAME_CUTOUT
		      
		#include "../cginc/WireframeDepthNormals.cginc"
		ENDCG   	
	}
}

SubShader
{
	Tags{ "RenderType" = "Wireframe_WireOnly_TransparentCutout" }
	
	Pass
	{
		CGPROGRAM                  
		#pragma vertex vert_surf    
	    #pragma fragment frag     
		#pragma target 3.0 
			         

//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"

		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX 

			
		#define WIREFRAME_CUTOUT 
		#define WIREFRAME_CUTOUT_HALF
		#define WIREFRAME_SAME_COLOR
		#define WIREFRAME_NO_COLOR_BLACK
			  
			   
		#define WIREFRAME_HAS_TEXTURE
		      
		#include "../cginc/WireframeDepthNormals.cginc"
		ENDCG   	
	}
}


SubShader 
{
	Tags{ "RenderType" = "Wireframe_Full_Geometry_TransparentCutout" }
	
	Pass
	{
		CGPROGRAM                   
		#pragma vertex vert_surf    
		#pragma geometry geom
	    #pragma fragment frag     
		#include "../cginc/WireframeGeometryShaderPlatform.cginc"


//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"

		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX 
		#pragma shader_feature_local WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON 
			  
			   
		#define WIREFRAME_HAS_TEXTURE
		#define WIREFRAME_CUTOUT
		      
		#include "../cginc/WireframeDepthNormals.cginc"
		#include "../cginc/WireframeGeometryShader.cginc"

		ENDCG   	
	}
}

SubShader
{
	Tags{ "RenderType" = "Wireframe_WireOnly_Geometry_TransparentCutout" }
	
	Pass
	{
		CGPROGRAM                  
		#pragma vertex vert_surf    
		#pragma geometry geom
	    #pragma fragment frag     
		#include "../cginc/WireframeGeometryShaderPlatform.cginc"
			         

//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"

		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX 

			
		#define WIREFRAME_CUTOUT 
		#define WIREFRAME_CUTOUT_HALF
		#define WIREFRAME_SAME_COLOR
		#define WIREFRAME_NO_COLOR_BLACK
			  
			   
		#define WIREFRAME_HAS_TEXTURE
		      
		#include "../cginc/WireframeDepthNormals.cginc"
		#include "../cginc/WireframeGeometryShader.cginc"

		ENDCG   	
	}
}


SubShader 
{
	Tags{ "RenderType" = "Wireframe_Full_Tessellation_TransparentCutout" }
	
	Pass
	{
		CGPROGRAM                   
		#pragma vertex tessvert_surf 
		#pragma hull hs_surf
		#pragma domain ds_surf
		#pragma geometry geom
		#pragma fragment frag
		#pragma target 5.0 
		#include "Lighting.cginc"


//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"

		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX 
		#pragma shader_feature_local WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON 
			  
			   
		#define WIREFRAME_HAS_TEXTURE
		#define WIREFRAME_CUTOUT

		#include "../cginc/WireframeDepthNormals.cginc"		

		#include "../cginc/WireframeGeometryShader.cginc"


		#pragma shader_feature_local _ WIREFRAME_TESSELLATION_DISTANCE_BASED WIREFRAME_TESSELLATION_EDGE_LENGTH
		#pragma shader_feature_local WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION
		#include "../cginc/WireframeTessellation.cginc"

		ENDCG   	 
	}
}

SubShader 
{
	Tags{ "RenderType" = "Wireframe_WireOnly_Tessellation_TransparentCutout" }
	
	Pass
	{
		CGPROGRAM                   
		#pragma vertex tessvert_surf 
		#pragma hull hs_surf
		#pragma domain ds_surf
		#pragma geometry geom
		#pragma fragment frag
		#pragma target 5.0 
		#include "Lighting.cginc"


//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"

		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX 

			
		#define WIREFRAME_CUTOUT 
		#define WIREFRAME_CUTOUT_HALF
		#define WIREFRAME_SAME_COLOR
		#define WIREFRAME_NO_COLOR_BLACK
		#define WIREFRAME_HAS_TEXTURE

		#include "../cginc/WireframeDepthNormals.cginc"		

		#include "../cginc/WireframeGeometryShader.cginc"


		#pragma shader_feature_local _ WIREFRAME_TESSELLATION_DISTANCE_BASED WIREFRAME_TESSELLATION_EDGE_LENGTH
		#pragma shader_feature_local WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION
		#include "../cginc/WireframeTessellation.cginc"

		ENDCG   	 
	}
}

//Wireframe/////////////////////////////////////////////////////////////////////////////////////



Fallback Off
}
 
