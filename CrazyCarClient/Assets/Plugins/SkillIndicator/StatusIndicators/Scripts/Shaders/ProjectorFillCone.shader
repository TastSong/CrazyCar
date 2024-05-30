// Upgrade NOTE: replaced '_Projector' with 'unity_Projector'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Indicators/FillCone" {
  Properties {
    _MainColor ("Main Color", Color) = (1,1,1,1)
    _FillColor ("Fill Color", Color) = (1,1,1,1)
    _ProjectTex ("Shape", 2D) = "" {}    
    _Expand ("Expand", Range (0,1)) = 0
    _Fill ("Fill", Range (0,1)) = 0
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

      fixed _Expand;
      fixed _Fill;
      fixed4 _MainColor;      
      fixed4 _FillColor;      
      fixed4 _MainTex_ST;
      float4x4 unity_Projector;
      sampler2D _ProjectTex;

      fixed gt_than(float x, float y) {
        return max(sign(x - y), 0);
      }

      fixed ls_than(float x, float y) {
        return max(sign(y - x), 0);
      }
      
      fixed dist(fixed2 from, fixed2 to)
      {
        return sqrt((to.x - from.x) * (to.x - from.x) + (to.y - from.y) * (to.y - from.y));
      }

      struct vInput {
        float4 vertex : POSITION;
        fixed2 texcoord : TEXCOORD0;        
      };

      struct vOutput {
        float4 uvMain : TEXCOORD0;

        UNITY_FOG_COORDS(2)
        float4 pos : SV_POSITION;
      };

      vOutput vert (vInput v)
      {
        vOutput o;
        o.pos = UnityObjectToClipPos(v.vertex);
        o.uvMain = mul(unity_Projector, v.vertex);        

        UNITY_TRANSFER_FOG(o,o.pos);
        return o;
      }

      fixed4 frag (vOutput i) : SV_Target
      {
        fixed4 center = fixed4(0.5, 0.5, i.uvMain.z, i.uvMain.w);
        fixed4 up = fixed4(0.5, 1.0, i.uvMain.z, i.uvMain.w) - center;
        fixed4 current = i.uvMain - center;
        float currentAngle = acos(dot(up, current) / (length(up) * length(current))) * (180 / PI);
        float expandAngle = _Expand * 180;

        fixed4 main = tex2Dproj(_ProjectTex, UNITY_PROJ_COORD(i.uvMain));
        fixed4 fill = tex2Dproj(_ProjectTex, UNITY_PROJ_COORD(i.uvMain));
       
        main *= _MainColor;
        fill *= _FillColor;

        fixed visBlit = 0;
        visBlit += gt_than(expandAngle, currentAngle);
        
        fixed mainBlit = gt_than(dist(center, i.uvMain.xy), _Fill * 0.5);
        fixed fillBlit = ls_than(dist(center, i.uvMain.xy), _Fill * 0.5);
        
        fixed4 res = fixed4(0, 0, 0, 0);
        res += main * fixed4(mainBlit, mainBlit, mainBlit, mainBlit);
        res += fill * fixed4(fillBlit, fillBlit, fillBlit, fillBlit);
        res *= fixed4(visBlit, visBlit, visBlit, visBlit);

        UNITY_APPLY_FOG_COLOR(i.fogCoord, res, fixed4(0,0,0,0));

        return res;
      }
      ENDCG
    }
  }
}
