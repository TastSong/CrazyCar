// Upgrade NOTE: replaced '_Projector' with 'unity_Projector'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Indicators/FillRadialDistort" {
  Properties {
    _MainColor ("Main Color", Color) = (1,1,1,1)
    _FillColor ("Fill Color", Color) = (1,1,1,1)
    _MainTex ("Shape", 2D) = "" {}    
    _DistortTex ("Distort Texture", 2D) = "" {}
    _Fill ("Fill", Range (0,1)) = 0
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

      #pragma vertex vert
      #pragma fragment frag
      #pragma multi_compile_fog

      #include "UnityCG.cginc"

      #define PI 3.1415926

      fixed _Distort;
      fixed _Offset;
      fixed _Fill;
      fixed4 _MainColor; 
      fixed4 _FillColor;      
      fixed4 _MainTex_ST;
      fixed4 _DistortTex_ST;
      float4x4 unity_Projector;
      sampler2D _MainTex;
      sampler2D _DistortTex;

      fixed gt_than(float x, float y) {
        return max(sign(x - y), 0);
      }

      fixed ls_than(float x, float y) {
        return max(sign(y - x), 0);
      }

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

        fixed4 center = fixed4(0.5, 0.5, i.uvMain.z, i.uvMain.w);
        fixed4 up = fixed4(0.5, 1.0, i.uvMain.z, i.uvMain.w) - center;
        fixed4 current = i.uvMain - center;
        float currentAngle = acos(dot(up, current) / (length(up) * length(current))) * (180 / PI);
        float FillAngle = _Fill * 360;
      
        fixed4 main = tex2Dproj(_MainTex, UNITY_PROJ_COORD(i.uvMain));
        fixed4 fill = tex2Dproj(_MainTex, UNITY_PROJ_COORD(i.uvMain));

        main *= _MainColor;
        fill *= _FillColor;

        fixed fillBlit = 0;
        fillBlit += gt_than(i.uvMain.x, 0.5) * gt_than(FillAngle, currentAngle);
        fillBlit += ls_than(i.uvMain.x, 0.5) * ls_than(360 - FillAngle, currentAngle);
        fixed mainBlit = -(sign(fillBlit) - 1);

        // FILL
        fixed4 blit = fixed4(0, 0, 0, 0);
        blit += main * fixed4(mainBlit, mainBlit, mainBlit, mainBlit);
        blit += fill * fixed4(fillBlit, fillBlit, fillBlit, fillBlit);

        // BLUR
        fixed4 res = fixed4(0,0,0,0);
        float remaining = 1.0f;
        float coef = 1.0;
        float blur = _Distort * distort.a;

        for (int j = 0; j < 3; j++) {
          coef*=0.7;
          res += tex2Dproj(_MainTex, fixed4(i.uvMain.x, i.uvMain.y + j * blur, i.uvMain.z, i.uvMain.w)) * coef * blit;
          res += tex2Dproj(_MainTex, fixed4(i.uvMain.x + j * blur, i.uvMain.y, i.uvMain.z, i.uvMain.w)) * coef * blit;
          res += tex2Dproj(_MainTex, fixed4(i.uvMain.x, i.uvMain.y - j * blur, i.uvMain.z, i.uvMain.w)) * coef * blit;
          res += tex2Dproj(_MainTex, fixed4(i.uvMain.x - j * blur, i.uvMain.y, i.uvMain.z, i.uvMain.w)) * coef * blit;
          remaining-=2*coef;
        }
        res += tex2Dproj(_MainTex, UNITY_PROJ_COORD(i.uvMain)) * remaining * blit;
        // END BLUR

        UNITY_APPLY_FOG_COLOR(i.fogCoord, res, fixed4(0,0,0,0));

        return res;
      }
      ENDCG
    }
  }
}
