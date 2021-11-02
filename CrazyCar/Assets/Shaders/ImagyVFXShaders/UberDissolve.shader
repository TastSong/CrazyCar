Shader "QFX/ImagyVFX/Dissolve/UberDissolve"
{
	Properties
	{
		[HDR]_MainColor("MainColor", Color) = (1,1,1,1)
		[HDR]_DissolveColor("Dissolve Color", Color) = (1,1,1,1)
		_MainTex ("Texture", 2D) = "white" {}
		_DissolveTex ("Dissolve Texture", 2D) = "white" {}
		_Dissolve("Dissolve", float) = 0
		_DissolveSize ("Dissolve Size", Range(0.0, 1.0)) = 0.15
		_VertDeformTex("Vert Deform Texture", 2D) = "white" {}
		_Speed ("Speed", Float) = 0.0
		_Scale ("Scale", Float) = 0.0

		[Toggle(IS_VERTICAL)] 
		_isVertical("Is Vertical", Float) = 1
		[Toggle(IS_RADIAL)] 
		_isRadialDissolve("Is Radial", Float) = 0
	}

	SubShader
	{ 
		Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }
        Blend SrcAlpha OneMinusSrcAlpha
		Cull Off Lighting Off ZWrite Off
		
		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma shader_feature IS_VERTICAL IS_RADIAL

			#include "UnityCG.cginc"

			struct appdata
			{
				fixed4 vertex : POSITION;
				fixed3 normal: NORMAL;
				fixed2 uv : TEXCOORD0;
				fixed2 uvDeform : TEXCOORD1;
				fixed4 color : COLOR;
			};

			struct v2f
			{
				fixed2 uv : TEXCOORD0;
				fixed4 vertex : SV_POSITION;
				fixed4 color : COLOR;
				fixed2 uvDeform : TEXCOORD1;
			};

 			sampler2D _MainTex, _DissolveTex, _VertDeformTex;
			fixed4 _MainTex_ST, _DissolveTex_ST, _VertDeformTex_ST;
			fixed _Dissolve, _DissolveSize;
			fixed4 _DissolveColor, _MainColor;
			half _Speed, _Scale, _isVertical, _isRadialDissolve;

			v2f vert (appdata v)
			{
				v2f o;
			
				UNITY_INITIALIZE_OUTPUT(v2f, o);
			
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				
				half3 norm = mul((half3x3)UNITY_MATRIX_IT_MV, v.normal);

				half2 offset = TransformViewToProjection(norm.xy);
				half z = (_Time.y*_Speed);
				float4 distTex = tex2Dlod(_VertDeformTex, float4(o.uv.x + z, o.uv.y + z, 0, 0));
				o.vertex.xy -=  (distTex * _Scale) * offset;

				o.color = v.color; 
				return o;
			}

			fixed4 frag (v2f i) : SV_Target
			{
				fixed4 main = tex2D(_MainTex, i.uv);
				
				half4 dissolveTex;

				#ifdef IS_VERTICAL
					dissolveTex = tex2D(_DissolveTex, i.uv);
				#elif IS_RADIAL
					float2 tUv = i.uv - 0.5;
					half r = sqrt (tUv.x*tUv.x + tUv.y*tUv.y);
					dissolveTex = tex2D(_DissolveTex, r);
				#endif
				 
				float4 col = main * _MainColor * i.color;

				half dissolve = dissolveTex - _Dissolve;
				
				#ifdef IS_VERTICAL
					dissolve= 1 + sqrt(i.uv.y) * dissolve;
				#elif IS_RADIAL
					dissolve= 1 + 0.5  * dissolve;
				#endif

				clip(dissolve);

 				if(dissolve < _DissolveSize)
   				 	return _DissolveColor * main.a;

				return col;
			}
			ENDCG
		}
	}
}