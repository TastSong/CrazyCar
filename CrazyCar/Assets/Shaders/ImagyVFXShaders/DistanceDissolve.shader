Shader "QFX/ImagyVFX/Dissolve/DistanceDissolve"
{
	Properties
	{
		[HDR]_MainColor("MainColor", Color) = (1,1,1,1)
		[HDR]_DissolveColor("Dissolve Color", Color) = (1,1,1,1)
		_MainTex ("Texture", 2D) = "white" {}
		_DissolveTex ("Dissolve Texture", 2D) = "white" {}
		_Dissolve("Dissolve", float) = 0
		_DissolveSize ("Dissolve Size", Range(0.0, 1.0)) = 0.15
		_Position("Position", Float) = (0.0, 0.0, 0.0, 0.0)
	}

	SubShader
	{ 
		Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }
		Blend SrcAlpha OneMinusSrcAlpha
		Cull Off Lighting Off ZWrite Off
		
		Pass
		{
			Blend SrcAlpha One
			Cull Off Lighting Off ZWrite Off

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#include "UnityCG.cginc"
		
			struct appdata
			{
				fixed4 vertex : POSITION;
				fixed4 normal: NORMAL;
				fixed3 uv : TEXCOORD0;
				fixed4 color : COLOR;
			};

			struct v2f
			{
				fixed2 uv : TEXCOORD0;
				fixed4 vertex : SV_POSITION;
				fixed4 color : COLOR;
				fixed4 worldPos : TEXCOORD1;
			};

			sampler2D _MainTex, _DissolveTex, _CameraDepthTexture;
			fixed4 _MainTex_ST, _DissolveTex_ST;
			fixed _Dissolve, _DissolveSize;
			fixed4 _DissolveColor, _MainColor;
 			float3 _Position;

			v2f vert (appdata v)
			{
				v2f o;
				UNITY_INITIALIZE_OUTPUT(v2f, o);
				o.worldPos = mul (unity_ObjectToWorld, v.vertex);
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				o.color = v.color;
				return o;
			}
			
			fixed4 frag (v2f i) : SV_Target
			{
				fixed4 main = tex2D(_MainTex, i.uv);
				half4 dissolveTex = tex2D(_DissolveTex, i.uv);
				fixed4 col = main * _MainColor * i.color;
				float dist = distance(i.worldPos.y, _Position.y);
				
				half dissolve = dissolveTex - _Dissolve;
				dissolve = (1 - dist * dissolve);
				
				clip(dissolve);

 				if(dissolve < _DissolveSize)
   				 	return _DissolveColor * main;

				return col;
			}
			ENDCG
		}
	}
}