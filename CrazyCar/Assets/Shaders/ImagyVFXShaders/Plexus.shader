// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "QFX/ImagyVFX/Plexus" {
	Properties{
		[HDR]_TintColorPlexus("Tint Color Plexus", Color) = (0.5,0.5,0.5,0.5)
		[HDR]_TintColorLines("Tint Color Lines", Color) = (0.5,0.5,0.5,0.5)
		[HDR]_Mixing("Mixing Color", Color) = (0.5,0.5,0.5,0.5)
		_MainTex("Plexus Texture", 2D) = "white" {}
		_LinesTex("Lines Texture", 2D) = "white" {}
		_POW("Texture POW scale", Float) = 1.0
		_InvFade("Soft Particles Factor", Float) = 1.0
	}

		Category{
			Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }
			Blend SrcAlpha One
			ColorMask RGB
			Cull Off Lighting Off ZWrite Off

			SubShader {
				Pass {

					CGPROGRAM
					#pragma vertex vert
					#pragma fragment frag
					#pragma multi_compile_particles
					#pragma multi_compile_fog

					#include "UnityCG.cginc"

					sampler2D _MainTex;
					sampler2D _LinesTex;
					fixed4 _TintColorPlexus;
					fixed4 _TintColorLines;
					fixed4 _Mixing;
					float _POW;

					struct appdata_t {
						float4 vertex : POSITION;
						fixed4 color : COLOR;
						float depth : TEXCOORD1;
						float2 texcoord : TEXCOORD0;
					};

					struct v2f {
						float4 vertex : SV_POSITION;
						fixed4 color : COLOR;
						float2 texcoord : TEXCOORD0;
						float depth : TEXCOORD1;
						UNITY_FOG_COORDS(3)
						#ifdef SOFTPARTICLES_ON
						float4 projPos : TEXCOORD2;
						#endif
					};

					float4 _MainTex_ST;

					v2f vert(appdata_t v)
					{
						v2f o;
						o.vertex = UnityObjectToClipPos(v.vertex);
						#ifdef SOFTPARTICLES_ON
						o.projPos = ComputeScreenPos(o.vertex);
						COMPUTE_EYEDEPTH(o.projPos.z);
						#endif
						o.color = v.color;
						o.depth = mul(UNITY_MATRIX_IT_MV, v.vertex).z;
						o.texcoord = TRANSFORM_TEX(v.texcoord,_MainTex);
						UNITY_TRANSFER_FOG(o,o.vertex);

   					    return o;
					}

					sampler2D_float _CameraDepthTexture;
					float _InvFade;

					float4 frag(v2f i) : SV_Target
					{
						#ifdef SOFTPARTICLES_ON
						float sceneZ = LinearEyeDepth(SAMPLE_DEPTH_TEXTURE_PROJ(_CameraDepthTexture, UNITY_PROJ_COORD(i.projPos)));
						float partZ = i.projPos.z;
						float fade = saturate(_InvFade * (sceneZ - partZ));
						i.color.a *= fade;
						#endif
						float4 tex = tex2D(_MainTex, i.texcoord);
						tex = pow(tex,_POW);
						float4 col = i.color * _TintColorPlexus * tex;
						UNITY_APPLY_FOG_COLOR(i.fogCoord, col, fixed4(0,0,0,0));
						col.a = saturate(col.a);

						float4 linesTex = tex2D(_LinesTex, i.texcoord);
						float4 linesCol = i.color * _TintColorLines * linesTex;

						float4 mixed = col + linesCol;

						mixed = mixed * i.depth * _Mixing;

						return mixed;
					}
	    			ENDCG
				}
	  		}
		}
}