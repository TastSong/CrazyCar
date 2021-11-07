#ifndef WIREFRAME_TESSELLATION_CGINC
#define WIREFRAME_TESSELLATION_CGINC

#include "UnityCG.cginc"
#include "Tessellation.cginc"

float _Wireframe_Tessellation;
#ifdef WIREFRAME_TESSELLATION_DISTANCE_BASED
	float _Wireframe_Tessellation_MinDistance;
	float _Wireframe_Tessellation_MaxDistance;
#endif
#ifdef WIREFRAME_TESSELLATION_EDGE_LENGTH
	float _Wireframe_Tessellation_EdgeLength;
#endif


sampler2D _Wireframe_Tessellation_DispTex;
float4 _Wireframe_Tessellation_DispTex_TexelSize;
float4 _Wireframe_Tessellation_DispTex_ST;
float2 _Wireframe_Tessellation_DispTex_Scroll;
float _Wireframe_Tessellation_DispStrength;


inline void TransformNormal(inout float4 vertex, inout float3 normal, float4 tangent, float2 texcoord)
{
	float3 v0 = vertex.xyz;
	float3 v1 = v0 + tangent;
	float3 v2 = v0 + cross(normal, tangent) * -1;


	float2 uv = texcoord * _Wireframe_Tessellation_DispTex_ST.xy + _Wireframe_Tessellation_DispTex_ST.zw + _Wireframe_Tessellation_DispTex_Scroll * _Time.x;
	float d = tex2Dlod(_Wireframe_Tessellation_DispTex, float4(uv, 0, 0)).r * _Wireframe_Tessellation_DispStrength;
	v0 += normal * d;

	uv = saturate(texcoord + float2(_Wireframe_Tessellation_DispTex_TexelSize.x * 5, 0)) * _Wireframe_Tessellation_DispTex_ST.xy + _Wireframe_Tessellation_DispTex_ST.zw + _Wireframe_Tessellation_DispTex_Scroll * _Time.x;
	d = tex2Dlod(_Wireframe_Tessellation_DispTex, float4(uv, 0, 0)).r * _Wireframe_Tessellation_DispStrength;
	v1 += normal * d;

	uv = saturate(texcoord + float2(0, _Wireframe_Tessellation_DispTex_TexelSize.y * 5)) * _Wireframe_Tessellation_DispTex_ST.xy + _Wireframe_Tessellation_DispTex_ST.zw + _Wireframe_Tessellation_DispTex_Scroll * _Time.x;
	d = tex2Dlod(_Wireframe_Tessellation_DispTex, float4(uv, 0, 0)).r * _Wireframe_Tessellation_DispStrength;
	v2 += normal * d;


	vertex.xyz = v0;
	normal = normalize(cross(v2 - v0, v1 - v0));
}


#ifdef UNITY_CAN_COMPILE_TESSELLATION

// tessellation vertex shader
struct InternalTessInterp_appdata 
{
  float4 vertex : INTERNALTESSPOS;
  float4 tangent : TANGENT;
  float3 normal : NORMAL;

  float4 texcoord : TEXCOORD0;
  float4 texcoord1 : TEXCOORD1;
  float4 texcoord2 : TEXCOORD2;
  float4 texcoord3 : TEXCOORD3;

  float4 color : COLOR;
};
InternalTessInterp_appdata tessvert_surf (appdata_full v) 
{
  InternalTessInterp_appdata o;
  o.vertex = v.vertex;
  o.tangent = v.tangent;
  o.normal = v.normal;

  o.texcoord = v.texcoord;
  o.texcoord1 = v.texcoord1;
  o.texcoord2 = v.texcoord2;
  o.texcoord3 = v.texcoord3;

  o.color = v.color;
  return o; 
}

// tessellation hull constant shader
UnityTessellationFactors hsconst_surf (InputPatch<InternalTessInterp_appdata,3> v) {
  UnityTessellationFactors o;
  float4 tf;

 
#if defined(WIREFRAME_TESSELLATION_DISTANCE_BASED) || defined(WIREFRAME_TESSELLATION_EDGE_LENGTH)
	appdata_full vi[3];
	vi[0].vertex = v[0].vertex;
	vi[0].tangent = v[0].tangent;
	vi[0].normal = v[0].normal;
	vi[0].texcoord = v[0].texcoord;

	vi[1].vertex = v[1].vertex;
	vi[1].tangent = v[1].tangent;
	vi[1].normal = v[1].normal;
	vi[1].texcoord = v[1].texcoord;

	vi[2].vertex = v[2].vertex;
	vi[2].tangent = v[2].tangent;
	vi[2].normal = v[2].normal;
	vi[2].texcoord = v[2].texcoord;

	#ifdef WIREFRAME_TESSELLATION_DISTANCE_BASED
	  tf = UnityDistanceBasedTess(vi[0].vertex, vi[1].vertex, vi[2].vertex, _Wireframe_Tessellation_MinDistance, _Wireframe_Tessellation_MaxDistance, _Wireframe_Tessellation);
	#else
	  tf = UnityEdgeLengthBasedTess(vi[0].vertex, vi[1].vertex, vi[2].vertex, _Wireframe_Tessellation_EdgeLength);
	#endif

	o.edge[0] = tf.x; o.edge[1] = tf.y; o.edge[2] = tf.z; o.inside = tf.w;

#else
  tf = _Wireframe_Tessellation;
#endif



  o.edge[0] = tf.x; o.edge[1] = tf.y; o.edge[2] = tf.z; o.inside = tf.w;
  return o;
}

// tessellation hull shader
[UNITY_domain("tri")]
[UNITY_partitioning("fractional_odd")]
[UNITY_outputtopology("triangle_cw")]
[UNITY_patchconstantfunc("hsconst_surf")]
[UNITY_outputcontrolpoints(3)]
InternalTessInterp_appdata hs_surf (InputPatch<InternalTessInterp_appdata,3> v, uint id : SV_OutputControlPointID) {
  return v[id];
}


// tessellation domain shader 
[UNITY_domain("tri")]
v2f_surf ds_surf(UnityTessellationFactors tessFactors, const OutputPatch<InternalTessInterp_appdata, 3> vi, float3 bary : SV_DomainLocation) {
	appdata_full v = (appdata_full)0;

	v.vertex = vi[0].vertex*bary.x + vi[1].vertex*bary.y + vi[2].vertex*bary.z;
	v.tangent = vi[0].tangent*bary.x + vi[1].tangent*bary.y + vi[2].tangent*bary.z;
	v.normal = vi[0].normal*bary.x + vi[1].normal*bary.y + vi[2].normal*bary.z;

	v.texcoord = vi[0].texcoord*bary.x + vi[1].texcoord*bary.y + vi[2].texcoord*bary.z;
	v.texcoord1 = vi[0].texcoord1*bary.x + vi[1].texcoord1*bary.y + vi[2].texcoord1*bary.z;
	v.texcoord2 = vi[0].texcoord2*bary.x + vi[1].texcoord2*bary.y + vi[2].texcoord2*bary.z;
	v.texcoord3 = vi[0].texcoord3*bary.x + vi[1].texcoord3*bary.y + vi[2].texcoord3*bary.z;

	v.color = vi[0].color*bary.x + vi[1].color*bary.y + vi[2].color*bary.z;


	
	//Displace
#if defined(WIREFRAME_TESSELLATION_NORMAL_RECONSTRUCTION) && !defined(WIREFRAME_ADDATIVE) && !defined(WIREFRAME_MULTIPLY)
	TransformNormal(v.vertex, v.normal, v.tangent, v.texcoord.xy);
#else
	float2 uv = v.texcoord.xy * _Wireframe_Tessellation_DispTex_ST.xy + _Wireframe_Tessellation_DispTex_ST.zw + _Wireframe_Tessellation_DispTex_Scroll * _Time.x;
	float d = tex2Dlod(_Wireframe_Tessellation_DispTex, float4(uv, 0, 0)).r * _Wireframe_Tessellation_DispStrength;
	v.vertex.xyz += v.normal * d;
#endif


	v2f_surf o = vert_surf(v);
	return o;
}

#endif // UNITY_CAN_COMPILE_TESSELLATION


#endif
