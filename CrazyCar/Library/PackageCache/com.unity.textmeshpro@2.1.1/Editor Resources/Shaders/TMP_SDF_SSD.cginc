struct vertex_t
{
    float4	position		: POSITION;
    float3	normal			: NORMAL;
    float4	color			: COLOR;
    float2	texcoord0		: TEXCOORD0;
    float2	texcoord1		: TEXCOORD1;
};

struct pixel_t
{
    float4	position		: SV_POSITION;
    float4	faceColor		: COLOR;
    float4	outlineColor	: COLOR1;
    float2	texcoord0		: TEXCOORD0;
    float4	param			: TEXCOORD1;		// weight, scaleRatio
    float2	clipUV			: TEXCOORD2;
    #if (UNDERLAY_ON || UNDERLAY_INNER)
    float4	texcoord2		: TEXCOORD3;
    float4	underlayColor	: COLOR2;
    #endif
};

sampler2D _GUIClipTexture;
uniform float4x4 unity_GUIClipTextureMatrix;
float4 _MainTex_TexelSize;

float4 SRGBToLinear(float4 rgba)
{
    return float4(lerp(rgba.rgb / 12.92f, pow((rgba.rgb + 0.055f) / 1.055f, 2.4f), step(0.04045f, rgba.rgb)), rgba.a);
}

pixel_t VertShader(vertex_t input)
{
    pixel_t output;

    float bold = step(input.texcoord1.y, 0);

    float4 vert = input.position;
    vert.x += _VertexOffsetX;
    vert.y += _VertexOffsetY;

    float4 vPosition = UnityObjectToClipPos(vert);

    float weight = lerp(_WeightNormal, _WeightBold, bold) / 4.0;
    weight = (weight + _FaceDilate) * _ScaleRatioA * 0.5;

    // Generate UV for the Clip Texture
    float3 eyePos = UnityObjectToViewPos(input.position);
    float2 clipUV = mul(unity_GUIClipTextureMatrix, float4(eyePos.xy, 0, 1.0));

    float4 color = input.color;
    #if (FORCE_LINEAR && !UNITY_COLORSPACE_GAMMA)
    color = SRGBToLinear(input.color);
    #endif

    float opacity = color.a;
    #if (UNDERLAY_ON | UNDERLAY_INNER)
    opacity = 1.0;
    #endif

    float4 faceColor = float4(color.rgb, opacity) * _FaceColor;
    faceColor.rgb *= faceColor.a;

    float4 outlineColor = _OutlineColor;
    outlineColor.a *= opacity;
    outlineColor.rgb *= outlineColor.a;

    output.position = vPosition;
    output.faceColor = faceColor;
    output.outlineColor = outlineColor;
    output.texcoord0 = float2(input.texcoord0.xy);
    output.param = float4(0.5 - weight, 1.3333 * _GradientScale * (_Sharpness + 1) / _MainTex_TexelSize.z , _OutlineWidth * _ScaleRatioA * 0.5, 0);
    output.clipUV = clipUV;

    #if (UNDERLAY_ON || UNDERLAY_INNER)
    float4 underlayColor = _UnderlayColor;
    underlayColor.rgb *= underlayColor.a;

    float x = -(_UnderlayOffsetX * _ScaleRatioC) * _GradientScale / _MainTex_TexelSize.z;
    float y = -(_UnderlayOffsetY * _ScaleRatioC) * _GradientScale / _MainTex_TexelSize.w;

    output.texcoord2 = float4(input.texcoord0 + float2(x, y), input.color.a, 0);
    output.underlayColor = underlayColor;
    #endif

    return output;
}

float4 PixShader(pixel_t input) : SV_Target
{
    float d = tex2D(_MainTex, input.texcoord0.xy).a;

    float2 UV = input.texcoord0.xy;
    float scale = rsqrt(abs(ddx(UV.x) * ddy(UV.y) - ddy(UV.x) * ddx(UV.y))) * input.param.y;

    #if (UNDERLAY_ON | UNDERLAY_INNER)
    float layerScale = scale;
    layerScale /= 1 + ((_UnderlaySoftness * _ScaleRatioC) * layerScale);
    float layerBias = input.param.x * layerScale - .5 - ((_UnderlayDilate * _ScaleRatioC) * .5 * layerScale);
    #endif

    scale /= 1 + (_OutlineSoftness * _ScaleRatioA * scale);

    float4 faceColor = input.faceColor * saturate((d - input.param.x) * scale + 0.5);

    #ifdef OUTLINE_ON
    float4 outlineColor = lerp(input.faceColor, input.outlineColor, sqrt(min(1.0, input.param.z * scale * 2)));
    faceColor = lerp(outlineColor, input.faceColor, saturate((d - input.param.x - input.param.z) * scale + 0.5));
    faceColor *= saturate((d - input.param.x + input.param.z) * scale + 0.5);
    #endif

    #if UNDERLAY_ON
    d = tex2D(_MainTex, input.texcoord2.xy).a * layerScale;
    faceColor += float4(_UnderlayColor.rgb * _UnderlayColor.a, _UnderlayColor.a) * saturate(d - layerBias) * (1 - faceColor.a);
    #endif

    #if UNDERLAY_INNER
    float bias = input.param.x * scale - 0.5;
    float sd = saturate(d * scale - bias - input.param.z);
    d = tex2D(_MainTex, input.texcoord2.xy).a * layerScale;
    faceColor += float4(_UnderlayColor.rgb * _UnderlayColor.a, _UnderlayColor.a) * (1 - saturate(d - layerBias)) * sd * (1 - faceColor.a);
    #endif

    #if (UNDERLAY_ON | UNDERLAY_INNER)
    faceColor *= input.texcoord2.z;
    #endif

    faceColor *= tex2D(_GUIClipTexture, input.clipUV).a;

    return faceColor;
}
