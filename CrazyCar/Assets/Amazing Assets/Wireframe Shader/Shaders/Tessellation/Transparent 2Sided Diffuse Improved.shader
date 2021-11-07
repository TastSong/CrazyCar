




Shader "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Transparent/2 Sided/Diffuse Improved"
{
	Properties
	{
[WireframeCurvedWorldTitle] _CurvedWorldTitle("", Float) = 0
//[CurvedWorldBendSettings] _CurvedWorldBendSettings("0|1|1", Vector) = (0, 0, 0, 0)
		

		//Rendering Options
		[WireframeTitle] _Wireframe_Title_Rendering_Options("Rendering Options", float) = 0  
		[WireframeRenderingOptions] _Wireframe_RenderingOptions_PBREnumID("", float) = 0

		//Tessellation Options 
		[WireframeTitle] _Wireframe_Title_T_Options("Tessellation Options", float) = 0
		[WireframeTessellation] _Wireframe_TessellationEnumID("", Float) = 0
		[HideInInspector] _Wireframe_Tessellation("", Range(1, 32)) = 4
		[HideInInspector] _Wireframe_Tessellation_MinDistance("", float) = 10
		[HideInInspector] _Wireframe_Tessellation_MaxDistance("", float) = 35
		[HideInInspector] _Wireframe_Tessellation_EdgeLength("", Range(2, 64)) = 16
		[HideInInspector] _Wireframe_Tessellation_DispTex("", 2D) = "black" {}
		[HideInInspector][WireframeUVScroll] _Wireframe_Tessellation_DispTex_Scroll("", vector) = (0, 0, 0, 0)
		[HideInInspector] _Wireframe_Tessellation_DispStrength("", float) = 0
		[Toggle(WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION)] _Wireframe_NormalReconstruct("Reconstruct Normal", Float) = 0


		//Visual Options
		[WireframeTitle] _Wireframe_Title_V_Options("Default Visual Options", float) = 0

		//Base
		_Color("Color (RGB) Trans (A)", color) = (1, 1, 1, 1)

		//Vertex Color
		[Enum(Off,0,On,1)] _Wireframe_BaseVertexColor("Vertex Color", float) = 0

		_Glossiness("Smoothness", Range(0,1)) = 0.5
		_Metallic("Metallic", Range(0,1)) = 0.0

		_MainTex("Base (RGB) Trans (A)", 2D) = "white"{}
		[WireframeUVScroll] _Wireframe_MainTex_Scroll("", vector) = (0, 0, 0, 0)

		//Bump 
	    [WireframeBumpPBR]  _Wireframe_BumpEnumID ("", Float) = 0	
		[HideInInspector] _Wireframe_NormalScale ("", Float) = 1
		[HideInInspector] _Wireframe_NormalMap ("", 2D) = "bump" {}
		  
		//AO    
		[WireframeAmbientOcclusion]    _Wireframe_AmbientOcclusion("", Float) = 0
		[HideInInspector] _Wireframe_AmbientOcclusionStrength("", Range(0, 1)) = 1
		[HideInInspector] _Wireframe_AmbientOcclusionMap("", 2D) = "white" {}



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
		[WireframePositiveFloat] _Wireframe_ColorEmissionStrength("Emission Strength", float) = 0
		_Wireframe_ColorTexture("Color Texture (RGBA)", 2D) = "white"{}
		[WireframeUVScroll] _Wireframe_ColorTexture_Scroll("", vector) = (0, 0, 0, 0)
		
		
		//Vertex Color
		[Enum(Off,0,On,1)] _Wireframe_WireVertexColor("Vertex Color", Float) = 0

		//Light
		[WireframeLightInteraction] _Wireframe_IncludeLightEnumID ("", float) = 0

		//Improved Transparent Blend
		[WireframeImprovedBlend] _Wireframe_ImprovedBlendEnumID("", int) = 0

		//Transparency          
		[WireframeHeader]		  _Wireframe_Transparency_M_Options("Transparency Options", float) = 0
		[WireframeTextureTransparency] _Wireframe_TransparencyEnumID("", float) = 0
		[HideInInspector]	  _Wireframe_TransparentTex_Invert("    ", float) = 0
		[HideInInspector]	  _Wireframe_TransparentTex_Alpha_Offset("    ", Range(-1, 1)) = 0

		//Fresnel
		[WireframeFresnel]  _Wireframe_FresnelEnumID("Fresnel", Float) = 0
		[HideInInspector] _Wireframe_FresnelInvert("", float) = 0
		[HideInInspector] _Wireframe_FresnelBias("", Range(-1, 1)) = 0
		[HideInInspector] _Wireframe_FresnelPow("", Range(1, 16)) = 1

		//Distance Fade  
		[WireframeDistanceFade]  _Wireframe_DistanceFade("Distance Fade", Float) = 0
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
		Tags{ "Queue" = "Transparent"
		"IgnoreProjector" = "True"
		"RenderType" = "Transparent"
	}
		LOD 200

		ZWrite Off
		Cull Front


		// ------------------------------------------------------------
		// Surface shader code generated out of a CGPROGRAM block:
		ZWrite Off ColorMask RGB


		// ---- forward rendering base pass:
		Pass{
		Name "FORWARD"
		Tags{ "LightMode" = "ForwardBase" }
		Blend SrcAlpha OneMinusSrcAlpha

		CGPROGRAM
		// compile directives
#pragma vertex tessvert_surf
#pragma hull hs_surf
#pragma domain ds_surf
#pragma fragment frag_surf
#pragma target 5.0 
#pragma multi_compile_fog
#pragma multi_compile_fwdbasealpha noshadow
#include "HLSLSupport.cginc"
#include "UnityShaderVariables.cginc"
		// Surface shader code generated based on:
		// vertex modifier: 'vert'
		// writes to per-pixel normal: no
		// writes to emission: no
		// needs world space reflection vector: no
		// needs world space normal vector: no
		// needs screen space position: no
		// needs world space position: no
		// needs view direction: no
		// needs world space view direction: no
		// needs world space position for lighting: YES
		// needs world space view direction for lighting: YES
		// needs world space view direction for lightmaps: no
		// needs vertex color: YES
		// needs VFACE: no
		// passes tangent-to-world matrix to pixel shader: no
		// reads from normal: no
		// 0 texcoords actually used

#define _ALPHABLEND_ON 1
#include "UnityCG.cginc"
#include "Lighting.cginc"
#include "UnityPBSLighting.cginc"
#include "AutoLight.cginc"

#define INTERNAL_DATA
#define WorldReflectionVector(data,normal) data.worldRefl
#define WorldNormalVector(data,normal) normal

		// Original surface shader snippet:
#line 88 ""
#ifdef DUMMY_PREPROCESSOR_TO_WORK_AROUND_HLSL_COMPILER_LINE_HANDLING
#endif

		// Physically based Standard lighting model, and enable shadows on all light types
		//#pragma surface surf Standard fullforwardshadows vertex:vert alpha:fade finalcolor:WireFinalColor

		// Use shader model 3.0 target, to get nicer looking lighting
		//#pragma target 3.0



//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"


		#pragma shader_feature_local WIREFRAME_LIGHT_ATTENTION_ON
		#ifdef UNITY_PASS_DEFERRED
		#ifndef WIREFRAME_LIGHT_ATTENTION_ON
		#define WIREFRAME_LIGHT_ATTENTION_ON
		#endif
		#endif
		#pragma shader_feature_local WIREFRAME_FRESNEL_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON

		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX
		#pragma shader_feature_local WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON

		#pragma shader_feature_local WIREFRAME_NORMALIZE_EDGES_ON
		#pragma shader_feature_local WIREFRAME_TRY_QUAD_ON
		
		

#define WIREFRAME_PHYSICALLY_BASED
#define WIREFRAME_TRANSPARENT
#define WIREFRAME_NO 

#include "../cginc/WireframePhysicallyBased.cginc" 


		// vertex-to-fragment interpolation data
		// no lightmaps:
#ifdef LIGHTMAP_OFF
		struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass
#if UNITY_SHOULD_SAMPLE_SH
		half3 sh : TEXCOORD5; // SH
#endif
#if SHADER_TARGET >= 30
		float4 lmap : TEXCOORD6;
#endif

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};
#endif
	// with lightmaps:
#ifndef LIGHTMAP_OFF
	struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass
		float4 lmap : TEXCOORD5;
#ifdef DIRLIGHTMAP_COMBINED
		fixed3 tSpace0 : TEXCOORD6;
		fixed3 tSpace1 : TEXCOORD7;
		fixed3 tSpace2 : TEXCOORD8;
#endif

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};
#endif

	// vertex shader
	v2f_surf vert_surf(appdata_full v) {
		v2f_surf o;
		UNITY_INITIALIZE_OUTPUT(v2f_surf,o);
		Input customInputData;
		vert(v, customInputData);
		o.custompack0.xyzw = customInputData.texcoord;
		o.custompack1.xyzw = customInputData.texcoord1;
		o.custompack2.xyzw = customInputData.wireframeShaderTriangleMass;
		o.pos = UnityObjectToClipPos(v.vertex);
		float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
		fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
#if !defined(LIGHTMAP_OFF) && defined(DIRLIGHTMAP_COMBINED)
		fixed3 worldTangent = UnityObjectToWorldDir(v.tangent.xyz);
		fixed tangentSign = v.tangent.w * unity_WorldTransformParams.w;
		fixed3 worldBinormal = cross(worldNormal, worldTangent) * tangentSign;
#endif
#if !defined(LIGHTMAP_OFF) && defined(DIRLIGHTMAP_COMBINED)
		o.tSpace0 = float4(worldTangent.x, worldBinormal.x, worldNormal.x, worldPos.x);
		o.tSpace1 = float4(worldTangent.y, worldBinormal.y, worldNormal.y, worldPos.y);
		o.tSpace2 = float4(worldTangent.z, worldBinormal.z, worldNormal.z, worldPos.z);
#endif
		o.worldPos = worldPos;
		o.worldNormal = worldNormal;
		o.color = v.color;
#ifndef DYNAMICLIGHTMAP_OFF
		o.lmap.zw = v.texcoord2.xy * unity_DynamicLightmapST.xy + unity_DynamicLightmapST.zw;
#endif
#ifndef LIGHTMAP_OFF
		o.lmap.xy = v.texcoord1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
#endif

		// SH/ambient and vertex lights
#ifdef LIGHTMAP_OFF
#if UNITY_SHOULD_SAMPLE_SH
		o.sh = 0;
		// Approximated illumination from non-important point lights
#ifdef VERTEXLIGHT_ON
		o.sh += Shade4PointLights(
			unity_4LightPosX0, unity_4LightPosY0, unity_4LightPosZ0,
			unity_LightColor[0].rgb, unity_LightColor[1].rgb, unity_LightColor[2].rgb, unity_LightColor[3].rgb,
			unity_4LightAtten0, worldPos, worldNormal);
#endif
		o.sh = ShadeSHPerVertex(worldNormal, o.sh);
#endif
#endif // LIGHTMAP_OFF

		return o;
	}


#pragma shader_feature_local _ WIREFRAME_TESSELLATION_DISTANCE_BASED WIREFRAME_TESSELLATION_EDGE_LENGTH
#pragma shader_feature_local WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION
#include "../cginc/WireframeTessellation.cginc"


	// fragment shader
	fixed4 frag_surf(v2f_surf IN) : SV_Target{
		// prepare and unpack data
		Input surfIN;
	UNITY_INITIALIZE_OUTPUT(Input,surfIN);
	surfIN.texcoord.x = 1.0;
	surfIN.texcoord1.x = 1.0;
	surfIN.worldPos.x = 1.0;
	surfIN.wireframeShaderTriangleMass.x = 1.0;
	surfIN.color.x = 1.0;
	surfIN.texcoord = IN.custompack0.xyzw;
	surfIN.texcoord1 = IN.custompack1.xyzw;
	surfIN.wireframeShaderTriangleMass = IN.custompack2.xyzw;
	surfIN.worldPos = IN.worldPos;
	float3 worldPos = IN.worldPos;

#ifndef USING_DIRECTIONAL_LIGHT
	fixed3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));
#else
	fixed3 lightDir = _WorldSpaceLightPos0.xyz;
#endif
	fixed3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
	surfIN.color = IN.color;
#ifdef UNITY_COMPILER_HLSL
	SurfaceOutputStandard o = (SurfaceOutputStandard)0;
#else
	SurfaceOutputStandard o;
#endif
	o.Albedo = 0.0;
	o.Emission = 0.0;
	o.Alpha = 0.0;
	o.Occlusion = 1.0;
	fixed3 normalWorldVertex = fixed3(0,0,1);
	o.Normal = IN.worldNormal;
	normalWorldVertex = IN.worldNormal;

	// call surface function
	surf(surfIN, o);

	// compute lighting & shadowing factor
	UNITY_LIGHT_ATTENUATION(atten, IN, worldPos)
		fixed4 c = 0;

	// Setup lighting environment
	UnityGI gi;
	UNITY_INITIALIZE_OUTPUT(UnityGI, gi);
	gi.indirect.diffuse = 0;
	gi.indirect.specular = 0;
#if !defined(LIGHTMAP_ON)
	gi.light.color = _LightColor0.rgb;
	gi.light.dir = lightDir;
	gi.light.ndotl = LambertTerm(o.Normal, gi.light.dir);
#endif
	// Call GI (lightmaps/SH/reflections) lighting function
	UnityGIInput giInput;
	UNITY_INITIALIZE_OUTPUT(UnityGIInput, giInput);
	giInput.light = gi.light;
	giInput.worldPos = worldPos;
	giInput.worldViewDir = worldViewDir;
	giInput.atten = atten;
#if defined(LIGHTMAP_ON) || defined(DYNAMICLIGHTMAP_ON)
	giInput.lightmapUV = IN.lmap;
#else
	giInput.lightmapUV = 0.0;
#endif

giInput.ambient.rgb = 0.0;
#ifdef LIGHTMAP_OFF
	#if UNITY_SHOULD_SAMPLE_SH
			giInput.ambient = IN.sh;		
	#endif
#endif


	giInput.probeHDR[0] = unity_SpecCube0_HDR;
	giInput.probeHDR[1] = unity_SpecCube1_HDR;
#if UNITY_SPECCUBE_BLENDING || UNITY_SPECCUBE_BOX_PROJECTION
	giInput.boxMin[0] = unity_SpecCube0_BoxMin; // .w holds lerp value for blending
#endif
#if UNITY_SPECCUBE_BOX_PROJECTION
	giInput.boxMax[0] = unity_SpecCube0_BoxMax;
	giInput.probePosition[0] = unity_SpecCube0_ProbePosition;
	giInput.boxMax[1] = unity_SpecCube1_BoxMax;
	giInput.boxMin[1] = unity_SpecCube1_BoxMin;
	giInput.probePosition[1] = unity_SpecCube1_ProbePosition;
#endif
	LightingStandard_GI(o, giInput, gi);

	// realtime lighting: call lighting function
	c += LightingStandard(o, worldViewDir, gi);
	
	#ifdef WIREFRAME_LIGHT_ATTENTION_ON
		c.rgb += o.Emission;
	#else
		WireFinalColor(surfIN, o, c);
	#endif

	return c;
	}

		ENDCG

	}

		// ---- forward rendering additive lights pass:
		Pass{
		Name "FORWARD"
		Tags{ "LightMode" = "ForwardAdd" }
		ZWrite Off Blend One One
		Blend SrcAlpha One

		CGPROGRAM
		// compile directives
#pragma vertex tessvert_surf
#pragma hull hs_surf
#pragma domain ds_surf
#pragma fragment frag_surf
#pragma target 5.0 
#pragma multi_compile_fog
#pragma multi_compile_fwdadd_fullshadows noshadow
#include "HLSLSupport.cginc"
#include "UnityShaderVariables.cginc"
		// Surface shader code generated based on:
		// vertex modifier: 'vert'
		// writes to per-pixel normal: no
		// writes to emission: no
		// needs world space reflection vector: no
		// needs world space normal vector: no
		// needs screen space position: no
		// needs world space position: no
		// needs view direction: no
		// needs world space view direction: no
		// needs world space position for lighting: YES
		// needs world space view direction for lighting: YES
		// needs world space view direction for lightmaps: no
		// needs vertex color: YES
		// needs VFACE: no
		// passes tangent-to-world matrix to pixel shader: no
		// reads from normal: no
		// 0 texcoords actually used

#define _ALPHABLEND_ON 1
#include "UnityCG.cginc"
#include "Lighting.cginc"
#include "UnityPBSLighting.cginc"
#include "AutoLight.cginc"

#define INTERNAL_DATA
#define WorldReflectionVector(data,normal) data.worldRefl
#define WorldNormalVector(data,normal) normal

		// Original surface shader snippet:
#line 88 ""
#ifdef DUMMY_PREPROCESSOR_TO_WORK_AROUND_HLSL_COMPILER_LINE_HANDLING
#endif

		// Physically based Standard lighting model, and enable shadows on all light types
		//#pragma surface surf Standard fullforwardshadows vertex:vert alpha:fade finalcolor:WireFinalColor

		// Use shader model 3.0 target, to get nicer looking lighting
		//#pragma target 3.0


//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"



		#pragma shader_feature_local WIREFRAME_LIGHT_ATTENTION_ON
		#ifdef UNITY_PASS_DEFERRED
		#ifndef WIREFRAME_LIGHT_ATTENTION_ON
		#define WIREFRAME_LIGHT_ATTENTION_ON
		#endif
		#endif
		#pragma shader_feature_local WIREFRAME_FRESNEL_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON

		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX
		#pragma shader_feature_local WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON
		
		#pragma shader_feature_local WIREFRAME_NORMALIZE_EDGES_ON
		#pragma shader_feature_local WIREFRAME_TRY_QUAD_ON
		

#define WIREFRAME_PHYSICALLY_BASED
#define WIREFRAME_TRANSPARENT
#define WIREFRAME_NO 

#include "../cginc/WireframePhysicallyBased.cginc" 


		// vertex-to-fragment interpolation data
		struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};

	// vertex shader
	v2f_surf vert_surf(appdata_full v) {
		v2f_surf o;
		UNITY_INITIALIZE_OUTPUT(v2f_surf,o);
		Input customInputData;
		vert(v, customInputData);
		o.custompack0.xyzw = customInputData.texcoord;
		o.custompack1.xyzw = customInputData.texcoord1;
		o.custompack2.xyzw = customInputData.wireframeShaderTriangleMass;
		o.pos = UnityObjectToClipPos(v.vertex);
		float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
		fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
		o.worldPos = worldPos;
		o.worldNormal = worldNormal;
		o.color = v.color;

		return o;
	}



#pragma shader_feature_local _ WIREFRAME_TESSELLATION_DISTANCE_BASED WIREFRAME_TESSELLATION_EDGE_LENGTH
#pragma shader_feature_local WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION
#include "../cginc/WireframeTessellation.cginc"


	// fragment shader
	fixed4 frag_surf(v2f_surf IN) : SV_Target{
		// prepare and unpack data
		Input surfIN;
	UNITY_INITIALIZE_OUTPUT(Input,surfIN);
	surfIN.texcoord.x = 1.0;
	surfIN.texcoord1.x = 1.0;
	surfIN.worldPos.x = 1.0;
	surfIN.wireframeShaderTriangleMass.x = 1.0;
	surfIN.color.x = 1.0;
	surfIN.texcoord = IN.custompack0.xyzw;
	surfIN.texcoord1 = IN.custompack1.xyzw;
	surfIN.wireframeShaderTriangleMass = IN.custompack2.xyzw;
	surfIN.worldPos = IN.worldPos;
	float3 worldPos = IN.worldPos;

#ifndef USING_DIRECTIONAL_LIGHT
	fixed3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));
#else
	fixed3 lightDir = _WorldSpaceLightPos0.xyz;
#endif
	fixed3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
	surfIN.color = IN.color;
#ifdef UNITY_COMPILER_HLSL
	SurfaceOutputStandard o = (SurfaceOutputStandard)0;
#else
	SurfaceOutputStandard o;
#endif
	o.Albedo = 0.0;
	o.Emission = 0.0;
	o.Alpha = 0.0;
	o.Occlusion = 1.0;
	fixed3 normalWorldVertex = fixed3(0,0,1);
	o.Normal = IN.worldNormal;
	normalWorldVertex = IN.worldNormal;

	// call surface function
	surf(surfIN, o);
	UNITY_LIGHT_ATTENUATION(atten, IN, worldPos)
		fixed4 c = 0;

	// Setup lighting environment
	UnityGI gi;
	UNITY_INITIALIZE_OUTPUT(UnityGI, gi);
	gi.indirect.diffuse = 0;
	gi.indirect.specular = 0;
#if !defined(LIGHTMAP_ON)
	gi.light.color = _LightColor0.rgb;
	gi.light.dir = lightDir;
	gi.light.ndotl = LambertTerm(o.Normal, gi.light.dir);
#endif
	gi.light.color *= atten;
	c += LightingStandard(o, worldViewDir, gi);
	WireFinalColor(surfIN, o, c);
	return c;
	}

		ENDCG

	}




		// ------------------------------------------------------------
		// Surface shader code generated out of a CGPROGRAM block:
		ZWrite Off ColorMask RGB


		// ---- forward rendering base pass:
		Pass{
		Name "FORWARD"
		Tags{ "LightMode" = "ForwardBase" }
		Blend SrcAlpha OneMinusSrcAlpha

		CGPROGRAM
		// compile directives
#pragma vertex tessvert_surf
#pragma hull hs_surf
#pragma domain ds_surf
#pragma geometry geom
#pragma fragment frag_surf
#pragma target 5.0 
#pragma multi_compile_fog
#pragma multi_compile_fwdbasealpha noshadow
#include "HLSLSupport.cginc"
#include "UnityShaderVariables.cginc"
		// Surface shader code generated based on:
		// vertex modifier: 'vert'
		// writes to per-pixel normal: no
		// writes to emission: no
		// needs world space reflection vector: no
		// needs world space normal vector: no
		// needs screen space position: no
		// needs world space position: YES
		// needs view direction: no
		// needs world space view direction: no
		// needs world space position for lighting: YES
		// needs world space view direction for lighting: YES
		// needs world space view direction for lightmaps: no
		// needs vertex color: YES
		// needs VFACE: no
		// passes tangent-to-world matrix to pixel shader: no
		// reads from normal: no
		// 0 texcoords actually used

#define _ALPHABLEND_ON 1
#include "UnityCG.cginc"
#include "Lighting.cginc"
#include "UnityPBSLighting.cginc"
#include "AutoLight.cginc"

#define INTERNAL_DATA
#define WorldReflectionVector(data,normal) data.worldRefl
#define WorldNormalVector(data,normal) normal

		// Original surface shader snippet:
#line 118 ""
#ifdef DUMMY_PREPROCESSOR_TO_WORK_AROUND_HLSL_COMPILER_LINE_HANDLING
#endif

		// Physically based Standard lighting model, and enable shadows on all light types
		//#pragma surface surf Standard fullforwardshadows vertex:vert alpha:fade finalcolor:WireFinalColor

		// Use shader model 3.0 target, to get nicer looking lighting
		//#pragma target 3.0

//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"


		#pragma shader_feature_local WIREFRAME_LIGHT_ATTENTION_ON
		#ifdef UNITY_PASS_DEFERRED
		#ifndef WIREFRAME_LIGHT_ATTENTION_ON
		#define WIREFRAME_LIGHT_ATTENTION_ON
		#endif
		#endif
		#pragma shader_feature_local WIREFRAME_FRESNEL_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON

		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX
		
		#pragma shader_feature_local WIREFRAME_NORMALIZE_EDGES_ON
		#pragma shader_feature_local WIREFRAME_TRY_QUAD_ON

		

#define WIREFRAME_PHYSICALLY_BASED
#define WIREFRAME_TRANSPARENT
#define WIREFRAME_NO_COLOR_BLACK
#define WIREFRAME_SAME_COLOR

#include "../cginc/WireframePhysicallyBased.cginc" 


		// vertex-to-fragment interpolation data
		// no lightmaps:
#ifdef LIGHTMAP_OFF
		struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass
#if UNITY_SHOULD_SAMPLE_SH
		half3 sh : TEXCOORD5; // SH
#endif
#if SHADER_TARGET >= 30
		float4 lmap : TEXCOORD6;
#endif

float3 objectPos : TEXCOORD9;

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};
#endif
	// with lightmaps:
#ifndef LIGHTMAP_OFF
	struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass
		float4 lmap : TEXCOORD5;
#ifdef DIRLIGHTMAP_COMBINED
		fixed3 tSpace0 : TEXCOORD6;
		fixed3 tSpace1 : TEXCOORD7;
		fixed3 tSpace2 : TEXCOORD8;
#endif

float3 objectPos : TEXCOORD9;

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};
#endif


#include "../cginc/WireframeGeometryShader.cginc"


	// vertex shader
	v2f_surf vert_surf(appdata_full v) {
		v2f_surf o;
		UNITY_INITIALIZE_OUTPUT(v2f_surf,o);
		Input customInputData;
		vert(v, customInputData);
		o.custompack0.xyzw = customInputData.texcoord;
		o.custompack1.xyzw = customInputData.texcoord1;
		o.custompack2.xyzw = customInputData.wireframeShaderTriangleMass;
		o.pos = UnityObjectToClipPos(v.vertex);
		o.objectPos = v.vertex.xyz;

		float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
		fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
#if !defined(LIGHTMAP_OFF) && defined(DIRLIGHTMAP_COMBINED)
		fixed3 worldTangent = UnityObjectToWorldDir(v.tangent.xyz);
		fixed tangentSign = v.tangent.w * unity_WorldTransformParams.w;
		fixed3 worldBinormal = cross(worldNormal, worldTangent) * tangentSign;
#endif
#if !defined(LIGHTMAP_OFF) && defined(DIRLIGHTMAP_COMBINED)
		o.tSpace0 = float4(worldTangent.x, worldBinormal.x, worldNormal.x, worldPos.x);
		o.tSpace1 = float4(worldTangent.y, worldBinormal.y, worldNormal.y, worldPos.y);
		o.tSpace2 = float4(worldTangent.z, worldBinormal.z, worldNormal.z, worldPos.z);
#endif
		o.worldPos = worldPos;
		o.worldNormal = worldNormal;
		o.color = v.color;
#ifndef DYNAMICLIGHTMAP_OFF
		o.lmap.zw = v.texcoord2.xy * unity_DynamicLightmapST.xy + unity_DynamicLightmapST.zw;
#endif
#ifndef LIGHTMAP_OFF
		o.lmap.xy = v.texcoord1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
#endif

		// SH/ambient and vertex lights
#ifdef LIGHTMAP_OFF
#if UNITY_SHOULD_SAMPLE_SH
		o.sh = 0;
		// Approximated illumination from non-important point lights
#ifdef VERTEXLIGHT_ON
		o.sh += Shade4PointLights(
			unity_4LightPosX0, unity_4LightPosY0, unity_4LightPosZ0,
			unity_LightColor[0].rgb, unity_LightColor[1].rgb, unity_LightColor[2].rgb, unity_LightColor[3].rgb,
			unity_4LightAtten0, worldPos, worldNormal);
#endif
		o.sh = ShadeSHPerVertex(worldNormal, o.sh);
#endif
#endif // LIGHTMAP_OFF

		return o;
	}


#pragma shader_feature_local _ WIREFRAME_TESSELLATION_DISTANCE_BASED WIREFRAME_TESSELLATION_EDGE_LENGTH
#pragma shader_feature_local WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION
#include "../cginc/WireframeTessellation.cginc"


	// fragment shader
	fixed4 frag_surf(v2f_surf IN) : SV_Target{
		// prepare and unpack data
		Input surfIN;
	UNITY_INITIALIZE_OUTPUT(Input,surfIN);
	surfIN.texcoord.x = 1.0;
	surfIN.texcoord1.x = 1.0;
	surfIN.worldPos.x = 1.0;
	surfIN.wireframeShaderTriangleMass.x = 1.0;
	surfIN.color.x = 1.0;
	surfIN.texcoord = IN.custompack0.xyzw;
	surfIN.texcoord1 = IN.custompack1.xyzw;
	surfIN.wireframeShaderTriangleMass = IN.custompack2.xyzw;
	surfIN.worldPos = IN.worldPos;
	float3 worldPos = IN.worldPos;

#ifndef USING_DIRECTIONAL_LIGHT
	fixed3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));
#else
	fixed3 lightDir = _WorldSpaceLightPos0.xyz;
#endif
	fixed3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
	surfIN.worldPos = worldPos;
	surfIN.color = IN.color;
#ifdef UNITY_COMPILER_HLSL
	SurfaceOutputStandard o = (SurfaceOutputStandard)0;
#else
	SurfaceOutputStandard o;
#endif
	o.Albedo = 0.0;
	o.Emission = 0.0;
	o.Alpha = 0.0;
	o.Occlusion = 1.0;
	fixed3 normalWorldVertex = fixed3(0,0,1);
	o.Normal = IN.worldNormal;
	normalWorldVertex = IN.worldNormal;

	// call surface function
	surf(surfIN, o);

	// compute lighting & shadowing factor
	UNITY_LIGHT_ATTENUATION(atten, IN, worldPos)
		fixed4 c = 0;

	// Setup lighting environment
	UnityGI gi;
	UNITY_INITIALIZE_OUTPUT(UnityGI, gi);
	gi.indirect.diffuse = 0;
	gi.indirect.specular = 0;
#if !defined(LIGHTMAP_ON)
	gi.light.color = _LightColor0.rgb;
	gi.light.dir = lightDir;
	gi.light.ndotl = LambertTerm(o.Normal, gi.light.dir);
#endif
	// Call GI (lightmaps/SH/reflections) lighting function
	UnityGIInput giInput;
	UNITY_INITIALIZE_OUTPUT(UnityGIInput, giInput);
	giInput.light = gi.light;
	giInput.worldPos = worldPos;
	giInput.worldViewDir = worldViewDir;
	giInput.atten = atten;
#if defined(LIGHTMAP_ON) || defined(DYNAMICLIGHTMAP_ON)
	giInput.lightmapUV = IN.lmap;
#else
	giInput.lightmapUV = 0.0;
#endif

giInput.ambient.rgb = 0.0;
#ifdef LIGHTMAP_OFF
	#if UNITY_SHOULD_SAMPLE_SH
			giInput.ambient = IN.sh;		
	#endif
#endif


	giInput.probeHDR[0] = unity_SpecCube0_HDR;
	giInput.probeHDR[1] = unity_SpecCube1_HDR;
#if UNITY_SPECCUBE_BLENDING || UNITY_SPECCUBE_BOX_PROJECTION
	giInput.boxMin[0] = unity_SpecCube0_BoxMin; // .w holds lerp value for blending
#endif
#if UNITY_SPECCUBE_BOX_PROJECTION
	giInput.boxMax[0] = unity_SpecCube0_BoxMax;
	giInput.probePosition[0] = unity_SpecCube0_ProbePosition;
	giInput.boxMax[1] = unity_SpecCube1_BoxMax;
	giInput.boxMin[1] = unity_SpecCube1_BoxMin;
	giInput.probePosition[1] = unity_SpecCube1_ProbePosition;
#endif
	LightingStandard_GI(o, giInput, gi);

	// realtime lighting: call lighting function
	c += LightingStandard(o, worldViewDir, gi);
	
	#ifdef WIREFRAME_LIGHT_ATTENTION_ON
		c.rgb += o.Emission;

		#if defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2)
			float fogCoord = mul(UNITY_MATRIX_VP, float4(worldPos, 1)).z;
			UNITY_APPLY_FOG(fogCoord, c);
		#endif
	#else
		WireFinalColor(surfIN, o, c);
	#endif

	return c;
	}

		ENDCG

	}

		// ---- forward rendering additive lights pass:
		Pass{
		Name "FORWARD"
		Tags{ "LightMode" = "ForwardAdd" }
		ZWrite Off Blend One One
		Blend SrcAlpha One

		CGPROGRAM
		// compile directives
#pragma vertex tessvert_surf
#pragma hull hs_surf
#pragma domain ds_surf
#pragma geometry geom
#pragma fragment frag_surf
#pragma target 5.0 
#pragma multi_compile_fog
#pragma multi_compile_fwdadd_fullshadows noshadow
#include "HLSLSupport.cginc"
#include "UnityShaderVariables.cginc"
		// Surface shader code generated based on:
		// vertex modifier: 'vert'
		// writes to per-pixel normal: no
		// writes to emission: no
		// needs world space reflection vector: no
		// needs world space normal vector: no
		// needs screen space position: no
		// needs world space position: YES
		// needs view direction: no
		// needs world space view direction: no
		// needs world space position for lighting: YES
		// needs world space view direction for lighting: YES
		// needs world space view direction for lightmaps: no
		// needs vertex color: YES
		// needs VFACE: no
		// passes tangent-to-world matrix to pixel shader: no
		// reads from normal: no
		// 0 texcoords actually used

#define _ALPHABLEND_ON 1
#include "UnityCG.cginc"
#include "Lighting.cginc"
#include "UnityPBSLighting.cginc"
#include "AutoLight.cginc"

#define INTERNAL_DATA
#define WorldReflectionVector(data,normal) data.worldRefl
#define WorldNormalVector(data,normal) normal

		// Original surface shader snippet:
#line 118 ""
#ifdef DUMMY_PREPROCESSOR_TO_WORK_AROUND_HLSL_COMPILER_LINE_HANDLING
#endif

		// Physically based Standard lighting model, and enable shadows on all light types
		//#pragma surface surf Standard fullforwardshadows vertex:vert alpha:fade finalcolor:WireFinalColor

		// Use shader model 3.0 target, to get nicer looking lighting
		//#pragma target 3.0


//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"

		#pragma shader_feature_local WIREFRAME_LIGHT_ATTENTION_ON
		#ifdef UNITY_PASS_DEFERRED
		#ifndef WIREFRAME_LIGHT_ATTENTION_ON
		#define WIREFRAME_LIGHT_ATTENTION_ON
		#endif
		#endif
		#pragma shader_feature_local WIREFRAME_FRESNEL_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON

		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX
		
		#pragma shader_feature_local WIREFRAME_NORMALIZE_EDGES_ON
		#pragma shader_feature_local WIREFRAME_TRY_QUAD_ON


#define WIREFRAME_PHYSICALLY_BASED
#define WIREFRAME_TRANSPARENT
#define WIREFRAME_NO_COLOR_BLACK
#define WIREFRAME_SAME_COLOR

#include "../cginc/WireframePhysicallyBased.cginc" 


		// vertex-to-fragment interpolation data
		struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass

		float3 objectPos : TEXCOORD9;

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};


#include "../cginc/WireframeGeometryShader.cginc"


	// vertex shader
	v2f_surf vert_surf(appdata_full v) {
		v2f_surf o;
		UNITY_INITIALIZE_OUTPUT(v2f_surf,o);
		Input customInputData;
		vert(v, customInputData);
		o.custompack0.xyzw = customInputData.texcoord;
		o.custompack1.xyzw = customInputData.texcoord1;
		o.custompack2.xyzw = customInputData.wireframeShaderTriangleMass;
		o.pos = UnityObjectToClipPos(v.vertex);
		o.objectPos = v.vertex.xyz;

		float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
		fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
		o.worldPos = worldPos;
		o.worldNormal = worldNormal;
		o.color = v.color;

		return o;
	}


#pragma shader_feature_local _ WIREFRAME_TESSELLATION_DISTANCE_BASED WIREFRAME_TESSELLATION_EDGE_LENGTH
#pragma shader_feature_local WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION
#include "../cginc/WireframeTessellation.cginc"


	// fragment shader
	fixed4 frag_surf(v2f_surf IN) : SV_Target{
		// prepare and unpack data
		Input surfIN;
	UNITY_INITIALIZE_OUTPUT(Input,surfIN);
	surfIN.texcoord.x = 1.0;
	surfIN.texcoord1.x = 1.0;
	surfIN.worldPos.x = 1.0;
	surfIN.wireframeShaderTriangleMass.x = 1.0;
	surfIN.color.x = 1.0;
	surfIN.texcoord = IN.custompack0.xyzw;
	surfIN.texcoord1 = IN.custompack1.xyzw;
	surfIN.wireframeShaderTriangleMass = IN.custompack2.xyzw;
	surfIN.worldPos = IN.worldPos;
	float3 worldPos = IN.worldPos;

#ifndef USING_DIRECTIONAL_LIGHT
	fixed3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));
#else
	fixed3 lightDir = _WorldSpaceLightPos0.xyz;
#endif
	fixed3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
	surfIN.worldPos = worldPos;
	surfIN.color = IN.color;
#ifdef UNITY_COMPILER_HLSL
	SurfaceOutputStandard o = (SurfaceOutputStandard)0;
#else
	SurfaceOutputStandard o;
#endif
	o.Albedo = 0.0;
	o.Emission = 0.0;
	o.Alpha = 0.0;
	o.Occlusion = 1.0;
	fixed3 normalWorldVertex = fixed3(0,0,1);
	o.Normal = IN.worldNormal;
	normalWorldVertex = IN.worldNormal;

	// call surface function
	surf(surfIN, o);
	UNITY_LIGHT_ATTENUATION(atten, IN, worldPos)
		fixed4 c = 0;

	// Setup lighting environment
	UnityGI gi;
	UNITY_INITIALIZE_OUTPUT(UnityGI, gi);
	gi.indirect.diffuse = 0;
	gi.indirect.specular = 0;
#if !defined(LIGHTMAP_ON)
	gi.light.color = _LightColor0.rgb;
	gi.light.dir = lightDir;
	gi.light.ndotl = LambertTerm(o.Normal, gi.light.dir);
#endif
	gi.light.color *= atten;
	c += LightingStandard(o, worldViewDir, gi);
	WireFinalColor(surfIN, o, c);
	return c;
	}

		ENDCG

	}






		ZWrite On
		Cull Back


		// ------------------------------------------------------------
		// Surface shader code generated out of a CGPROGRAM block:
		ZWrite Off ColorMask RGB


		// ---- forward rendering base pass:
		Pass{
		Name "FORWARD"
		Tags{ "LightMode" = "ForwardBase" }
		Blend SrcAlpha OneMinusSrcAlpha

		CGPROGRAM
		// compile directives
#pragma vertex tessvert_surf
#pragma hull hs_surf
#pragma domain ds_surf
#pragma fragment frag_surf
#pragma target 5.0 
#pragma multi_compile_fog
#pragma multi_compile_fwdbasealpha noshadow
#include "HLSLSupport.cginc"
#include "UnityShaderVariables.cginc"
		// Surface shader code generated based on:
		// vertex modifier: 'vert'
		// writes to per-pixel normal: no
		// writes to emission: no
		// needs world space reflection vector: no
		// needs world space normal vector: no
		// needs screen space position: no
		// needs world space position: no
		// needs view direction: no
		// needs world space view direction: no
		// needs world space position for lighting: YES
		// needs world space view direction for lighting: YES
		// needs world space view direction for lightmaps: no
		// needs vertex color: YES
		// needs VFACE: no
		// passes tangent-to-world matrix to pixel shader: no
		// reads from normal: no
		// 0 texcoords actually used

#define _ALPHABLEND_ON 1
#include "UnityCG.cginc"
#include "Lighting.cginc"
#include "UnityPBSLighting.cginc"
#include "AutoLight.cginc"

#define INTERNAL_DATA
#define WorldReflectionVector(data,normal) data.worldRefl
#define WorldNormalVector(data,normal) normal

		// Original surface shader snippet:
#line 152 ""
#ifdef DUMMY_PREPROCESSOR_TO_WORK_AROUND_HLSL_COMPILER_LINE_HANDLING
#endif

		// Physically based Standard lighting model, and enable shadows on all light types
		//#pragma surface surf Standard fullforwardshadows vertex:vert alpha:fade finalcolor:WireFinalColor

		// Use shader model 3.0 target, to get nicer looking lighting
		//#pragma target 3.0



//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"


		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX
		#pragma shader_feature_local WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON

		#pragma shader_feature_local WIREFRAME_NORMALIZE_EDGES_ON
		#pragma shader_feature_local WIREFRAME_TRY_QUAD_ON
		

		
#define WIREFRAME_PHYSICALLY_BASED
#define WIREFRAME_TRANSPARENT
#define WIREFRAME_NO 

#include "../cginc/WireframePhysicallyBased.cginc" 


		// vertex-to-fragment interpolation data
		// no lightmaps:
#ifdef LIGHTMAP_OFF
		struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass
#if UNITY_SHOULD_SAMPLE_SH
		half3 sh : TEXCOORD5; // SH
#endif
#if SHADER_TARGET >= 30
		float4 lmap : TEXCOORD6;
#endif

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};
#endif
	// with lightmaps:
#ifndef LIGHTMAP_OFF
	struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass
		float4 lmap : TEXCOORD5;
#ifdef DIRLIGHTMAP_COMBINED
		fixed3 tSpace0 : TEXCOORD6;
		fixed3 tSpace1 : TEXCOORD7;
		fixed3 tSpace2 : TEXCOORD8;
#endif

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};
#endif

	// vertex shader
	v2f_surf vert_surf(appdata_full v) {
		v2f_surf o;
		UNITY_INITIALIZE_OUTPUT(v2f_surf,o);
		Input customInputData;
		vert(v, customInputData);
		o.custompack0.xyzw = customInputData.texcoord;
		o.custompack1.xyzw = customInputData.texcoord1;
		o.custompack2.xyzw = customInputData.wireframeShaderTriangleMass;
		o.pos = UnityObjectToClipPos(v.vertex);
		float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
		fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
#if !defined(LIGHTMAP_OFF) && defined(DIRLIGHTMAP_COMBINED)
		fixed3 worldTangent = UnityObjectToWorldDir(v.tangent.xyz);
		fixed tangentSign = v.tangent.w * unity_WorldTransformParams.w;
		fixed3 worldBinormal = cross(worldNormal, worldTangent) * tangentSign;
#endif
#if !defined(LIGHTMAP_OFF) && defined(DIRLIGHTMAP_COMBINED)
		o.tSpace0 = float4(worldTangent.x, worldBinormal.x, worldNormal.x, worldPos.x);
		o.tSpace1 = float4(worldTangent.y, worldBinormal.y, worldNormal.y, worldPos.y);
		o.tSpace2 = float4(worldTangent.z, worldBinormal.z, worldNormal.z, worldPos.z);
#endif
		o.worldPos = worldPos;
		o.worldNormal = worldNormal;
		o.color = v.color;
#ifndef DYNAMICLIGHTMAP_OFF
		o.lmap.zw = v.texcoord2.xy * unity_DynamicLightmapST.xy + unity_DynamicLightmapST.zw;
#endif
#ifndef LIGHTMAP_OFF
		o.lmap.xy = v.texcoord1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
#endif

		// SH/ambient and vertex lights
#ifdef LIGHTMAP_OFF
#if UNITY_SHOULD_SAMPLE_SH
		o.sh = 0;
		// Approximated illumination from non-important point lights
#ifdef VERTEXLIGHT_ON
		o.sh += Shade4PointLights(
			unity_4LightPosX0, unity_4LightPosY0, unity_4LightPosZ0,
			unity_LightColor[0].rgb, unity_LightColor[1].rgb, unity_LightColor[2].rgb, unity_LightColor[3].rgb,
			unity_4LightAtten0, worldPos, worldNormal);
#endif
		o.sh = ShadeSHPerVertex(worldNormal, o.sh);
#endif
#endif // LIGHTMAP_OFF

		return o;
	}



#pragma shader_feature_local _ WIREFRAME_TESSELLATION_DISTANCE_BASED WIREFRAME_TESSELLATION_EDGE_LENGTH
#pragma shader_feature_local WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION
#include "../cginc/WireframeTessellation.cginc"



	// fragment shader
	fixed4 frag_surf(v2f_surf IN) : SV_Target{
		// prepare and unpack data
		Input surfIN;
	UNITY_INITIALIZE_OUTPUT(Input,surfIN);
	surfIN.texcoord.x = 1.0;
	surfIN.texcoord1.x = 1.0;
	surfIN.worldPos.x = 1.0;
	surfIN.wireframeShaderTriangleMass.x = 1.0;
	surfIN.color.x = 1.0;
	surfIN.texcoord = IN.custompack0.xyzw;
	surfIN.texcoord1 = IN.custompack1.xyzw;
	surfIN.wireframeShaderTriangleMass = IN.custompack2.xyzw;
	surfIN.worldPos = IN.worldPos;
	float3 worldPos = IN.worldPos;

#ifndef USING_DIRECTIONAL_LIGHT
	fixed3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));
#else
	fixed3 lightDir = _WorldSpaceLightPos0.xyz;
#endif
	fixed3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
	surfIN.color = IN.color;
#ifdef UNITY_COMPILER_HLSL
	SurfaceOutputStandard o = (SurfaceOutputStandard)0;
#else
	SurfaceOutputStandard o;
#endif
	o.Albedo = 0.0;
	o.Emission = 0.0;
	o.Alpha = 0.0;
	o.Occlusion = 1.0;
	fixed3 normalWorldVertex = fixed3(0,0,1);
	o.Normal = IN.worldNormal;
	normalWorldVertex = IN.worldNormal;

	// call surface function
	surf(surfIN, o);

	// compute lighting & shadowing factor
	UNITY_LIGHT_ATTENUATION(atten, IN, worldPos)
		fixed4 c = 0;

	// Setup lighting environment
	UnityGI gi;
	UNITY_INITIALIZE_OUTPUT(UnityGI, gi);
	gi.indirect.diffuse = 0;
	gi.indirect.specular = 0;
#if !defined(LIGHTMAP_ON)
	gi.light.color = _LightColor0.rgb;
	gi.light.dir = lightDir;
	gi.light.ndotl = LambertTerm(o.Normal, gi.light.dir);
#endif
	// Call GI (lightmaps/SH/reflections) lighting function
	UnityGIInput giInput;
	UNITY_INITIALIZE_OUTPUT(UnityGIInput, giInput);
	giInput.light = gi.light;
	giInput.worldPos = worldPos;
	giInput.worldViewDir = worldViewDir;
	giInput.atten = atten;
#if defined(LIGHTMAP_ON) || defined(DYNAMICLIGHTMAP_ON)
	giInput.lightmapUV = IN.lmap;
#else
	giInput.lightmapUV = 0.0;
#endif

giInput.ambient.rgb = 0.0;
#ifdef LIGHTMAP_OFF
	#if UNITY_SHOULD_SAMPLE_SH
			giInput.ambient = IN.sh;		
	#endif
#endif


	giInput.probeHDR[0] = unity_SpecCube0_HDR;
	giInput.probeHDR[1] = unity_SpecCube1_HDR;
#if UNITY_SPECCUBE_BLENDING || UNITY_SPECCUBE_BOX_PROJECTION
	giInput.boxMin[0] = unity_SpecCube0_BoxMin; // .w holds lerp value for blending
#endif
#if UNITY_SPECCUBE_BOX_PROJECTION
	giInput.boxMax[0] = unity_SpecCube0_BoxMax;
	giInput.probePosition[0] = unity_SpecCube0_ProbePosition;
	giInput.boxMax[1] = unity_SpecCube1_BoxMax;
	giInput.boxMin[1] = unity_SpecCube1_BoxMin;
	giInput.probePosition[1] = unity_SpecCube1_ProbePosition;
#endif
	LightingStandard_GI(o, giInput, gi);

	// realtime lighting: call lighting function
	c += LightingStandard(o, worldViewDir, gi);
	
	#ifdef WIREFRAME_LIGHT_ATTENTION_ON
		c.rgb += o.Emission;
	#else
		WireFinalColor(surfIN, o, c);
	#endif

	return c;
	}

		ENDCG

	}

		// ---- forward rendering additive lights pass:
		Pass{
		Name "FORWARD"
		Tags{ "LightMode" = "ForwardAdd" }
		ZWrite Off Blend One One
		Blend SrcAlpha One

		CGPROGRAM
		// compile directives
#pragma vertex tessvert_surf
#pragma hull hs_surf
#pragma domain ds_surf
#pragma fragment frag_surf
#pragma target 5.0 
#pragma multi_compile_fog
#pragma multi_compile_fwdadd_fullshadows noshadow
#include "HLSLSupport.cginc"
#include "UnityShaderVariables.cginc"
		// Surface shader code generated based on:
		// vertex modifier: 'vert'
		// writes to per-pixel normal: no
		// writes to emission: no
		// needs world space reflection vector: no
		// needs world space normal vector: no
		// needs screen space position: no
		// needs world space position: no
		// needs view direction: no
		// needs world space view direction: no
		// needs world space position for lighting: YES
		// needs world space view direction for lighting: YES
		// needs world space view direction for lightmaps: no
		// needs vertex color: YES
		// needs VFACE: no
		// passes tangent-to-world matrix to pixel shader: no
		// reads from normal: no
		// 0 texcoords actually used

#define _ALPHABLEND_ON 1
#include "UnityCG.cginc"
#include "Lighting.cginc"
#include "UnityPBSLighting.cginc"
#include "AutoLight.cginc"

#define INTERNAL_DATA
#define WorldReflectionVector(data,normal) data.worldRefl
#define WorldNormalVector(data,normal) normal

		// Original surface shader snippet:
#line 152 ""
#ifdef DUMMY_PREPROCESSOR_TO_WORK_AROUND_HLSL_COMPILER_LINE_HANDLING
#endif

		// Physically based Standard lighting model, and enable shadows on all light types
		//#pragma surface surf Standard fullforwardshadows vertex:vert alpha:fade finalcolor:WireFinalColor

		// Use shader model 3.0 target, to get nicer looking lighting
		//#pragma target 3.0


//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"



		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX
		#pragma shader_feature_local WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON

		#pragma shader_feature_local WIREFRAME_NORMALIZE_EDGES_ON
		#pragma shader_feature_local WIREFRAME_TRY_QUAD_ON
		

		
#define WIREFRAME_PHYSICALLY_BASED
#define WIREFRAME_TRANSPARENT
#define WIREFRAME_NO 

#include "../cginc/WireframePhysicallyBased.cginc" 


		// vertex-to-fragment interpolation data
		struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};

	// vertex shader
	v2f_surf vert_surf(appdata_full v) {
		v2f_surf o;
		UNITY_INITIALIZE_OUTPUT(v2f_surf,o);
		Input customInputData;
		vert(v, customInputData);
		o.custompack0.xyzw = customInputData.texcoord;
		o.custompack1.xyzw = customInputData.texcoord1;
		o.custompack2.xyzw = customInputData.wireframeShaderTriangleMass;
		o.pos = UnityObjectToClipPos(v.vertex);
		float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
		fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
		o.worldPos = worldPos;
		o.worldNormal = worldNormal;
		o.color = v.color;

		return o;
	}



#pragma shader_feature_local _ WIREFRAME_TESSELLATION_DISTANCE_BASED WIREFRAME_TESSELLATION_EDGE_LENGTH
#pragma shader_feature_local WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION
#include "../cginc/WireframeTessellation.cginc"


	// fragment shader
	fixed4 frag_surf(v2f_surf IN) : SV_Target{
		// prepare and unpack data
		Input surfIN;
	UNITY_INITIALIZE_OUTPUT(Input,surfIN);
	surfIN.texcoord.x = 1.0;
	surfIN.texcoord1.x = 1.0;
	surfIN.worldPos.x = 1.0;
	surfIN.wireframeShaderTriangleMass.x = 1.0;
	surfIN.color.x = 1.0;
	surfIN.texcoord = IN.custompack0.xyzw;
	surfIN.texcoord1 = IN.custompack1.xyzw;
	surfIN.wireframeShaderTriangleMass = IN.custompack2.xyzw;
	surfIN.worldPos = IN.worldPos;
	float3 worldPos = IN.worldPos;

#ifndef USING_DIRECTIONAL_LIGHT
	fixed3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));
#else
	fixed3 lightDir = _WorldSpaceLightPos0.xyz;
#endif
	fixed3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
	surfIN.color = IN.color;
#ifdef UNITY_COMPILER_HLSL
	SurfaceOutputStandard o = (SurfaceOutputStandard)0;
#else
	SurfaceOutputStandard o;
#endif
	o.Albedo = 0.0;
	o.Emission = 0.0;
	o.Alpha = 0.0;
	o.Occlusion = 1.0;
	fixed3 normalWorldVertex = fixed3(0,0,1);
	o.Normal = IN.worldNormal;
	normalWorldVertex = IN.worldNormal;

	// call surface function
	surf(surfIN, o);
	UNITY_LIGHT_ATTENUATION(atten, IN, worldPos)
		fixed4 c = 0;

	// Setup lighting environment
	UnityGI gi;
	UNITY_INITIALIZE_OUTPUT(UnityGI, gi);
	gi.indirect.diffuse = 0;
	gi.indirect.specular = 0;
#if !defined(LIGHTMAP_ON)
	gi.light.color = _LightColor0.rgb;
	gi.light.dir = lightDir;
	gi.light.ndotl = LambertTerm(o.Normal, gi.light.dir);
#endif
	gi.light.color *= atten;
	c += LightingStandard(o, worldViewDir, gi);
	WireFinalColor(surfIN, o, c);
	return c;
	}

		ENDCG

	}




		// ------------------------------------------------------------
		// Surface shader code generated out of a CGPROGRAM block:
		ZWrite Off ColorMask RGB


		// ---- forward rendering base pass:
		Pass{
		Name "FORWARD"
		Tags{ "LightMode" = "ForwardBase" }
		Blend SrcAlpha OneMinusSrcAlpha

		CGPROGRAM
		// compile directives
#pragma vertex tessvert_surf
#pragma hull hs_surf
#pragma domain ds_surf
#pragma geometry geom
#pragma fragment frag_surf
#pragma target 5.0 
#pragma multi_compile_fog
#pragma multi_compile_fwdbasealpha noshadow
#include "HLSLSupport.cginc"
#include "UnityShaderVariables.cginc"
		// Surface shader code generated based on:
		// vertex modifier: 'vert'
		// writes to per-pixel normal: no
		// writes to emission: no
		// needs world space reflection vector: no
		// needs world space normal vector: no
		// needs screen space position: no
		// needs world space position: YES
		// needs view direction: no
		// needs world space view direction: no
		// needs world space position for lighting: YES
		// needs world space view direction for lighting: YES
		// needs world space view direction for lightmaps: no
		// needs vertex color: YES
		// needs VFACE: no
		// passes tangent-to-world matrix to pixel shader: no
		// reads from normal: no
		// 0 texcoords actually used

#define _ALPHABLEND_ON 1
#include "UnityCG.cginc"
#include "Lighting.cginc"
#include "UnityPBSLighting.cginc"
#include "AutoLight.cginc"

#define INTERNAL_DATA
#define WorldReflectionVector(data,normal) data.worldRefl
#define WorldNormalVector(data,normal) normal

		// Original surface shader snippet:
#line 173 ""
#ifdef DUMMY_PREPROCESSOR_TO_WORK_AROUND_HLSL_COMPILER_LINE_HANDLING
#endif

		// Physically based Standard lighting model, and enable shadows on all light types
		//#pragma surface surf Standard fullforwardshadows vertex:vert alpha:fade finalcolor:WireFinalColor

		// Use shader model 3.0 target, to get nicer looking lighting
		//#pragma target 3.0

//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"


		#pragma shader_feature_local WIREFRAME_LIGHT_ATTENTION_ON
		#ifdef UNITY_PASS_DEFERRED
		#ifndef WIREFRAME_LIGHT_ATTENTION_ON
		#define WIREFRAME_LIGHT_ATTENTION_ON
		#endif
		#endif
		#pragma shader_feature_local WIREFRAME_FRESNEL_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON

		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX
		
		#pragma shader_feature_local WIREFRAME_NORMALIZE_EDGES_ON
		#pragma shader_feature_local WIREFRAME_TRY_QUAD_ON
		

#define WIREFRAME_PHYSICALLY_BASED
#define WIREFRAME_TRANSPARENT
#define WIREFRAME_NO_COLOR_BLACK
#define WIREFRAME_SAME_COLOR

#include "../cginc/WireframePhysicallyBased.cginc" 


		// vertex-to-fragment interpolation data
		// no lightmaps:
#ifdef LIGHTMAP_OFF
		struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass
#if UNITY_SHOULD_SAMPLE_SH
		half3 sh : TEXCOORD5; // SH
#endif
#if SHADER_TARGET >= 30
		float4 lmap : TEXCOORD6;
#endif

float3 objectPos : TEXCOORD9;

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};
#endif
	// with lightmaps:
#ifndef LIGHTMAP_OFF
	struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass
		float4 lmap : TEXCOORD5;
#ifdef DIRLIGHTMAP_COMBINED
		fixed3 tSpace0 : TEXCOORD6;
		fixed3 tSpace1 : TEXCOORD7;
		fixed3 tSpace2 : TEXCOORD8;
#endif

float3 objectPos : TEXCOORD9;

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};
#endif


#include "../cginc/WireframeGeometryShader.cginc"


	// vertex shader
	v2f_surf vert_surf(appdata_full v) {
		v2f_surf o;
		UNITY_INITIALIZE_OUTPUT(v2f_surf,o);
		Input customInputData;
		vert(v, customInputData);
		o.custompack0.xyzw = customInputData.texcoord;
		o.custompack1.xyzw = customInputData.texcoord1;
		o.custompack2.xyzw = customInputData.wireframeShaderTriangleMass;
		o.pos = UnityObjectToClipPos(v.vertex);
		o.objectPos = v.vertex.xyz;

		float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
		fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
#if !defined(LIGHTMAP_OFF) && defined(DIRLIGHTMAP_COMBINED)
		fixed3 worldTangent = UnityObjectToWorldDir(v.tangent.xyz);
		fixed tangentSign = v.tangent.w * unity_WorldTransformParams.w;
		fixed3 worldBinormal = cross(worldNormal, worldTangent) * tangentSign;
#endif
#if !defined(LIGHTMAP_OFF) && defined(DIRLIGHTMAP_COMBINED)
		o.tSpace0 = float4(worldTangent.x, worldBinormal.x, worldNormal.x, worldPos.x);
		o.tSpace1 = float4(worldTangent.y, worldBinormal.y, worldNormal.y, worldPos.y);
		o.tSpace2 = float4(worldTangent.z, worldBinormal.z, worldNormal.z, worldPos.z);
#endif
		o.worldPos = worldPos;
		o.worldNormal = worldNormal;
		o.color = v.color;
#ifndef DYNAMICLIGHTMAP_OFF
		o.lmap.zw = v.texcoord2.xy * unity_DynamicLightmapST.xy + unity_DynamicLightmapST.zw;
#endif
#ifndef LIGHTMAP_OFF
		o.lmap.xy = v.texcoord1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
#endif

		// SH/ambient and vertex lights
#ifdef LIGHTMAP_OFF
#if UNITY_SHOULD_SAMPLE_SH
		o.sh = 0;
		// Approximated illumination from non-important point lights
#ifdef VERTEXLIGHT_ON
		o.sh += Shade4PointLights(
			unity_4LightPosX0, unity_4LightPosY0, unity_4LightPosZ0,
			unity_LightColor[0].rgb, unity_LightColor[1].rgb, unity_LightColor[2].rgb, unity_LightColor[3].rgb,
			unity_4LightAtten0, worldPos, worldNormal);
#endif
		o.sh = ShadeSHPerVertex(worldNormal, o.sh);
#endif
#endif // LIGHTMAP_OFF

		return o;
	}


#pragma shader_feature_local _ WIREFRAME_TESSELLATION_DISTANCE_BASED WIREFRAME_TESSELLATION_EDGE_LENGTH
#pragma shader_feature_local WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION
#include "../cginc/WireframeTessellation.cginc"


	// fragment shader
	fixed4 frag_surf(v2f_surf IN) : SV_Target{
		// prepare and unpack data
		Input surfIN;
	UNITY_INITIALIZE_OUTPUT(Input,surfIN);
	surfIN.texcoord.x = 1.0;
	surfIN.texcoord1.x = 1.0;
	surfIN.worldPos.x = 1.0;
	surfIN.wireframeShaderTriangleMass.x = 1.0;
	surfIN.color.x = 1.0;
	surfIN.texcoord = IN.custompack0.xyzw;
	surfIN.texcoord1 = IN.custompack1.xyzw;
	surfIN.wireframeShaderTriangleMass = IN.custompack2.xyzw;
	surfIN.worldPos = IN.worldPos;
	float3 worldPos = IN.worldPos;

#ifndef USING_DIRECTIONAL_LIGHT
	fixed3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));
#else
	fixed3 lightDir = _WorldSpaceLightPos0.xyz;
#endif
	fixed3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
	surfIN.worldPos = worldPos;
	surfIN.color = IN.color;
#ifdef UNITY_COMPILER_HLSL
	SurfaceOutputStandard o = (SurfaceOutputStandard)0;
#else
	SurfaceOutputStandard o;
#endif
	o.Albedo = 0.0;
	o.Emission = 0.0;
	o.Alpha = 0.0;
	o.Occlusion = 1.0;
	fixed3 normalWorldVertex = fixed3(0,0,1);
	o.Normal = IN.worldNormal;
	normalWorldVertex = IN.worldNormal;

	// call surface function
	surf(surfIN, o);

	// compute lighting & shadowing factor
	UNITY_LIGHT_ATTENUATION(atten, IN, worldPos)
		fixed4 c = 0;

	// Setup lighting environment
	UnityGI gi;
	UNITY_INITIALIZE_OUTPUT(UnityGI, gi);
	gi.indirect.diffuse = 0;
	gi.indirect.specular = 0;
#if !defined(LIGHTMAP_ON)
	gi.light.color = _LightColor0.rgb;
	gi.light.dir = lightDir;
	gi.light.ndotl = LambertTerm(o.Normal, gi.light.dir);
#endif
	// Call GI (lightmaps/SH/reflections) lighting function
	UnityGIInput giInput;
	UNITY_INITIALIZE_OUTPUT(UnityGIInput, giInput);
	giInput.light = gi.light;
	giInput.worldPos = worldPos;
	giInput.worldViewDir = worldViewDir;
	giInput.atten = atten;
#if defined(LIGHTMAP_ON) || defined(DYNAMICLIGHTMAP_ON)
	giInput.lightmapUV = IN.lmap;
#else
	giInput.lightmapUV = 0.0;
#endif

giInput.ambient.rgb = 0.0;
#ifdef LIGHTMAP_OFF
	#if UNITY_SHOULD_SAMPLE_SH
			giInput.ambient = IN.sh;		
	#endif
#endif


	giInput.probeHDR[0] = unity_SpecCube0_HDR;
	giInput.probeHDR[1] = unity_SpecCube1_HDR;
#if UNITY_SPECCUBE_BLENDING || UNITY_SPECCUBE_BOX_PROJECTION
	giInput.boxMin[0] = unity_SpecCube0_BoxMin; // .w holds lerp value for blending
#endif
#if UNITY_SPECCUBE_BOX_PROJECTION
	giInput.boxMax[0] = unity_SpecCube0_BoxMax;
	giInput.probePosition[0] = unity_SpecCube0_ProbePosition;
	giInput.boxMax[1] = unity_SpecCube1_BoxMax;
	giInput.boxMin[1] = unity_SpecCube1_BoxMin;
	giInput.probePosition[1] = unity_SpecCube1_ProbePosition;
#endif
	LightingStandard_GI(o, giInput, gi);

	// realtime lighting: call lighting function
	c += LightingStandard(o, worldViewDir, gi);
	
	#ifdef WIREFRAME_LIGHT_ATTENTION_ON
		c.rgb += o.Emission;

		#if defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2)
			float fogCoord = mul(UNITY_MATRIX_VP, float4(worldPos, 1)).z;
			UNITY_APPLY_FOG(fogCoord, c);
		#endif
	#else
		WireFinalColor(surfIN, o, c);
	#endif

	return c;
	}

		ENDCG

	}

		// ---- forward rendering additive lights pass:
		Pass{
		Name "FORWARD"
		Tags{ "LightMode" = "ForwardAdd" }
		ZWrite Off Blend One One
		Blend SrcAlpha One

		CGPROGRAM
		// compile directives
#pragma vertex tessvert_surf
#pragma hull hs_surf
#pragma domain ds_surf
#pragma geometry geom
#pragma fragment frag_surf
#pragma target 5.0 
#pragma multi_compile_fog
#pragma multi_compile_fwdadd_fullshadows noshadow
#include "HLSLSupport.cginc"
#include "UnityShaderVariables.cginc"
		// Surface shader code generated based on:
		// vertex modifier: 'vert'
		// writes to per-pixel normal: no
		// writes to emission: no
		// needs world space reflection vector: no
		// needs world space normal vector: no
		// needs screen space position: no
		// needs world space position: YES
		// needs view direction: no
		// needs world space view direction: no
		// needs world space position for lighting: YES
		// needs world space view direction for lighting: YES
		// needs world space view direction for lightmaps: no
		// needs vertex color: YES
		// needs VFACE: no
		// passes tangent-to-world matrix to pixel shader: no
		// reads from normal: no
		// 0 texcoords actually used

#define _ALPHABLEND_ON 1
#include "UnityCG.cginc"
#include "Lighting.cginc"
#include "UnityPBSLighting.cginc"
#include "AutoLight.cginc"

#define INTERNAL_DATA
#define WorldReflectionVector(data,normal) data.worldRefl
#define WorldNormalVector(data,normal) normal

		// Original surface shader snippet:
#line 173 ""
#ifdef DUMMY_PREPROCESSOR_TO_WORK_AROUND_HLSL_COMPILER_LINE_HANDLING
#endif

		// Physically based Standard lighting model, and enable shadows on all light types
		//#pragma surface surf Standard fullforwardshadows vertex:vert alpha:fade finalcolor:WireFinalColor

		// Use shader model 3.0 target, to get nicer looking lighting
		//#pragma target 3.0

//#define CURVEDWORLD_BEND_TYPE_CLASSICRUNNER_X_POSITIVE
//#define CURVEDWORLD_BEND_ID_1
//#pragma shader_feature_local CURVEDWORLD_DISABLED_ON
//#pragma shader_feature_local CURVEDWORLD_NORMAL_TRANSFORMATION_ON
//#include "Assets/Amazing Assets/Curved World/Shaders/Core/CurvedWorldTransform.cginc"


		#pragma shader_feature_local WIREFRAME_LIGHT_ATTENTION_ON
		#ifdef UNITY_PASS_DEFERRED
		#ifndef WIREFRAME_LIGHT_ATTENTION_ON
		#define WIREFRAME_LIGHT_ATTENTION_ON
		#endif
		#endif
		#pragma shader_feature_local WIREFRAME_FRESNEL_ON
		#pragma shader_feature_local WIREFRAME_DISTANCE_FADE_ON
		#pragma shader_feature_local WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON

		#pragma shader_feature_local _ WIREFRAME_DYNAMIC_MASK_PLANE WIREFRAME_DYNAMIC_MASK_SPHERE WIREFRAME_DYNAMIC_MASK_BOX
		
		#pragma shader_feature_local WIREFRAME_NORMALIZE_EDGES_ON
		#pragma shader_feature_local WIREFRAME_TRY_QUAD_ON
		

#define WIREFRAME_PHYSICALLY_BASED
#define WIREFRAME_TRANSPARENT
#define WIREFRAME_NO_COLOR_BLACK
#define WIREFRAME_SAME_COLOR

#include "../cginc/WireframePhysicallyBased.cginc" 


		// vertex-to-fragment interpolation data
		struct v2f_surf {
		float4 pos : SV_POSITION;
		half3 worldNormal : TEXCOORD0;
		float3 worldPos : TEXCOORD1;
		fixed4 color : COLOR0;
		float4 custompack0 : TEXCOORD2; // texcoord
		float4 custompack1 : TEXCOORD3; // texcoord1
		half4 custompack2 : TEXCOORD4; // mass

float3 objectPos : TEXCOORD9;

		UNITY_VERTEX_INPUT_INSTANCE_ID
			UNITY_VERTEX_OUTPUT_STEREO
	};


#include "../cginc/WireframeGeometryShader.cginc"


	// vertex shader
	v2f_surf vert_surf(appdata_full v) {
		v2f_surf o;
		UNITY_INITIALIZE_OUTPUT(v2f_surf,o);
		Input customInputData;
		vert(v, customInputData);
		o.custompack0.xyzw = customInputData.texcoord;
		o.custompack1.xyzw = customInputData.texcoord1;
		o.custompack2.xyzw = customInputData.wireframeShaderTriangleMass;
		o.pos = UnityObjectToClipPos(v.vertex);
		o.objectPos = v.vertex.xyz;

		float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
		fixed3 worldNormal = UnityObjectToWorldNormal(v.normal);
		o.worldPos = worldPos;
		o.worldNormal = worldNormal;
		o.color = v.color;

		return o;
	}



#pragma shader_feature_local _ WIREFRAME_TESSELLATION_DISTANCE_BASED WIREFRAME_TESSELLATION_EDGE_LENGTH
#pragma shader_feature_local WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION
#include "../cginc/WireframeTessellation.cginc"


	// fragment shader
	fixed4 frag_surf(v2f_surf IN) : SV_Target{
		// prepare and unpack data
		Input surfIN;
	UNITY_INITIALIZE_OUTPUT(Input,surfIN);
	surfIN.texcoord.x = 1.0;
	surfIN.texcoord1.x = 1.0;
	surfIN.worldPos.x = 1.0;
	surfIN.wireframeShaderTriangleMass.x = 1.0;
	surfIN.color.x = 1.0;
	surfIN.texcoord = IN.custompack0.xyzw;
	surfIN.texcoord1 = IN.custompack1.xyzw;
	surfIN.wireframeShaderTriangleMass = IN.custompack2.xyzw;
	surfIN.worldPos = IN.worldPos;
	float3 worldPos = IN.worldPos;

#ifndef USING_DIRECTIONAL_LIGHT
	fixed3 lightDir = normalize(UnityWorldSpaceLightDir(worldPos));
#else
	fixed3 lightDir = _WorldSpaceLightPos0.xyz;
#endif
	fixed3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));
	surfIN.worldPos = worldPos;
	surfIN.color = IN.color;
#ifdef UNITY_COMPILER_HLSL
	SurfaceOutputStandard o = (SurfaceOutputStandard)0;
#else
	SurfaceOutputStandard o;
#endif
	o.Albedo = 0.0;
	o.Emission = 0.0;
	o.Alpha = 0.0;
	o.Occlusion = 1.0;
	fixed3 normalWorldVertex = fixed3(0,0,1);
	o.Normal = IN.worldNormal;
	normalWorldVertex = IN.worldNormal;

	// call surface function
	surf(surfIN, o);
	UNITY_LIGHT_ATTENUATION(atten, IN, worldPos)
		fixed4 c = 0;

	// Setup lighting environment
	UnityGI gi;
	UNITY_INITIALIZE_OUTPUT(UnityGI, gi);
	gi.indirect.diffuse = 0;
	gi.indirect.specular = 0;
#if !defined(LIGHTMAP_ON)
	gi.light.color = _LightColor0.rgb;
	gi.light.dir = lightDir;
	gi.light.ndotl = LambertTerm(o.Normal, gi.light.dir);
#endif
	gi.light.color *= atten;
	c += LightingStandard(o, worldViewDir, gi);
	WireFinalColor(surfIN, o, c);
	return c;
	}

		ENDCG

	}



	}

		FallBack "Hidden/Amazing Assets/Wireframe Shader/Vertex Lit/Transparent/Full"
}
