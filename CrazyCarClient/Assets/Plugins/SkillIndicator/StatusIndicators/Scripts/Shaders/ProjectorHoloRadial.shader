// Upgrade NOTE: replaced '_Projector' with 'unity_Projector'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Indicators/HoloRadial" {
  Properties {
    _MainColor ("Main Color", Color) = (1,1,1,1)
    _SecondaryColor ("Secondary Color", Color) = (1,1,1,1)
    _MainTex ("Shape", 2D) = "" {}    
    _DistortTex ("Distort Texture", 2D) = "" {}
    _Offset("Offset", Range (-1, 1)) = 0
    _Distort ("Distort", Range (-1, 1)) = 0
  }
  
  Subshader {
    Tags {"Queue"="Transparent"}
    Pass {
      ZWrite Off
      AlphaTest Greater 0
      ColorMask RGB
      Blend SrcAlpha OneMinusSrcAlpha
      Offset -1, -1
  
      CGPROGRAM

      #pragma target 3.0
      #pragma vertex vert
      #pragma fragment frag
      #pragma multi_compile_fog

      #include "UnityCG.cginc"

      #define PI 3.1415926

      fixed _Distort;
      fixed _Offset;
      fixed4 _MainColor;
      fixed4 _SecondaryColor;            
      fixed4 _MainTex_ST;
      fixed4 _DistortTex_ST;
      float4x4 unity_Projector;
      sampler2D _MainTex;
      sampler2D _DistortTex;

      struct vInput {
        float4 vertex : POSITION;
        fixed2 texcoord : TEXCOORD0;        
      };

      struct vOutput {
        float4 uvTexture : TEXCOORD0;
        float4 uvDistort : TEXCOORD1;
        UNITY_FOG_COORDS(2)
        float4 pos : SV_POSITION;
      };

      vOutput vert (vInput v)
      {
        vOutput o;
        o.pos = UnityObjectToClipPos(v.vertex);
        o.uvTexture = mul(unity_Projector, v.vertex);
        o.uvDistort = mul(unity_Projector, v.vertex);

        float sinX = sin(_Offset * PI * 2);
        float cosX = cos(_Offset * PI * 2);
        float sinY = sin(_Offset * PI * 2);

        float2 origin = fixed2(0.5, 0.5);

        float2x2 rotationMatrix = float2x2(cosX, -sinX, sinY, cosX);

        o.uvDistort.xy -= origin;
        o.uvDistort.xy = mul(o.uvDistort.xy, rotationMatrix);
        o.uvDistort.xy += origin;

        UNITY_TRANSFER_FOG(o,o.pos);
        return o;
      }

      fixed4 frag (vOutput i) : SV_Target
      {
        fixed4 distort = tex2Dproj(_DistortTex, UNITY_PROJ_COORD(i.uvDistort));

        // BLUR
        fixed4 res = fixed4(0,0,0,0);
        float remaining = 1.0f;
        float coef = 1.0;
        float blur = _Distort * (distort.a * distort.a * 2);

        fixed4 primary = _MainColor * fixed4(distort.a, distort.a, distort.a, distort.a);
        fixed4 secondary = _SecondaryColor * fixed4(1.0 - distort.a, 1.0 - distort.a, 1.0 - distort.a, 1.0 - distort.a);
        fixed4 col = (primary * primary.a) + (secondary * secondary.a);

        for (int j = 0; j < 6; j++) {
          coef*=0.6;
          res += tex2Dproj(_MainTex, fixed4(i.uvTexture.x, i.uvTexture.y + j * blur, i.uvTexture.z, i.uvTexture.w)) * coef * col;
          res += tex2Dproj(_MainTex, fixed4(i.uvTexture.x + j * blur, i.uvTexture.y, i.uvTexture.z, i.uvTexture.w)) * coef * col;
          res += tex2Dproj(_MainTex, fixed4(i.uvTexture.x, i.uvTexture.y - j * blur, i.uvTexture.z, i.uvTexture.w)) * coef * col;
          res += tex2Dproj(_MainTex, fixed4(i.uvTexture.x - j * blur, i.uvTexture.y, i.uvTexture.z, i.uvTexture.w)) * coef * col;
          remaining-=2*coef;
        }
        res += tex2Dproj(_MainTex, UNITY_PROJ_COORD(i.uvTexture)) * remaining;
        // END BLUR

        UNITY_APPLY_FOG_COLOR(i.fogCoord, res, fixed4(0,0,0,0));

        return res;
      }
      ENDCG
    }
  }
}
