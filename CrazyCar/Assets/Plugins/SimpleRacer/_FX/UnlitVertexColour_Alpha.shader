Shader "EscPodGames/Unlit Vertex Color_Alpha" 
{

Properties {
    _MainTex ("Base (RGB)", 2D) = "white" {}
}

SubShader 
{
   	   Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" }
	   Lighting Off ZWrite Off Fog { Mode Off }
	   //Blend SrcAlpha OneMinusSrcAlpha

  
	BindChannels {
		Bind "Color", color
		Bind "Vertex", vertex
		Bind "texcoord", texcoord
	}
   
   Pass {
        ColorMaterial AmbientAndDiffuse
        SetTexture [_MainTex] {Combine texture * primary
        }
    }
}
}