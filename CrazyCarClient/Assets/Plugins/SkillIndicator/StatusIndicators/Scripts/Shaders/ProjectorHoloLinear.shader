// Upgrade NOTE: replaced '_Projector' with 'unity_Projector'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Indicators/HoloLinear" {
  Properties {
    _MainColor ("Main Color", Color) = (1,1,1,1)
    _SecondaryColor ("Secondary Color", Color) = (1,1,1,1)
    _MainTex ("Shape", 2D) = "" {}    
    _DistortTex ("Distort", 2D) = "" {}
    _OffsetX ("Offset X", Range (-1,1)) = 0
    _OffsetY ("Offset Y", Range (-1,1)) = 0
    _DistortX ("Distort X", Range (-1,1)) = 0
    _DistortY ("Distort Y", Range (-1,1)) = 0
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
  
      fixed _OffsetX;
      fixed _OffsetY;
      fixed _DistortX;
      fixed _DistortY;
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
        float4 uvMain : TEXCOORD0;
        float4 uvDistort : TEXCOORD1;
        UNITY_FOG_COORDS(2)
        float4 pos : SV_POSITION;
      };

      vOutput vert (vInput v)
      {
        vOutput o;
        o.pos = UnityObjectToClipPos(v.vertex);
        o.uvMain = mul(unity_Projector, v.vertex);
        o.uvDistort = mul(unity_Projector, v.vertex);

        o.uvDistort.x += _OffsetX;
        o.uvDistort.y += _OffsetY;

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
        float xBlur = _DistortX * (distort.a * distort.a * 2);
        float yBlur = _DistortY * (distort.a * distort.a * 2);

        fixed4 primary = _MainColor * fixed4(distort.a, distort.a, distort.a, distort.a);
        fixed4 secondary = _SecondaryColor * fixed4(1.0 - distort.a, 1.0 - distort.a, 1.0 - distort.a, 1.0 - distort.a);
        fixed4 col = (primary * primary.a) + (secondary * secondary.a);

        for (int j = 0; j < 6; j++) {
          coef*=0.6;
          res += tex2Dproj(_MainTex, fixed4(i.uvMain.x, i.uvMain.y + j * yBlur, i.uvMain.z, i.uvMain.w)) * coef * col;
          res += tex2Dproj(_MainTex, fixed4(i.uvMain.x + j * xBlur, i.uvMain.y, i.uvMain.z, i.uvMain.w)) * coef * col;
          res += tex2Dproj(_MainTex, fixed4(i.uvMain.x, i.uvMain.y - j * yBlur, i.uvMain.z, i.uvMain.w)) * coef * col;
          res += tex2Dproj(_MainTex, fixed4(i.uvMain.x - j * xBlur, i.uvMain.y, i.uvMain.z, i.uvMain.w)) * coef * col;
          remaining-=2*coef;
        }
        res += tex2Dproj(_MainTex, UNITY_PROJ_COORD(i.uvMain)) * remaining;
        // END BLUR

        UNITY_APPLY_FOG_COLOR(i.fogCoord, res, fixed4(0,0,0,0));

        return res;
      }
      ENDCG
    }
  }
}
