// Upgrade NOTE: replaced '_Projector' with 'unity_Projector'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Indicators/FillLinear" {
  Properties {
    _MainColor ("Main Color", Color) = (1,1,1,1)
    _FillColor ("Fill Color", Color) = (1,1,1,1)
    _ProjectTex ("Shape", 2D) = "" {}    
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
  
      fixed _Fill;
      fixed4 _MainColor;      
      fixed4 _FillColor;      
      fixed4 _MainTex_ST;
      float4x4 unity_Projector;
      sampler2D _ProjectTex;

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
        fixed4 main = tex2Dproj(_ProjectTex, UNITY_PROJ_COORD(i.uvMain));
        fixed4 fill = tex2Dproj(_ProjectTex, UNITY_PROJ_COORD(i.uvMain));

        main *= _MainColor;
        fill *= _FillColor;

        fixed mainBlit = max(0, sign(i.uvMain.y - _Fill));
        fixed fillBlit = max(0, sign(_Fill - i.uvMain.y));

        fixed4 res = fixed4(0, 0, 0, 0);
        res += main * fixed4(mainBlit, mainBlit, mainBlit, mainBlit);
        res += fill * fixed4(fillBlit, fillBlit, fillBlit, fillBlit);

        UNITY_APPLY_FOG_COLOR(i.fogCoord, res, fixed4(0,0,0,0));

        return res;
      }
      ENDCG
    }
  }
}
