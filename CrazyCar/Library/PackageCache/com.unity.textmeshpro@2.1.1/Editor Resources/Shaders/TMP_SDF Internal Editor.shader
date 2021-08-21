// Simplified SDF shader:
// - No Shading Option (bevel / bump / env map)
// - No Glow Option
// - Softness is applied on both side of the outline

Shader "Hidden/TMP/Internal/Editor/Distance Field SSD" {

    Properties{
        _FaceColor("Face Color", Color) = (1,1,1,1)
        _FaceDilate("Face Dilate", Range(-1,1)) = 0

        _OutlineColor("Outline Color", Color) = (0,0,0,1)
        _OutlineWidth("Outline Thickness", Range(0,1)) = 0
        _OutlineSoftness("Outline Softness", Range(0,1)) = 0

        _UnderlayColor("Border Color", Color) = (0,0,0,.5)
        _UnderlayOffsetX("Border OffsetX", Range(-1,1)) = 0
        _UnderlayOffsetY("Border OffsetY", Range(-1,1)) = 0
        _UnderlayDilate("Border Dilate", Range(-1,1)) = 0
        _UnderlaySoftness("Border Softness", Range(0,1)) = 0

        _WeightNormal("Weight Normal", float) = 0
        _WeightBold("Weight Bold", float) = .5

        _ShaderFlags("Flags", float) = 0
        _ScaleRatioA("Scale RatioA", float) = 1
        _ScaleRatioB("Scale RatioB", float) = 1
        _ScaleRatioC("Scale RatioC", float) = 1

        _MainTex("Font Atlas", 2D) = "white" {}
        _TextureWidth("Texture Width", float) = 1024
        _TextureHeight("Texture Height", float) = 1024
        _GradientScale("Gradient Scale", float) = 1
        _ScaleX("Scale X", float) = 1
        _ScaleY("Scale Y", float) = 1
        _PerspectiveFilter("Perspective Correction", Range(0, 1)) = 0.875
        _Sharpness("Sharpness", Range(-1,1)) = 0

        _VertexOffsetX("Vertex OffsetX", float) = 0
        _VertexOffsetY("Vertex OffsetY", float) = 0
    }

        SubShader
        {
            Tags
            {
                "ForceSupported" = "True"
            }

            Lighting Off
            Blend One OneMinusSrcAlpha
            Cull Off
            ZWrite Off
            ZTest Always

            Pass
            {
                CGPROGRAM
                #pragma vertex VertShader
                #pragma fragment PixShader
                #pragma shader_feature __ OUTLINE_ON
                #pragma shader_feature __ UNDERLAY_ON UNDERLAY_INNER

                #include "UnityCG.cginc"
                #include "UnityUI.cginc"
                #include "TMP_Properties.cginc"

                #include "TMP_SDF_SSD.cginc"

                ENDCG
            }
        }

        CustomEditor "TMPro.EditorUtilities.TMP_SDFShaderGUI"
}
