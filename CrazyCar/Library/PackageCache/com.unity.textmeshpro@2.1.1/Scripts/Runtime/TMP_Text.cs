#define TMP_PRESENT

using UnityEngine;
using UnityEngine.TextCore;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;


namespace TMPro
{
    public interface ITextElement
    {
        Material sharedMaterial { get; }

        void Rebuild(CanvasUpdate update);
        int GetInstanceID();
    }

    public enum TextAlignmentOptions
    {
        TopLeft = HorizontalAlignmentOptions.Left | VerticalAlignmentOptions.Top,
        Top = HorizontalAlignmentOptions.Center | VerticalAlignmentOptions.Top,
        TopRight = HorizontalAlignmentOptions.Right | VerticalAlignmentOptions.Top,
        TopJustified = HorizontalAlignmentOptions.Justified | VerticalAlignmentOptions.Top,
        TopFlush = HorizontalAlignmentOptions.Flush | VerticalAlignmentOptions.Top,
        TopGeoAligned = HorizontalAlignmentOptions.Geometry | VerticalAlignmentOptions.Top,

        Left = HorizontalAlignmentOptions.Left | VerticalAlignmentOptions.Middle,
        Center = HorizontalAlignmentOptions.Center | VerticalAlignmentOptions.Middle,
        Right = HorizontalAlignmentOptions.Right | VerticalAlignmentOptions.Middle,
        Justified = HorizontalAlignmentOptions.Justified | VerticalAlignmentOptions.Middle,
        Flush = HorizontalAlignmentOptions.Flush | VerticalAlignmentOptions.Middle,
        CenterGeoAligned = HorizontalAlignmentOptions.Geometry | VerticalAlignmentOptions.Middle,

        BottomLeft = HorizontalAlignmentOptions.Left | VerticalAlignmentOptions.Bottom,
        Bottom = HorizontalAlignmentOptions.Center | VerticalAlignmentOptions.Bottom,
        BottomRight = HorizontalAlignmentOptions.Right | VerticalAlignmentOptions.Bottom,
        BottomJustified = HorizontalAlignmentOptions.Justified | VerticalAlignmentOptions.Bottom,
        BottomFlush = HorizontalAlignmentOptions.Flush | VerticalAlignmentOptions.Bottom,
        BottomGeoAligned = HorizontalAlignmentOptions.Geometry | VerticalAlignmentOptions.Bottom,

        BaselineLeft = HorizontalAlignmentOptions.Left | VerticalAlignmentOptions.Baseline,
        Baseline = HorizontalAlignmentOptions.Center | VerticalAlignmentOptions.Baseline,
        BaselineRight = HorizontalAlignmentOptions.Right | VerticalAlignmentOptions.Baseline,
        BaselineJustified = HorizontalAlignmentOptions.Justified | VerticalAlignmentOptions.Baseline,
        BaselineFlush = HorizontalAlignmentOptions.Flush | VerticalAlignmentOptions.Baseline,
        BaselineGeoAligned = HorizontalAlignmentOptions.Geometry | VerticalAlignmentOptions.Baseline,

        MidlineLeft = HorizontalAlignmentOptions.Left | VerticalAlignmentOptions.Geometry,
        Midline = HorizontalAlignmentOptions.Center | VerticalAlignmentOptions.Geometry,
        MidlineRight = HorizontalAlignmentOptions.Right | VerticalAlignmentOptions.Geometry,
        MidlineJustified = HorizontalAlignmentOptions.Justified | VerticalAlignmentOptions.Geometry,
        MidlineFlush = HorizontalAlignmentOptions.Flush | VerticalAlignmentOptions.Geometry,
        MidlineGeoAligned = HorizontalAlignmentOptions.Geometry | VerticalAlignmentOptions.Geometry,

        CaplineLeft = HorizontalAlignmentOptions.Left | VerticalAlignmentOptions.Capline,
        Capline = HorizontalAlignmentOptions.Center | VerticalAlignmentOptions.Capline,
        CaplineRight = HorizontalAlignmentOptions.Right | VerticalAlignmentOptions.Capline,
        CaplineJustified = HorizontalAlignmentOptions.Justified | VerticalAlignmentOptions.Capline,
        CaplineFlush = HorizontalAlignmentOptions.Flush | VerticalAlignmentOptions.Capline,
        CaplineGeoAligned = HorizontalAlignmentOptions.Geometry | VerticalAlignmentOptions.Capline,

        Converted = 0xFFFF
    };

    /// <summary>
    /// Horizontal text alignment options.
    /// </summary>
    public enum HorizontalAlignmentOptions
    {
        Left = 0x1, Center = 0x2, Right = 0x4, Justified = 0x8, Flush = 0x10, Geometry = 0x20
    }

    /// <summary>
    /// Vertical text alignment options.
    /// </summary>
    public enum VerticalAlignmentOptions
    {
        Top = 0x100, Middle = 0x200, Bottom = 0x400, Baseline = 0x800, Geometry = 0x1000, Capline = 0x2000,
    }


    /// <summary>
    /// Flags controlling what vertex data gets pushed to the mesh.
    /// </summary>
    public enum TextRenderFlags
    {
        DontRender = 0x0,
        Render = 0xFF
    };

    public enum TMP_TextElementType { Character, Sprite };
    public enum MaskingTypes { MaskOff = 0, MaskHard = 1, MaskSoft = 2 }; //, MaskTex = 4 };
    public enum TextOverflowModes { Overflow = 0, Ellipsis = 1, Masking = 2, Truncate = 3, ScrollRect = 4, Page = 5, Linked = 6 };
    public enum MaskingOffsetMode { Percentage = 0, Pixel = 1 };
    public enum TextureMappingOptions { Character = 0, Line = 1, Paragraph = 2, MatchAspect = 3 };

    [Flags]
    public enum FontStyles { Normal = 0x0, Bold = 0x1, Italic = 0x2, Underline = 0x4, LowerCase = 0x8, UpperCase = 0x10, SmallCaps = 0x20, Strikethrough = 0x40, Superscript = 0x80, Subscript = 0x100, Highlight = 0x200 };
    public enum FontWeight { Thin = 100, ExtraLight = 200, Light = 300, Regular = 400, Medium = 500, SemiBold = 600, Bold = 700, Heavy = 800, Black = 900 };

    /// <summary>
    /// Base class which contains common properties and functions shared between the TextMeshPro and TextMeshProUGUI component.
    /// </summary>
    public abstract class TMP_Text : MaskableGraphic
    {
        /// <summary>
        /// A string containing the text to be displayed.
        /// </summary>
        public virtual string text
        {
            get { return m_text; }
            set
            {
                if (m_text != null && value != null && m_text.Length == value.Length && m_text == value)
                    return;

                m_text = value;
                m_inputSource = TextInputSources.String;
                m_havePropertiesChanged = true;
                m_isInputParsingRequired = true;
                SetVerticesDirty();
                SetLayoutDirty();
            }
        }
        [SerializeField]
        [TextArea(5, 10)]
        protected string m_text;

        /// <summary>
        /// The ITextPreprocessor component referenced by the text object (if any)
        /// </summary>
        public ITextPreprocessor textPreprocessor
        {
            get { return m_TextPreprocessor; }
            set { m_TextPreprocessor = value; }
        }
        [SerializeField]
        protected ITextPreprocessor m_TextPreprocessor;

        /// <summary>
        ///
        /// </summary>
        public bool isRightToLeftText
        {
            get { return m_isRightToLeft; }
            set { if (m_isRightToLeft == value) return; m_isRightToLeft = value; m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected bool m_isRightToLeft = false;


        /// <summary>
        /// The Font Asset to be assigned to this text object.
        /// </summary>
        public TMP_FontAsset font
        {
            get { return m_fontAsset; }
            set { if (m_fontAsset == value) return; m_fontAsset = value; LoadFontAsset(); m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected TMP_FontAsset m_fontAsset;
        protected TMP_FontAsset m_currentFontAsset;
        protected bool m_isSDFShader;


        /// <summary>
        /// The material to be assigned to this text object.
        /// </summary>
        public virtual Material fontSharedMaterial
        {
            get { return m_sharedMaterial; }
            set { if (m_sharedMaterial == value) return; SetSharedMaterial(value); m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetMaterialDirty(); }
        }
        [SerializeField]
        protected Material m_sharedMaterial;
        protected Material m_currentMaterial;
        protected MaterialReference[] m_materialReferences = new MaterialReference[32];
        protected Dictionary<int, int> m_materialReferenceIndexLookup = new Dictionary<int, int>();

        protected TMP_TextProcessingStack<MaterialReference> m_materialReferenceStack = new TMP_TextProcessingStack<MaterialReference>(new MaterialReference[16]);
        protected int m_currentMaterialIndex;


        /// <summary>
        /// An array containing the materials used by the text object.
        /// </summary>
        public virtual Material[] fontSharedMaterials
        {
            get { return GetSharedMaterials(); }
            set { SetSharedMaterials(value); m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetMaterialDirty(); }
        }
        [SerializeField]
        protected Material[] m_fontSharedMaterials;


        /// <summary>
        /// The material to be assigned to this text object. An instance of the material will be assigned to the object's renderer.
        /// </summary>
        public Material fontMaterial
        {
            // Return an Instance of the current material.
            get { return GetMaterial(m_sharedMaterial); }

            // Assign new font material
            set
            {
                if (m_sharedMaterial != null && m_sharedMaterial.GetInstanceID() == value.GetInstanceID()) return;

                m_sharedMaterial = value;

                m_padding = GetPaddingForMaterial();
                m_havePropertiesChanged = true;
                m_isInputParsingRequired = true;

                SetVerticesDirty();
                SetMaterialDirty();
            }
        }
        [SerializeField]
        protected Material m_fontMaterial;


        /// <summary>
        /// The materials to be assigned to this text object. An instance of the materials will be assigned.
        /// </summary>
        public virtual Material[] fontMaterials
        {
            get { return GetMaterials(m_fontSharedMaterials); }

            set { SetSharedMaterials(value); m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetMaterialDirty(); }
        }
        [SerializeField]
        protected Material[] m_fontMaterials;

        protected bool m_isMaterialDirty;


        /// <summary>
        /// This is the default vertex color assigned to each vertices. Color tags will override vertex colors unless the overrideColorTags is set.
        /// </summary>
        public override Color color
        {
            get { return m_fontColor; }
            set { if (m_fontColor == value) return; m_havePropertiesChanged = true; m_fontColor = value; SetVerticesDirty(); }
        }
        //[UnityEngine.Serialization.FormerlySerializedAs("m_fontColor")] // Required for backwards compatibility with pre-Unity 4.6 releases.
        [SerializeField]
        protected Color32 m_fontColor32 = Color.white;
        [SerializeField]
        protected Color m_fontColor = Color.white;
        protected static Color32 s_colorWhite = new Color32(255, 255, 255, 255);
        protected Color32 m_underlineColor = s_colorWhite;
        protected Color32 m_strikethroughColor = s_colorWhite;

        /// <summary>
        /// Sets the vertex color alpha value.
        /// </summary>
        public float alpha
        {
            get { return m_fontColor.a; }
            set { if (m_fontColor.a == value) return; m_fontColor.a = value; m_havePropertiesChanged = true; SetVerticesDirty(); }
        }


        /// <summary>
        /// Determines if Vertex Color Gradient should be used
        /// </summary>
        /// <value><c>true</c> if enable vertex gradient; otherwise, <c>false</c>.</value>
        public bool enableVertexGradient
        {
            get { return m_enableVertexGradient; }
            set { if (m_enableVertexGradient == value) return; m_havePropertiesChanged = true; m_enableVertexGradient = value; SetVerticesDirty(); }
        }
        [SerializeField]
        protected bool m_enableVertexGradient;

        [SerializeField]
        protected ColorMode m_colorMode = ColorMode.FourCornersGradient;

        /// <summary>
        /// Sets the vertex colors for each of the 4 vertices of the character quads.
        /// </summary>
        /// <value>The color gradient.</value>
        public VertexGradient colorGradient
        {
            get { return m_fontColorGradient; }
            set { m_havePropertiesChanged = true; m_fontColorGradient = value; SetVerticesDirty(); }
        }
        [SerializeField]
        protected VertexGradient m_fontColorGradient = new VertexGradient(Color.white);


        /// <summary>
        /// Set the vertex colors of the 4 vertices of each character quads.
        /// </summary>
        public TMP_ColorGradient colorGradientPreset
        {
            get { return m_fontColorGradientPreset; }
            set { m_havePropertiesChanged = true; m_fontColorGradientPreset = value; SetVerticesDirty(); }
        }
        [SerializeField]
        protected TMP_ColorGradient m_fontColorGradientPreset;


        /// <summary>
        /// Sprite Asset used by the text object.
        /// </summary>
        public TMP_SpriteAsset spriteAsset
        {
            get { return m_spriteAsset; }
            set { m_spriteAsset = value; m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected TMP_SpriteAsset m_spriteAsset;


        /// <summary>
        /// Determines whether or not the sprite color is multiplies by the vertex color of the text.
        /// </summary>
        public bool tintAllSprites
        {
            get { return m_tintAllSprites; }
            set { if (m_tintAllSprites == value) return; m_tintAllSprites = value; m_havePropertiesChanged = true; SetVerticesDirty(); }
        }
        [SerializeField]
        protected bool m_tintAllSprites;
        protected bool m_tintSprite;
        protected Color32 m_spriteColor;

        /// <summary>
        /// Style sheet used by the text object.
        /// </summary>
        public TMP_StyleSheet styleSheet
        {
            get { return m_StyleSheet; }
            set { m_StyleSheet = value; m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected TMP_StyleSheet m_StyleSheet;

        /// <summary>
        ///
        /// </summary>
        public TMP_Style textStyle
        {
            get
            {
                m_TextStyle = GetStyle(m_TextStyleHashCode);

                if (m_TextStyle == null)
                {
                    m_TextStyle = TMP_Style.NormalStyle;
                    m_TextStyleHashCode = m_TextStyle.hashCode;
                }

                return m_TextStyle;
            }

            set { m_TextStyle = value; m_TextStyleHashCode = m_TextStyle.hashCode; m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        internal TMP_Style m_TextStyle;
        [SerializeField]
        protected int m_TextStyleHashCode;

        /// <summary>
        /// This overrides the color tags forcing the vertex colors to be the default font color.
        /// </summary>
        public bool overrideColorTags
        {
            get { return m_overrideHtmlColors; }
            set { if (m_overrideHtmlColors == value) return; m_havePropertiesChanged = true; m_overrideHtmlColors = value; SetVerticesDirty(); }
        }
        [SerializeField]
        protected bool m_overrideHtmlColors = false;


        /// <summary>
        /// Sets the color of the _FaceColor property of the assigned material. Changing face color will result in an instance of the material.
        /// </summary>
        public Color32 faceColor
        {
            get
            {
                if (m_sharedMaterial == null) return m_faceColor;

                m_faceColor = m_sharedMaterial.GetColor(ShaderUtilities.ID_FaceColor);
                return m_faceColor;
            }

            set { if (m_faceColor.Compare(value)) return; SetFaceColor(value); m_havePropertiesChanged = true; m_faceColor = value; SetVerticesDirty(); SetMaterialDirty(); }
        }
        [SerializeField]
        protected Color32 m_faceColor = Color.white;


        /// <summary>
        /// Sets the color of the _OutlineColor property of the assigned material. Changing outline color will result in an instance of the material.
        /// </summary>
        public Color32 outlineColor
        {
            get
            {
                if (m_sharedMaterial == null) return m_outlineColor;

                m_outlineColor = m_sharedMaterial.GetColor(ShaderUtilities.ID_OutlineColor);
                return m_outlineColor;
            }

            set { if (m_outlineColor.Compare(value)) return; SetOutlineColor(value); m_havePropertiesChanged = true; m_outlineColor = value; SetVerticesDirty(); }
        }
        //[SerializeField]
        protected Color32 m_outlineColor = Color.black;


        /// <summary>
        /// Sets the thickness of the outline of the font. Setting this value will result in an instance of the material.
        /// </summary>
        public float outlineWidth
        {
            get
            {
                if (m_sharedMaterial == null) return m_outlineWidth;

                m_outlineWidth = m_sharedMaterial.GetFloat(ShaderUtilities.ID_OutlineWidth);
                return m_outlineWidth;
            }
            set { if (m_outlineWidth == value) return; SetOutlineThickness(value); m_havePropertiesChanged = true; m_outlineWidth = value; SetVerticesDirty(); }
        }
        protected float m_outlineWidth = 0.0f;


        /// <summary>
        /// The point size of the font.
        /// </summary>
        public float fontSize
        {
            get { return m_fontSize; }
            set { if (m_fontSize == value) return; m_havePropertiesChanged = true; m_fontSize = value; if (!m_enableAutoSizing) m_fontSizeBase = m_fontSize; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected float m_fontSize = 36; // Font Size
        protected float m_currentFontSize; // Temporary Font Size affected by tags
        [SerializeField] // TODO: Review if this should be serialized
        protected float m_fontSizeBase = 36;
        protected TMP_TextProcessingStack<float> m_sizeStack = new TMP_TextProcessingStack<float>(16);


        /// <summary>
        /// The scale of the current text.
        /// </summary>
        public float fontScale
        {
            get { return m_fontScale; }
        }


        /// <summary>
        /// Control the weight of the font if an alternative font asset is assigned for the given weight in the font asset editor.
        /// </summary>
        public FontWeight fontWeight
        {
            get { return m_fontWeight; }
            set { if (m_fontWeight == value) return; m_fontWeight = value; m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected FontWeight m_fontWeight = FontWeight.Regular;
        protected FontWeight m_FontWeightInternal = FontWeight.Regular;
        protected TMP_TextProcessingStack<FontWeight> m_FontWeightStack = new TMP_TextProcessingStack<FontWeight>(8);

        /// <summary>
        ///
        /// </summary>
        public float pixelsPerUnit
        {
            get
            {
                var localCanvas = canvas;
                if (!localCanvas)
                    return 1;
                // For dynamic fonts, ensure we use one pixel per pixel on the screen.
                if (!font)
                    return localCanvas.scaleFactor;
                // For non-dynamic fonts, calculate pixels per unit based on specified font size relative to font object's own font size.
                if (m_currentFontAsset == null || m_currentFontAsset.faceInfo.pointSize <= 0 || m_fontSize <= 0)
                    return 1;
                return m_fontSize / m_currentFontAsset.faceInfo.pointSize;
            }
        }


        /// <summary>
        /// Enable text auto-sizing
        /// </summary>
        public bool enableAutoSizing
        {
            get { return m_enableAutoSizing; }
            set { if (m_enableAutoSizing == value) return; m_enableAutoSizing = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected bool m_enableAutoSizing;
        protected float m_maxFontSize; // Used in conjunction with auto-sizing
        protected float m_minFontSize; // Used in conjunction with auto-sizing
        protected int m_AutoSizeIterationCount;
        protected int m_AutoSizeMaxIterationCount = 100;

        protected bool m_IsAutoSizePointSizeSet;


        /// <summary>
        /// Minimum point size of the font when text auto-sizing is enabled.
        /// </summary>
        public float fontSizeMin
        {
            get { return m_fontSizeMin; }
            set { if (m_fontSizeMin == value) return; m_fontSizeMin = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected float m_fontSizeMin = 0; // Text Auto Sizing Min Font Size.


        /// <summary>
        /// Maximum point size of the font when text auto-sizing is enabled.
        /// </summary>
        public float fontSizeMax
        {
            get { return m_fontSizeMax; }
            set { if (m_fontSizeMax == value) return; m_fontSizeMax = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected float m_fontSizeMax = 0; // Text Auto Sizing Max Font Size.


        /// <summary>
        /// The style of the text
        /// </summary>
        public FontStyles fontStyle
        {
            get { return m_fontStyle; }
            set { if (m_fontStyle == value) return; m_fontStyle = value; m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected FontStyles m_fontStyle = FontStyles.Normal;
        protected FontStyles m_FontStyleInternal = FontStyles.Normal;
        protected TMP_FontStyleStack m_fontStyleStack;

        /// <summary>
        /// Property used in conjunction with padding calculation for the geometry.
        /// </summary>
        public bool isUsingBold { get { return m_isUsingBold; } }
        protected bool m_isUsingBold = false; // Used to ensure GetPadding & Ratios take into consideration bold characters.

        /// <summary>
        /// Horizontal alignment options
        /// </summary>
        public HorizontalAlignmentOptions horizontalAlignment
        {
            get { return m_HorizontalAlignment; }
            set
            {
                if (m_HorizontalAlignment == value)
                    return;

                m_HorizontalAlignment = value;

                m_havePropertiesChanged = true;
                SetVerticesDirty();
            }
        }
        [SerializeField]
        protected HorizontalAlignmentOptions m_HorizontalAlignment = HorizontalAlignmentOptions.Left;

        /// <summary>
        /// Vertical alignment options
        /// </summary>
        public VerticalAlignmentOptions verticalAlignment
        {
            get { return m_VerticalAlignment; }
            set
            {
                if (m_VerticalAlignment == value)
                    return;

                m_VerticalAlignment = value;

                m_havePropertiesChanged = true;
                SetVerticesDirty();
            }
        }
        [SerializeField]
        protected VerticalAlignmentOptions m_VerticalAlignment = VerticalAlignmentOptions.Top;

        /// <summary>
        /// Text alignment options
        /// </summary>
        public TextAlignmentOptions alignment
        {
            get { return (TextAlignmentOptions)((int)m_HorizontalAlignment | (int)m_VerticalAlignment); }
            set
            {
                HorizontalAlignmentOptions horizontalAlignment = (HorizontalAlignmentOptions)((int)value & 0xFF);
                VerticalAlignmentOptions verticalAlignment = (VerticalAlignmentOptions)((int)value & 0xFF00);

                if (m_HorizontalAlignment == horizontalAlignment && m_VerticalAlignment == verticalAlignment)
                    return;

                m_HorizontalAlignment = horizontalAlignment;
                m_VerticalAlignment = verticalAlignment;
                m_havePropertiesChanged = true;
                SetVerticesDirty();
            }
        }
        [SerializeField]
        [UnityEngine.Serialization.FormerlySerializedAs("m_lineJustification")]
        protected TextAlignmentOptions m_textAlignment = TextAlignmentOptions.Converted;

        protected HorizontalAlignmentOptions m_lineJustification;
        protected TMP_TextProcessingStack<HorizontalAlignmentOptions> m_lineJustificationStack = new TMP_TextProcessingStack<HorizontalAlignmentOptions>(new HorizontalAlignmentOptions[16]);
        protected Vector3[] m_textContainerLocalCorners = new Vector3[4];

        /// <summary>
        /// Use the extents of the text geometry for alignment instead of font metrics.
        /// </summary>
        //public bool alignByGeometry
        //{
        //    get { return m_alignByGeometry; }
        //    set { if (m_alignByGeometry == value) return; m_havePropertiesChanged = true; m_alignByGeometry = value; SetVerticesDirty(); }
        //}
        //[SerializeField]
        //protected bool m_alignByGeometry;


        /// <summary>
        /// The amount of additional spacing between characters.
        /// </summary>
        public float characterSpacing
        {
            get { return m_characterSpacing; }
            set { if (m_characterSpacing == value) return; m_havePropertiesChanged = true; m_characterSpacing = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected float m_characterSpacing = 0;
        protected float m_cSpacing = 0;
        protected float m_monoSpacing = 0;

        /// <summary>
        /// The amount of additional spacing between words.
        /// </summary>
        public float wordSpacing
        {
            get { return m_wordSpacing; }
            set { if (m_wordSpacing == value) return; m_havePropertiesChanged = true; m_wordSpacing = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected float m_wordSpacing = 0;

        /// <summary>
        /// The amount of additional spacing to add between each lines of text.
        /// </summary>
        public float lineSpacing
        {
            get { return m_lineSpacing; }
            set { if (m_lineSpacing == value) return; m_havePropertiesChanged = true; m_lineSpacing = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected float m_lineSpacing = 0;
        protected float m_lineSpacingDelta = 0; // Used with Text Auto Sizing feature
        protected float m_lineHeight = TMP_Math.FLOAT_UNSET; // Used with the <line-height=xx.x> tag.
        protected bool m_IsDrivenLineSpacing;


        /// <summary>
        /// The amount of potential line spacing adjustment before text auto sizing kicks in.
        /// </summary>
        public float lineSpacingAdjustment
        {
            get { return m_lineSpacingMax; }
            set { if (m_lineSpacingMax == value) return; m_havePropertiesChanged = true; m_lineSpacingMax = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected float m_lineSpacingMax = 0; // Text Auto Sizing Max Line spacing reduction.
        //protected bool m_forceLineBreak;

        /// <summary>
        /// The amount of additional spacing to add between each lines of text.
        /// </summary>
        public float paragraphSpacing
        {
            get { return m_paragraphSpacing; }
            set { if (m_paragraphSpacing == value) return; m_havePropertiesChanged = true; m_paragraphSpacing = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected float m_paragraphSpacing = 0;


        /// <summary>
        /// Percentage the width of characters can be adjusted before text auto-sizing begins to reduce the point size.
        /// </summary>
        public float characterWidthAdjustment
        {
            get { return m_charWidthMaxAdj; }
            set { if (m_charWidthMaxAdj == value) return; m_havePropertiesChanged = true; m_charWidthMaxAdj = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected float m_charWidthMaxAdj = 0f; // Text Auto Sizing Max Character Width reduction.
        protected float m_charWidthAdjDelta = 0;


        /// <summary>
        /// Controls whether or not word wrapping is applied. When disabled, the text will be displayed on a single line.
        /// </summary>
        public bool enableWordWrapping
        {
            get { return m_enableWordWrapping; }
            set { if (m_enableWordWrapping == value) return; m_havePropertiesChanged = true; m_isInputParsingRequired = true; m_enableWordWrapping = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected bool m_enableWordWrapping = false;
        protected bool m_isCharacterWrappingEnabled = false;
        protected bool m_isNonBreakingSpace = false;
        protected bool m_isIgnoringAlignment;

        /// <summary>
        /// Controls the blending between using character and word spacing to fill-in the space for justified text.
        /// </summary>
        public float wordWrappingRatios
        {
            get { return m_wordWrappingRatios; }
            set { if (m_wordWrappingRatios == value) return; m_wordWrappingRatios = value; m_havePropertiesChanged = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected float m_wordWrappingRatios = 0.4f; // Controls word wrapping ratios between word or characters.


        /// <summary>
        ///
        /// </summary>
        //public bool enableAdaptiveJustification
        //{
        //    get { return m_enableAdaptiveJustification; }
        //    set { if (m_enableAdaptiveJustification == value) return;  m_enableAdaptiveJustification = value;  m_havePropertiesChanged = true;  m_isCalculateSizeRequired = true;  SetVerticesDirty(); SetLayoutDirty(); }
        //}
        //[SerializeField]
        //protected bool m_enableAdaptiveJustification;
        //protected float m_adaptiveJustificationThreshold = 10.0f;


        /// <summary>
        /// Controls the Text Overflow Mode
        /// </summary>
        public TextOverflowModes overflowMode
        {
            get { return m_overflowMode; }
            set { if (m_overflowMode == value) return; m_overflowMode = value; m_havePropertiesChanged = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected TextOverflowModes m_overflowMode = TextOverflowModes.Overflow;


        /// <summary>
        /// Indicates if the text exceeds the vertical bounds of its text container.
        /// </summary>
        public bool isTextOverflowing
        {
            get { if (m_firstOverflowCharacterIndex != -1) return true; return false; }
        }


        /// <summary>
        /// The first character which exceeds the vertical bounds of its text container.
        /// </summary>
        public int firstOverflowCharacterIndex
        {
            get { return m_firstOverflowCharacterIndex; }
        }
        //[SerializeField]
        protected int m_firstOverflowCharacterIndex = -1;


        /// <summary>
        /// The linked text component used for flowing the text from one text component to another.
        /// </summary>
        public TMP_Text linkedTextComponent
        {
            get { return m_linkedTextComponent; }

            set
            {
                if (value == null)
                {
                    // Release linked text components
                    ReleaseLinkedTextComponent(m_linkedTextComponent);

                    m_linkedTextComponent = value;
                }
                else if (IsSelfOrLinkedAncestor(value))
                {
                    // We do nothing since new assigned is invalid
                    return;
                }
                else
                {
                    // Release linked text components
                    ReleaseLinkedTextComponent(m_linkedTextComponent);

                    m_linkedTextComponent = value;
                    m_linkedTextComponent.parentLinkedComponent = this;
                }

                m_havePropertiesChanged = true;
                SetVerticesDirty();
                SetLayoutDirty();
            }
        }
        [SerializeField]
        protected TMP_Text m_linkedTextComponent;
        [SerializeField]
        internal TMP_Text parentLinkedComponent;


        /// <summary>
        /// Property indicating whether the text is Truncated or using Ellipsis.
        /// </summary>
        public bool isTextTruncated { get { return m_isTextTruncated; } }
        //[SerializeField]
        protected bool m_isTextTruncated;


        /// <summary>
        /// Determines if kerning is enabled or disabled.
        /// </summary>
        public bool enableKerning
        {
            get { return m_enableKerning; }
            set { if (m_enableKerning == value) return; m_havePropertiesChanged = true; m_enableKerning = value; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected bool m_enableKerning;
        protected float m_GlyphHorizontalAdvanceAdjustment;

        /// <summary>
        /// Adds extra padding around each character. This may be necessary when the displayed text is very small to prevent clipping.
        /// </summary>
        public bool extraPadding
        {
            get { return m_enableExtraPadding; }
            set { if (m_enableExtraPadding == value) return; m_havePropertiesChanged = true; m_enableExtraPadding = value; UpdateMeshPadding(); SetVerticesDirty(); /* SetLayoutDirty();*/ }
        }
        [SerializeField]
        protected bool m_enableExtraPadding = false;
        [SerializeField]
        protected bool checkPaddingRequired;


        /// <summary>
        /// Enables or Disables Rich Text Tags
        /// </summary>
        public bool richText
        {
            get { return m_isRichText; }
            set { if (m_isRichText == value) return; m_isRichText = value; m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected bool m_isRichText = true; // Used to enable or disable Rich Text.


        /// <summary>
        /// Enables or Disables parsing of CTRL characters in input text.
        /// </summary>
        public bool parseCtrlCharacters
        {
            get { return m_parseCtrlCharacters; }
            set { if (m_parseCtrlCharacters == value) return; m_parseCtrlCharacters = value; m_havePropertiesChanged = true; m_isInputParsingRequired = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected bool m_parseCtrlCharacters = true;


        /// <summary>
        /// Sets the RenderQueue along with Ztest to force the text to be drawn last and on top of scene elements.
        /// </summary>
        public bool isOverlay
        {
            get { return m_isOverlay; }
            set { if (m_isOverlay == value) return; m_isOverlay = value; SetShaderDepth(); m_havePropertiesChanged = true; SetVerticesDirty(); }
        }
        protected bool m_isOverlay = false;


        /// <summary>
        /// Sets Perspective Correction to Zero for Orthographic Camera mode & 0.875f for Perspective Camera mode.
        /// </summary>
        public bool isOrthographic
        {
            get { return m_isOrthographic; }
            set { if (m_isOrthographic == value) return; m_havePropertiesChanged = true; m_isOrthographic = value; SetVerticesDirty(); }
        }
        [SerializeField]
        protected bool m_isOrthographic = false;


        /// <summary>
        /// Sets the culling on the shaders. Note changing this value will result in an instance of the material.
        /// </summary>
        public bool enableCulling
        {
            get { return m_isCullingEnabled; }
            set { if (m_isCullingEnabled == value) return; m_isCullingEnabled = value; SetCulling(); m_havePropertiesChanged = true; }
        }
        [SerializeField]
        protected bool m_isCullingEnabled = false;

        //
        protected bool m_isMaskingEnabled;
        protected bool isMaskUpdateRequired;

        /// <summary>
        /// Forces objects that are not visible to get refreshed.
        /// </summary>
        public bool ignoreVisibility
        {
            get { return m_ignoreCulling; }
            set { if (m_ignoreCulling == value) return; m_havePropertiesChanged = true; m_ignoreCulling = value; }
        }
        //[SerializeField]
        protected bool m_ignoreCulling = true; // Not implemented yet.


        /// <summary>
        /// Controls how the face and outline textures will be applied to the text object.
        /// </summary>
        public TextureMappingOptions horizontalMapping
        {
            get { return m_horizontalMapping; }
            set { if (m_horizontalMapping == value) return; m_havePropertiesChanged = true; m_horizontalMapping = value; SetVerticesDirty(); }
        }
        [SerializeField]
        protected TextureMappingOptions m_horizontalMapping = TextureMappingOptions.Character;


        /// <summary>
        /// Controls how the face and outline textures will be applied to the text object.
        /// </summary>
        public TextureMappingOptions verticalMapping
        {
            get { return m_verticalMapping; }
            set { if (m_verticalMapping == value) return; m_havePropertiesChanged = true; m_verticalMapping = value; SetVerticesDirty(); }
        }
        [SerializeField]
        protected TextureMappingOptions m_verticalMapping = TextureMappingOptions.Character;


        /// <summary>
        /// Controls the UV Offset for the various texture mapping mode on the text object.
        /// </summary>
        //public Vector2 mappingUvOffset
        //{
        //    get { return m_uvOffset; }
        //    set { if (m_uvOffset == value) return; m_havePropertiesChanged = true; m_uvOffset = value; SetVerticesDirty(); }
        //}
        //[SerializeField]
        //protected Vector2 m_uvOffset = Vector2.zero; // Used to offset UV on Texturing


        /// <summary>
        /// Controls the horizontal offset of the UV of the texture mapping mode for each line of the text object.
        /// </summary>
        public float mappingUvLineOffset
        {
            get { return m_uvLineOffset; }
            set { if (m_uvLineOffset == value) return; m_havePropertiesChanged = true; m_uvLineOffset = value; SetVerticesDirty(); }
        }
        [SerializeField]
        protected float m_uvLineOffset = 0.0f; // Used for UV line offset per line


        /// <summary>
        /// Determines if the Mesh will be rendered.
        /// </summary>
        public TextRenderFlags renderMode
        {
            get { return m_renderMode; }
            set { if (m_renderMode == value) return; m_renderMode = value; m_havePropertiesChanged = true; }
        }
        protected TextRenderFlags m_renderMode = TextRenderFlags.Render;


        /// <summary>
        /// Determines the sorting order of the geometry of the text object.
        /// </summary>
        public VertexSortingOrder geometrySortingOrder
        {
            get { return m_geometrySortingOrder; }

            set { m_geometrySortingOrder = value; m_havePropertiesChanged = true; SetVerticesDirty(); }

        }
        [SerializeField]
        protected VertexSortingOrder m_geometrySortingOrder;


        /// <summary>
        /// Determines if a text object will be excluded from the InternalUpdate callback used to handle updates of SDF Scale when the scale of the text object or parent(s) changes.
        /// </summary>
        public bool isTextObjectScaleStatic
        {
            get { return m_IsTextObjectScaleStatic; }
            set
            {
                m_IsTextObjectScaleStatic = value;

                if (m_IsTextObjectScaleStatic)
                    TMP_UpdateManager.UnRegisterTextObjectForUpdate(this);
                else
                    TMP_UpdateManager.RegisterTextObjectForUpdate(this);
            }
        }
        [SerializeField]
        protected bool m_IsTextObjectScaleStatic;

        /// <summary>
        /// Determines if the data structures allocated to contain the geometry of the text object will be reduced in size if the number of characters required to display the text is reduced by more than 256 characters.
        /// This reduction has the benefit of reducing the amount of vertex data being submitted to the graphic device but results in GC when it occurs.
        /// </summary>
        public bool vertexBufferAutoSizeReduction
        {
            get { return m_VertexBufferAutoSizeReduction; }
            set { m_VertexBufferAutoSizeReduction = value; m_havePropertiesChanged = true; SetVerticesDirty(); }
        }
        [SerializeField]
        protected bool m_VertexBufferAutoSizeReduction = true;

        /// <summary>
        /// The first character which should be made visible in conjunction with the Text Overflow Linked mode.
        /// </summary>
        public int firstVisibleCharacter
        {
            get { return m_firstVisibleCharacter; }
            set { if (m_firstVisibleCharacter == value) return; m_havePropertiesChanged = true; m_firstVisibleCharacter = value; SetVerticesDirty(); }
        }
        //[SerializeField]
        protected int m_firstVisibleCharacter;

        /// <summary>
        /// Allows to control how many characters are visible from the input.
        /// </summary>
        public int maxVisibleCharacters
        {
            get { return m_maxVisibleCharacters; }
            set { if (m_maxVisibleCharacters == value) return; m_havePropertiesChanged = true; m_maxVisibleCharacters = value; SetVerticesDirty(); }
        }
        protected int m_maxVisibleCharacters = 99999;


        /// <summary>
        /// Allows to control how many words are visible from the input.
        /// </summary>
        public int maxVisibleWords
        {
            get { return m_maxVisibleWords; }
            set { if (m_maxVisibleWords == value) return; m_havePropertiesChanged = true; m_maxVisibleWords = value; SetVerticesDirty(); }
        }
        protected int m_maxVisibleWords = 99999;


        /// <summary>
        /// Allows control over how many lines of text are displayed.
        /// </summary>
        public int maxVisibleLines
        {
            get { return m_maxVisibleLines; }
            set { if (m_maxVisibleLines == value) return; m_havePropertiesChanged = true; m_isInputParsingRequired = true; m_maxVisibleLines = value; SetVerticesDirty(); }
        }
        protected int m_maxVisibleLines = 99999;


        /// <summary>
        /// Determines if the text's vertical alignment will be adjusted based on visible descender of the text.
        /// </summary>
        public bool useMaxVisibleDescender
        {
            get { return m_useMaxVisibleDescender; }
            set { if (m_useMaxVisibleDescender == value) return; m_havePropertiesChanged = true; m_isInputParsingRequired = true; m_useMaxVisibleDescender = value; SetVerticesDirty(); }
        }
        [SerializeField]
        protected bool m_useMaxVisibleDescender = true;


        /// <summary>
        /// Controls which page of text is shown
        /// </summary>
        public int pageToDisplay
        {
            get { return m_pageToDisplay; }
            set { if (m_pageToDisplay == value) return; m_havePropertiesChanged = true; m_pageToDisplay = value; SetVerticesDirty(); }
        }
        [SerializeField]
        protected int m_pageToDisplay = 1;
        protected bool m_isNewPage = false;

        /// <summary>
        /// The margins of the text object.
        /// </summary>
        public virtual Vector4 margin
        {
            get { return m_margin; }
            set { if (m_margin == value) return; m_margin = value; ComputeMarginSize(); m_havePropertiesChanged = true; SetVerticesDirty(); }
        }
        [SerializeField]
        protected Vector4 m_margin = new Vector4(0, 0, 0, 0);
        protected float m_marginLeft;
        protected float m_marginRight;
        protected float m_marginWidth;  // Width of the RectTransform minus left and right margins.
        protected float m_marginHeight; // Height of the RectTransform minus top and bottom margins.
        protected float m_width = -1;


        /// <summary>
        /// Returns data about the text object which includes information about each character, word, line, link, etc.
        /// </summary>
        public TMP_TextInfo textInfo
        {
            get { return m_textInfo; }
        }
        //[SerializeField]
        protected TMP_TextInfo m_textInfo; // Class which holds information about the Text object such as characters, lines, mesh data as well as metrics.

        /// <summary>
        /// Property tracking if any of the text properties have changed. Flag is set before the text is regenerated.
        /// </summary>
        public bool havePropertiesChanged
        {
            get { return m_havePropertiesChanged; }
            set { if (m_havePropertiesChanged == value) return; m_havePropertiesChanged = value; m_isInputParsingRequired = true; SetAllDirty(); }
        }
        //[SerializeField]
        protected bool m_havePropertiesChanged;  // Used to track when properties of the text object have changed.


        /// <summary>
        /// Property to handle legacy animation component.
        /// </summary>
        public bool isUsingLegacyAnimationComponent
        {
            get { return m_isUsingLegacyAnimationComponent; }
            set { m_isUsingLegacyAnimationComponent = value; }
        }
        [SerializeField]
        protected bool m_isUsingLegacyAnimationComponent;


        /// <summary>
        /// Returns are reference to the Transform
        /// </summary>
        public new Transform transform
        {
            get
            {
                if (m_transform == null)
                    m_transform = GetComponent<Transform>();
                return m_transform;
            }
        }
        protected Transform m_transform;


        /// <summary>
        /// Returns are reference to the RectTransform
        /// </summary>
        public new RectTransform rectTransform
        {
            get
            {
                if (m_rectTransform == null)
                    m_rectTransform = GetComponent<RectTransform>();
                return m_rectTransform;
            }
        }
        protected RectTransform m_rectTransform;


        /// <summary>
        /// Used to track potential changes in RectTransform size to allow us to ignore OnRectTransformDimensionsChange getting called due to rounding errors when using Stretch Anchors.
        /// </summary>
        protected Vector2 m_PreviousRectTransformSize;

        /// <summary>
        /// Used to track potential changes in pivot position to allow us to ignore OnRectTransformDimensionsChange getting called due to rounding errors when using Stretch Anchors.
        /// </summary>
        protected Vector2 m_PreviousPivotPosition;


        /// <summary>
        /// Enables control over setting the size of the text container to match the text object.
        /// </summary>
        public virtual bool autoSizeTextContainer
        {
            get;
            set;
        }
        protected bool m_autoSizeTextContainer;


        /// <summary>
        /// The mesh used by the font asset and material assigned to the text object.
        /// </summary>
        public virtual Mesh mesh
        {
            get { return m_mesh; }
        }
        protected Mesh m_mesh;


        /// <summary>
        /// Determines if the geometry of the characters will be quads or volumetric (cubes).
        /// </summary>
        public bool isVolumetricText
        {
            get { return m_isVolumetricText; }
            set { if (m_isVolumetricText == value) return; m_havePropertiesChanged = value; m_textInfo.ResetVertexLayout(value); m_isInputParsingRequired = true; SetVerticesDirty(); SetLayoutDirty(); }
        }
        [SerializeField]
        protected bool m_isVolumetricText;

        /// <summary>
        /// Returns the bounds of the mesh of the text object in world space.
        /// </summary>
        public Bounds bounds
        {
            get
            {
                if (m_mesh == null) return new Bounds();

                return GetCompoundBounds();
            }
        }

        /// <summary>
        /// Returns the bounds of the text of the text object.
        /// </summary>
        public Bounds textBounds
        {
            get
            {
                if (m_textInfo == null) return new Bounds();

                return GetTextBounds();
            }
        }

        // *** Unity Event Handling ***

        /// <summary>
        /// Event delegate to allow custom loading of TMP_FontAsset when using the <font="Font Asset Name"> tag.
        /// </summary>
        public static event Func<int, string, TMP_FontAsset> OnFontAssetRequest;

        /// <summary>
        /// Event delegate to allow custom loading of TMP_SpriteAsset when using the <sprite="Sprite Asset Name"> tag.
        /// </summary>
        public static event Func<int, string, TMP_SpriteAsset> OnSpriteAssetRequest;

        /// <summary>
        /// Event delegate to allow modifying the text geometry before it is uploaded to the mesh and rendered.
        /// </summary>
        public virtual event Action<TMP_TextInfo> OnPreRenderText = delegate { };

        // *** SPECIAL COMPONENTS ***

        /// <summary>
        /// Component used to control wrapping of text following some arbitrary shape.
        /// </summary>
        //public MarginShaper marginShaper
        //{
        //    get
        //    {
        //        if (m_marginShaper == null) m_marginShaper = GetComponent<MarginShaper>();

        //        return m_marginShaper;
        //    }
        //}
        //[SerializeField]
        //protected MarginShaper m_marginShaper;


        /// <summary>
        /// Component used to control and animate sprites in the text object.
        /// </summary>
        protected TMP_SpriteAnimator spriteAnimator
        {
            get
            {
                if (m_spriteAnimator == null)
                {
                    m_spriteAnimator = GetComponent<TMP_SpriteAnimator>();
                    if (m_spriteAnimator == null) m_spriteAnimator = gameObject.AddComponent<TMP_SpriteAnimator>();
                }

                return m_spriteAnimator;
            }

        }
        //[SerializeField]
        protected TMP_SpriteAnimator m_spriteAnimator;


        /// <summary>
        ///
        /// </summary>
        //public TMP_TextShaper textShaper
        //{
        //    get
        //    {
        //        if (m_textShaper == null)
        //            m_textShaper = GetComponent<TMP_TextShaper>();

        //        return m_textShaper;
        //    }
        //}
        //[SerializeField]
        //protected TMP_TextShaper m_textShaper;

        // *** PROPERTIES RELATED TO UNITY LAYOUT SYSTEM ***
        /// <summary>
        ///
        /// </summary>
        public float flexibleHeight { get { return m_flexibleHeight; } }
        protected float m_flexibleHeight = -1f;

        /// <summary>
        ///
        /// </summary>
        public float flexibleWidth { get { return m_flexibleWidth; } }
        protected float m_flexibleWidth = -1f;

        /// <summary>
        ///
        /// </summary>
        public float minWidth { get { return m_minWidth; } }
        protected float m_minWidth;

        /// <summary>
        ///
        /// </summary>
        public float minHeight { get { return m_minHeight; } }
        protected float m_minHeight;

        /// <summary>
        ///
        /// </summary>
        public float maxWidth { get { return m_maxWidth; } }
        protected float m_maxWidth;

        /// <summary>
        ///
        /// </summary>
        public float maxHeight { get { return m_maxHeight; } }
        protected float m_maxHeight;

        /// <summary>
        ///
        /// </summary>
        protected LayoutElement layoutElement
        {
            get
            {
                if (m_LayoutElement == null)
                {
                    m_LayoutElement = GetComponent<LayoutElement>();
                }

                return m_LayoutElement;
            }
        }
        protected LayoutElement m_LayoutElement;

        /// <summary>
        /// Computed preferred width of the text object.
        /// </summary>
        public virtual float preferredWidth { get { m_preferredWidth = GetPreferredWidth(); return m_preferredWidth; } }
        protected float m_preferredWidth;
        protected float m_renderedWidth;
        protected bool m_isPreferredWidthDirty;

        /// <summary>
        /// Computed preferred height of the text object.
        /// </summary>
        public virtual float preferredHeight { get { m_preferredHeight = GetPreferredHeight(); return m_preferredHeight; } }
        protected float m_preferredHeight;
        protected float m_renderedHeight;
        protected bool m_isPreferredHeightDirty;

        protected bool m_isCalculatingPreferredValues;


        /// <summary>
        /// Compute the rendered width of the text object.
        /// </summary>
        public virtual float renderedWidth { get { return GetRenderedWidth(); } }


        /// <summary>
        /// Compute the rendered height of the text object.
        /// </summary>
        public virtual float renderedHeight { get { return GetRenderedHeight(); } }


        /// <summary>
        ///
        /// </summary>
        public int layoutPriority { get { return m_layoutPriority; } }
        protected int m_layoutPriority = 0;

        protected bool m_isLayoutDirty;

        protected bool m_isAwake;
        internal bool m_isWaitingOnResourceLoad;

        internal bool m_isInputParsingRequired = false; // Used to determine if the input text needs to be re-parsed.

        //internal enum CharacterSubstitution
        //{
        //    None                    = 0x00,
        //    AnyByEndOfLine          = 0x03,
        //    SoftHyphenByHyphenMinus = 0xAD,
        //}

        protected struct CharacterSubstitution
        {
            public int index;
            public uint unicode;

            public CharacterSubstitution (int index, uint unicode)
            {
                this.index = index;
                this.unicode = unicode;
            }
        }

        // Protected Fields
        internal enum TextInputSources { Text = 0, SetText = 1, SetCharArray = 2, String = 3 };
        //[SerializeField]
        internal TextInputSources m_inputSource;

        protected float m_fontScale; // Scaling of the font based on Atlas true Font Size and Rendered Font Size.
        protected float m_fontScaleMultiplier; // Used for handling of superscript and subscript.

        protected char[] m_htmlTag = new char[128]; // Maximum length of rich text tag. This is preallocated to avoid GC.
        protected RichTextTagAttribute[] m_xmlAttribute = new RichTextTagAttribute[8];

        protected float[] m_attributeParameterValues = new float[16];

        protected float tag_LineIndent = 0;
        protected float tag_Indent = 0;
        protected TMP_TextProcessingStack<float> m_indentStack = new TMP_TextProcessingStack<float>(new float[16]);
        protected bool tag_NoParsing;
        //protected TMP_LinkInfo tag_LinkInfo = new TMP_LinkInfo();

        protected bool m_isParsingText;
        protected Matrix4x4 m_FXMatrix;
        protected bool m_isFXMatrixSet;

        /// <summary>
        /// Array containing the Unicode characters to be parsed.
        /// </summary>
        protected UnicodeChar[] m_InternalParsingBuffer = new UnicodeChar[8];

        /// <summary>
        /// The number of Unicode characters that have been parsed and contained in the m_InternalParsingBuffer
        /// </summary>
        protected int m_InternalParsingBufferSize;

        protected struct UnicodeChar
        {
            public int unicode;
            public int stringIndex;
            public int length;
        }

        protected struct SpecialCharacter
        {
            public TMP_Character character;
            public TMP_FontAsset fontAsset;
            public Material material;
            public int materialIndex;

            public SpecialCharacter(TMP_Character character, int materialIndex)
            {
                this.character = character;
                this.fontAsset = character.textAsset as TMP_FontAsset;
                this.material = this.fontAsset != null ? this.fontAsset.material : null;
                this.materialIndex = materialIndex;
            }
        }

        private TMP_CharacterInfo[] m_internalCharacterInfo; // Used by functions to calculate preferred values.
        protected char[] m_input_CharArray = new char[256]; // This array hold the characters from the SetText();
        private int m_charArray_Length = 0;
        protected int m_totalCharacterCount;

        // Structures used to save the state of the text layout in conjunction with line breaking / word wrapping.
        protected WordWrapState m_SavedWordWrapState = new WordWrapState();
        protected WordWrapState m_SavedLineState = new WordWrapState();
        protected WordWrapState m_SavedEllipsisState = new WordWrapState();
        protected WordWrapState m_SavedLastValidState = new WordWrapState();
        protected WordWrapState m_SavedSoftLineBreakState = new WordWrapState();

        //internal Stack<WordWrapState> m_LineBreakCandiateStack = new Stack<WordWrapState>();
        internal TMP_TextProcessingStack<WordWrapState> m_EllipsisInsertionCandidateStack = new TMP_TextProcessingStack<WordWrapState>(8, 8);

        // Fields whose state is saved in conjunction with text parsing and word wrapping.
        protected int m_characterCount;
        //protected int m_visibleCharacterCount;
        //protected int m_visibleSpriteCount;
        protected int m_firstCharacterOfLine;
        protected int m_firstVisibleCharacterOfLine;
        protected int m_lastCharacterOfLine;
        protected int m_lastVisibleCharacterOfLine;
        protected int m_lineNumber;
        protected int m_lineVisibleCharacterCount;
        protected int m_pageNumber;
        protected float m_PageAscender;
        protected float m_maxTextAscender;
        protected float m_maxCapHeight;
        protected float m_ElementAscender;
        protected float m_ElementDescender;
        protected float m_maxLineAscender;
        protected float m_maxLineDescender;
        protected float m_startOfLineAscender;
        protected float m_startOfLineDescender;
        //protected float m_maxFontScale;
        protected float m_lineOffset;
        protected Extents m_meshExtents;


        // Fields used for vertex colors
        protected Color32 m_htmlColor = new Color(255, 255, 255, 128);
        protected TMP_TextProcessingStack<Color32> m_colorStack = new TMP_TextProcessingStack<Color32>(new Color32[16]);
        protected TMP_TextProcessingStack<Color32> m_underlineColorStack = new TMP_TextProcessingStack<Color32>(new Color32[16]);
        protected TMP_TextProcessingStack<Color32> m_strikethroughColorStack = new TMP_TextProcessingStack<Color32>(new Color32[16]);
        protected TMP_TextProcessingStack<HighlightState> m_HighlightStateStack = new TMP_TextProcessingStack<HighlightState>(new HighlightState[16]);

        protected TMP_ColorGradient m_colorGradientPreset;
        protected TMP_TextProcessingStack<TMP_ColorGradient> m_colorGradientStack = new TMP_TextProcessingStack<TMP_ColorGradient>(new TMP_ColorGradient[16]);
        protected bool m_colorGradientPresetIsTinted;

        protected float m_tabSpacing = 0;
        protected float m_spacing = 0;

        // STYLE TAGS
        protected TMP_TextProcessingStack<int>[] m_TextStyleStacks = new TMP_TextProcessingStack<int>[8];
        protected int m_TextStyleStackDepth = 0;

        protected TMP_TextProcessingStack<int> m_ItalicAngleStack = new TMP_TextProcessingStack<int>(new int[16]);
        protected int m_ItalicAngle;

        protected TMP_TextProcessingStack<int> m_actionStack = new TMP_TextProcessingStack<int>(new int[16]);

        protected float m_padding = 0;
        protected float m_baselineOffset; // Used for superscript and subscript.
        protected TMP_TextProcessingStack<float> m_baselineOffsetStack = new TMP_TextProcessingStack<float>(new float[16]);
        protected float m_xAdvance; // Tracks x advancement from character to character.

        protected TMP_TextElementType m_textElementType;
        protected TMP_TextElement m_cached_TextElement; // Glyph / Character information is cached into this variable which is faster than having to fetch from the Dictionary multiple times.

        protected SpecialCharacter m_Ellipsis;
        protected SpecialCharacter m_Underline;

        protected TMP_SpriteAsset m_defaultSpriteAsset;
        protected TMP_SpriteAsset m_currentSpriteAsset;
        protected int m_spriteCount = 0;
        protected int m_spriteIndex;
        protected int m_spriteAnimationID;
        //protected TMP_XmlTagStack<int> m_spriteAnimationStack = new TMP_XmlTagStack<int>(new int[16]);

        /// <summary>
        /// Method which derived classes need to override to load Font Assets.
        /// </summary>
        protected virtual void LoadFontAsset() { }

        /// <summary>
        /// Function called internally when a new shared material is assigned via the fontSharedMaterial property.
        /// </summary>
        /// <param name="mat"></param>
        protected virtual void SetSharedMaterial(Material mat) { }

        /// <summary>
        /// Function called internally when a new material is assigned via the fontMaterial property.
        /// </summary>
        protected virtual Material GetMaterial(Material mat) { return null; }

        /// <summary>
        /// Function called internally when assigning a new base material.
        /// </summary>
        /// <param name="mat"></param>
        protected virtual void SetFontBaseMaterial(Material mat) { }

        /// <summary>
        /// Method which returns an array containing the materials used by the text object.
        /// </summary>
        /// <returns></returns>
        protected virtual Material[] GetSharedMaterials() { return null; }

        /// <summary>
        ///
        /// </summary>
        protected virtual void SetSharedMaterials(Material[] materials) { }

        /// <summary>
        /// Method returning instances of the materials used by the text object.
        /// </summary>
        /// <returns></returns>
        protected virtual Material[] GetMaterials(Material[] mats) { return null; }

        /// <summary>
        /// Method to set the materials of the text and sub text objects.
        /// </summary>
        /// <param name="mats"></param>
        //protected virtual void SetMaterials (Material[] mats) { }

        /// <summary>
        /// Function used to create an instance of the material
        /// </summary>
        /// <param name="source"></param>
        /// <returns></returns>
        protected virtual Material CreateMaterialInstance(Material source)
        {
            Material mat = new Material(source);
            mat.shaderKeywords = source.shaderKeywords;
            mat.name += " (Instance)";

            return mat;
        }

        protected void SetVertexColorGradient(TMP_ColorGradient gradient)
        {
            if (gradient == null) return;

            m_fontColorGradient.bottomLeft = gradient.bottomLeft;
            m_fontColorGradient.bottomRight = gradient.bottomRight;
            m_fontColorGradient.topLeft = gradient.topLeft;
            m_fontColorGradient.topRight = gradient.topRight;

            SetVerticesDirty();
        }

        /// <summary>
        /// Function to control the sorting of the geometry of the text object.
        /// </summary>
        protected void SetTextSortingOrder(VertexSortingOrder order)
        {

        }

        /// <summary>
        /// Function to sort the geometry of the text object in accordance to the provided order.
        /// </summary>
        /// <param name="order"></param>
        protected void SetTextSortingOrder(int[] order)
        {

        }

        /// <summary>
        /// Function called internally to set the face color of the material. This will results in an instance of the material.
        /// </summary>
        /// <param name="color"></param>
        protected virtual void SetFaceColor(Color32 color) { }

        /// <summary>
        /// Function called internally to set the outline color of the material. This will results in an instance of the material.
        /// </summary>
        /// <param name="color"></param>
        protected virtual void SetOutlineColor(Color32 color) { }

        /// <summary>
        /// Function called internally to set the outline thickness property of the material. This will results in an instance of the material.
        /// </summary>
        /// <param name="thickness"></param>
        protected virtual void SetOutlineThickness(float thickness) { }

        /// <summary>
        /// Set the Render Queue and ZTest mode on the current material
        /// </summary>
        protected virtual void SetShaderDepth() { }

        /// <summary>
        /// Set the culling mode on the material.
        /// </summary>
        protected virtual void SetCulling() { }

        /// <summary>
        ///
        /// </summary>
        internal virtual void UpdateCulling() {}

        /// <summary>
        /// Get the padding value for the currently assigned material
        /// </summary>
        /// <returns></returns>
        protected virtual float GetPaddingForMaterial()
        {
            ShaderUtilities.GetShaderPropertyIDs();

            if (m_sharedMaterial == null) return 0;

            m_padding = ShaderUtilities.GetPadding(m_sharedMaterial, m_enableExtraPadding, m_isUsingBold);
            m_isMaskingEnabled = ShaderUtilities.IsMaskingEnabled(m_sharedMaterial);
            m_isSDFShader = m_sharedMaterial.HasProperty(ShaderUtilities.ID_WeightNormal);

            return m_padding;
        }


        /// <summary>
        /// Get the padding value for the given material
        /// </summary>
        /// <returns></returns>
        protected virtual float GetPaddingForMaterial(Material mat)
        {
            if (mat == null)
                return 0;

            m_padding = ShaderUtilities.GetPadding(mat, m_enableExtraPadding, m_isUsingBold);
            m_isMaskingEnabled = ShaderUtilities.IsMaskingEnabled(m_sharedMaterial);
            m_isSDFShader = mat.HasProperty(ShaderUtilities.ID_WeightNormal);

            return m_padding;
        }


        /// <summary>
        /// Method to return the local corners of the Text Container or RectTransform.
        /// </summary>
        /// <returns></returns>
        protected virtual Vector3[] GetTextContainerLocalCorners() { return null; }


        // PUBLIC FUNCTIONS
        protected bool m_ignoreActiveState;
        /// <summary>
        /// Function to force regeneration of the text object before its normal process time. This is useful when changes to the text object properties need to be applied immediately.
        /// </summary>
        /// <param name="ignoreActiveState">Ignore Active State of text objects. Inactive objects are ignored by default.</param>
        /// <param name="forceTextReparsing">Force re-parsing of the text.</param>
        public virtual void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false) { }


        /// <summary>
        /// Method used for resetting vertex layout when switching to and from Volumetric Text mode.
        /// </summary>
        /// <param name="updateMesh"></param>
        //protected virtual void ResetVertexLayout() { }


        /// <summary>
        /// Internal function used by the Text Input Field to populate TMP_TextInfo data.
        /// </summary>
        internal void SetTextInternal(string text)
        {
            m_text = text;
            m_renderMode = TextRenderFlags.DontRender;
            m_isInputParsingRequired = true;
            ForceMeshUpdate();
            m_renderMode = TextRenderFlags.Render;
        }

        /// <summary>
        /// Function to force the regeneration of the text object.
        /// </summary>
        /// <param name="flags"> Flags to control which portions of the geometry gets uploaded.</param>
        //public virtual void ForceMeshUpdate(TMP_VertexDataUpdateFlags flags) { }


        /// <summary>
        /// Function to update the geometry of the main and sub text objects.
        /// </summary>
        /// <param name="mesh"></param>
        /// <param name="index"></param>
        public virtual void UpdateGeometry(Mesh mesh, int index) { }


        /// <summary>
        /// Function to push the updated vertex data into the mesh and renderer.
        /// </summary>
        public virtual void UpdateVertexData(TMP_VertexDataUpdateFlags flags) { }


        /// <summary>
        /// Function to push the updated vertex data into the mesh and renderer.
        /// </summary>
        public virtual void UpdateVertexData() { }


        /// <summary>
        /// Function to push a new set of vertices to the mesh.
        /// </summary>
        /// <param name="vertices"></param>
        public virtual void SetVertices(Vector3[] vertices) { }


        /// <summary>
        /// Function to be used to force recomputing of character padding when Shader / Material properties have been changed via script.
        /// </summary>
        public virtual void UpdateMeshPadding() { }


        /// <summary>
        ///
        /// </summary>
        //public virtual new void UpdateGeometry() { }


        /// <summary>
        /// Tweens the CanvasRenderer color associated with this Graphic.
        /// </summary>
        /// <param name="targetColor">Target color.</param>
        /// <param name="duration">Tween duration.</param>
        /// <param name="ignoreTimeScale">Should ignore Time.scale?</param>
        /// <param name="useAlpha">Should also Tween the alpha channel?</param>
        public override void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
        {
            base.CrossFadeColor(targetColor, duration, ignoreTimeScale, useAlpha);
            InternalCrossFadeColor(targetColor, duration, ignoreTimeScale, useAlpha);
        }


        /// <summary>
        /// Tweens the alpha of the CanvasRenderer color associated with this Graphic.
        /// </summary>
        /// <param name="alpha">Target alpha.</param>
        /// <param name="duration">Duration of the tween in seconds.</param>
        /// <param name="ignoreTimeScale">Should ignore Time.scale?</param>
        public override void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
        {
            base.CrossFadeAlpha(alpha, duration, ignoreTimeScale);
            InternalCrossFadeAlpha(alpha, duration, ignoreTimeScale);
        }


        /// <summary>
        ///
        /// </summary>
        /// <param name="targetColor"></param>
        /// <param name="duration"></param>
        /// <param name="ignoreTimeScale"></param>
        /// <param name="useAlpha"></param>
        /// <param name="useRGB"></param>
        protected virtual void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha) { }


        /// <summary>
        ///
        /// </summary>
        /// <param name="alpha"></param>
        /// <param name="duration"></param>
        /// <param name="ignoreTimeScale"></param>
        protected virtual void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale) { }


        /// <summary>
        /// Method to parse the input text based on its source
        /// </summary>
        protected void ParseInputText()
        {
            //Debug.Log("Re-parsing Text.");
            ////Profiler.BeginSample("ParseInputText()");

            m_isInputParsingRequired = false;

            switch (m_inputSource)
            {
                case TextInputSources.String:
                case TextInputSources.Text:
                    if (m_TextPreprocessor != null)
                        m_InternalParsingBufferSize = StringToInternalParsingBuffer(m_TextPreprocessor.PreprocessText(m_text), ref m_InternalParsingBuffer);
                    else
                        m_InternalParsingBufferSize = StringToInternalParsingBuffer(m_text, ref m_InternalParsingBuffer);
                    break;
                case TextInputSources.SetText:
                    m_InternalParsingBufferSize = CharArrayToInternalParsingBuffer(m_input_CharArray, ref m_InternalParsingBuffer);
                    break;
                case TextInputSources.SetCharArray:
                    break;
            }

            SetArraySizes(m_InternalParsingBuffer);
            ////Profiler.EndSample();
        }


        /// <summary>
        ///
        /// </summary>
        /// <param name="text"></param>
        public void SetText(string text, bool syncTextInputBox = true)
        {
            this.text = text;
        }


        /// <summary>
        /// <para>Formatted string containing a pattern and a value representing the text to be rendered.</para>
        /// <para>Ex. TMP_Text.SetText("A = {0}, B = {1:00}, C = {2:000.0}", 10.75f, 10.75f, 10.75f);</para>
        /// <para>Results "A = 10.75, B = 11, C = 010.8."</para>
        /// </summary>
        /// <param name="text">String containing the pattern.</param>
        /// <param name="arg0">First float value.</param>
        public void SetText(string text, float arg0)
        {
            SetText(text, arg0, 0, 0, 0, 0, 0, 0, 0);
        }

        /// <summary>
        /// <para>Formatted string containing a pattern and a value representing the text to be rendered.</para>
        /// <para>Ex. TMP_Text.SetText("A = {0}, B = {1:00}, C = {2:000.0}", 10.75f, 10.75f, 10.75f);</para>
        /// <para>Results "A = 10.75, B = 11, C = 010.8."</para>
        /// </summary>
        /// <param name="text">String containing the pattern.</param>
        /// <param name="arg0">First float value.</param>
        /// <param name="arg1">Second float value.</param>
        public void SetText(string text, float arg0, float arg1)
        {
            SetText(text, arg0, arg1, 0, 0, 0, 0, 0, 0);
        }

        /// <summary>
        /// <para>Formatted string containing a pattern and a value representing the text to be rendered.</para>
        /// <para>Ex. TMP_Text.SetText("A = {0}, B = {1:00}, C = {2:000.0}", 10.75f, 10.75f, 10.75f);</para>
        /// <para>Results "A = 10.75, B = 11, C = 010.8."</para>
        /// </summary>
        /// <param name="text">String containing the pattern.</param>
        /// <param name="arg0">First float value.</param>
        /// <param name="arg1">Second float value.</param>
        /// <param name="arg2">Third float value.</param>
        public void SetText(string text, float arg0, float arg1, float arg2)
        {
            SetText(text, arg0, arg1, arg2, 0, 0, 0, 0, 0);
        }

        /// <summary>
        /// <para>Formatted string containing a pattern and a value representing the text to be rendered.</para>
        /// <para>Ex. TMP_Text.SetText("A = {0}, B = {1:00}, C = {2:000.0}", 10.75f, 10.75f, 10.75f);</para>
        /// <para>Results "A = 10.75, B = 11, C = 010.8."</para>
        /// </summary>
        /// <param name="text">String containing the pattern.</param>
        /// <param name="arg0">First float value.</param>
        /// <param name="arg1">Second float value.</param>
        /// <param name="arg2">Third float value.</param>
        /// <param name="arg3">Forth float value.</param>
        public void SetText(string text, float arg0, float arg1, float arg2, float arg3)
        {
            SetText(text, arg0, arg1, arg2, arg3, 0, 0, 0, 0);
        }

        /// <summary>
        /// <para>Formatted string containing a pattern and a value representing the text to be rendered.</para>
        /// <para>Ex. TMP_Text.SetText("A = {0}, B = {1:00}, C = {2:000.0}", 10.75f, 10.75f, 10.75f);</para>
        /// <para>Results "A = 10.75, B = 11, C = 010.8."</para>
        /// </summary>
        /// <param name="text">String containing the pattern.</param>
        /// <param name="arg0">First float value.</param>
        /// <param name="arg1">Second float value.</param>
        /// <param name="arg2">Third float value.</param>
        /// <param name="arg3">Forth float value.</param>
        /// <param name="arg4">Fifth float value.</param>
        public void SetText(string text, float arg0, float arg1, float arg2, float arg3, float arg4)
        {
            SetText(text, arg0, arg1, arg2, arg3, arg4, 0, 0, 0);
        }

        /// <summary>
        /// <para>Formatted string containing a pattern and a value representing the text to be rendered.</para>
        /// <para>Ex. TMP_Text.SetText("A = {0}, B = {1:00}, C = {2:000.0}", 10.75f, 10.75f, 10.75f);</para>
        /// <para>Results "A = 10.75, B = 11, C = 010.8."</para>
        /// </summary>
        /// <param name="text">String containing the pattern.</param>
        /// <param name="arg0">First float value.</param>
        /// <param name="arg1">Second float value.</param>
        /// <param name="arg2">Third float value.</param>
        /// <param name="arg3">Forth float value.</param>
        /// <param name="arg4">Fifth float value.</param>
        /// <param name="arg5">Sixth float value.</param>
        public void SetText(string text, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5)
        {
            SetText(text, arg0, arg1, arg2, arg3, arg4, arg5, 0, 0);
        }

        /// <summary>
        /// <para>Formatted string containing a pattern and a value representing the text to be rendered.</para>
        /// <para>Ex. TMP_Text.SetText("A = {0}, B = {1:00}, C = {2:000.0}", 10.75f, 10.75f, 10.75f);</para>
        /// <para>Results "A = 10.75, B = 11, C = 010.8."</para>
        /// </summary>
        /// <param name="text">String containing the pattern.</param>
        /// <param name="arg0">First float value.</param>
        /// <param name="arg1">Second float value.</param>
        /// <param name="arg2">Third float value.</param>
        /// <param name="arg3">Forth float value.</param>
        /// <param name="arg4">Fifth float value.</param>
        /// <param name="arg5">Sixth float value.</param>
        /// <param name="arg6">Seventh float value.</param>
        public void SetText(string text, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6)
        {
            SetText(text, arg0, arg1, arg2, arg3, arg4, arg5, arg6, 0);
        }

        /// <summary>
        /// <para>Formatted string containing a pattern and a value representing the text to be rendered.</para>
        /// <para>Ex. TMP_Text.SetText("A = {0}, B = {1:00}, C = {2:000.0}", 10.75f, 10.75f, 10.75f);</para>
        /// <para>Results "A = 10.75, B = 11, C = 010.8."</para>
        /// </summary>
        /// <param name="text">String containing the pattern.</param>
        /// <param name="arg0">First float value.</param>
        /// <param name="arg1">Second float value.</param>
        /// <param name="arg2">Third float value.</param>
        /// <param name="arg3">Forth float value.</param>
        /// <param name="arg4">Fifth float value.</param>
        /// <param name="arg5">Sixth float value.</param>
        /// <param name="arg6">Seventh float value.</param>
        /// <param name="arg7">Eighth float value.</param>
        public void SetText(string text, float arg0, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7)
        {
            int argIndex = 0;
            int padding = 0;
            int decimalPrecision = 0;

            int readFlag = 0;

            int readIndex = 0;
            int writeIndex = 0;

            for (; readIndex < text.Length; readIndex++)
            {
                char c = text[readIndex];

                if (c == '{')
                {
                    readFlag = 1;
                    continue;
                }

                if (c == '}')
                {
                    // Add arg(index) to array
                    switch (argIndex)
                    {
                        case 0:
                            AddFloatToCharArray(arg0, padding, decimalPrecision, ref writeIndex);
                            break;
                        case 1:
                            AddFloatToCharArray(arg1, padding, decimalPrecision, ref writeIndex);
                            break;
                        case 2:
                            AddFloatToCharArray(arg2, padding, decimalPrecision, ref writeIndex);
                            break;
                        case 3:
                            AddFloatToCharArray(arg3, padding, decimalPrecision, ref writeIndex);
                            break;
                        case 4:
                            AddFloatToCharArray(arg4, padding, decimalPrecision, ref writeIndex);
                            break;
                        case 5:
                            AddFloatToCharArray(arg5, padding, decimalPrecision, ref writeIndex);
                            break;
                        case 6:
                            AddFloatToCharArray(arg6, padding, decimalPrecision, ref writeIndex);
                            break;
                        case 7:
                            AddFloatToCharArray(arg7, padding, decimalPrecision, ref writeIndex);
                            break;
                    }

                    argIndex = 0;
                    readFlag = 0;
                    padding = 0;
                    decimalPrecision = 0;
                    continue;
                }

                // Read Argument index
                if (readFlag == 1)
                {
                    if (c >= '0' && c <= '8')
                    {
                        argIndex = c - 48;
                        readFlag = 2;
                        continue;
                    }
                }

                // Read formatting for integral part of the value
                if (readFlag == 2)
                {
                    // Skip ':' separator
                    if (c == ':')
                        continue;

                    // Done reading integral formatting and value
                    if (c == '.')
                    {
                        readFlag = 3;
                        continue;
                    }

                    if (c == '#')
                    {
                        // do something
                        continue;
                    }

                    if (c == '0')
                    {
                        padding += 1;
                        continue;
                    }

                    if (c == ',')
                    {
                        // Use commas in the integral value
                        continue;
                    }

                    // Legacy mode
                    if (c >= '1' && c <= '9')
                    {
                        decimalPrecision = c - 48;
                        continue;
                    }
                }

                // Read Decimal Precision value
                if (readFlag == 3)
                {
                    if (c == '0')
                    {
                        decimalPrecision += 1;
                        continue;
                    }
                }

                // Write value
                m_input_CharArray[writeIndex] = c;
                writeIndex += 1;
            }

            m_input_CharArray[writeIndex] = (char)0;
            m_charArray_Length = writeIndex; // Set the length to where this '0' termination is.

            #if UNITY_EDITOR
            // Create new string to be displayed in the Input Text Box of the Editor Panel.
            m_text = new string(m_input_CharArray, 0, writeIndex - 1);
            #endif

            m_inputSource = TextInputSources.SetText;
            m_isInputParsingRequired = true;
            m_havePropertiesChanged = true;

            SetVerticesDirty();
            SetLayoutDirty();
        }


        /// <summary>
        /// Set the text using a StringBuilder.
        /// </summary>
        /// <description>
        /// Using a StringBuilder instead of concatenating strings prevents memory pollution with temporary objects.
        /// </description>
        /// <param name="text">StringBuilder with text to display.</param>
        public void SetText(StringBuilder text)
        {
            m_inputSource = TextInputSources.SetCharArray;

            #if UNITY_EDITOR
            // Set the text in the Text Input Box in the Unity Editor only.
            m_text = text.ToString();
            #endif

            m_InternalParsingBufferSize = StringBuilderToInternalParsingBuffer(text, ref m_InternalParsingBuffer);

            m_isInputParsingRequired = true;
            m_havePropertiesChanged = true;

            SetVerticesDirty();
            SetLayoutDirty();
        }


        /// <summary>
        /// Set the text using a char array.
        /// </summary>
        /// <param name="text"></param>
        public void SetText(char[] text)
        {
            SetCharArray(text);
        }


        /// <summary>
        /// Set the text using a char array with specified starting character and length.
        /// </summary>
        /// <param name="text">Source char array that contains the Unicode characters</param>
        /// <param name="start">The starting character index in the array.</param>
        /// <param name="length">The number of characters to be set.</param>
        public void SetText(char[] text, int start, int length)
        {
            SetCharArray(text, start, length);
        }


        /// <summary>
        /// Character array containing the text to be displayed.
        /// </summary>
        /// <param name="sourceText"></param>
        public void SetCharArray(char[] sourceText)
        {
            int characterCount = sourceText == null ? 0 : sourceText.Length;

            #if UNITY_EDITOR
            // Create new string to be displayed in the Input Text Box of the Editor Panel.
            if (characterCount == 0)
                m_text = string.Empty;
            else
                m_text = new string(sourceText);
            #endif

            // Early exit if string is null or empty
            if (characterCount == 0)
            {
                m_InternalParsingBuffer[0].unicode = 0;
                m_InternalParsingBufferSize = 0;
                return;
            }

            // Make sure parsing buffer is large enough to handle the required text.
            if (m_InternalParsingBuffer.Length < characterCount)
                ResizeInternalArray(ref m_InternalParsingBuffer, characterCount);

            // Clear Style stacks.
            for (int i = 0; i < m_TextStyleStacks.Length; i++)
                m_TextStyleStacks[i].SetDefault(0);

            m_TextStyleStackDepth = 0;
            int writeIndex = 0;

            // Insert Opening Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertOpeningStyleTag(m_TextStyle, 0, ref m_InternalParsingBuffer, ref writeIndex);

            for (int i = 0; sourceText != null && i < sourceText.Length; i++)
            {
                if (sourceText[i] == 92 && i < sourceText.Length - 1)
                {
                    switch ((int)sourceText[i + 1])
                    {
                        case 110: // \n LineFeed
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 10;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 114: // \r LineFeed
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 13;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 116: // \t Tab
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 9;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 118: // \v Vertical tab used as soft line break
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 11;
                            i += 1;
                            writeIndex += 1;
                            continue;
                    }
                }

                // Handle inline replacement of <stlye> and <br> tags.
                if (sourceText[i] == 60)
                {
                    if (IsTagName(ref sourceText, "<BR>", i))
                    {
                        if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                        m_InternalParsingBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<NBSP>", i))
                    {
                        if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                        m_InternalParsingBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<ZWSP>", i))
                    {
                        if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                        m_InternalParsingBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<STYLE=", i))
                    {
                        int srcOffset;
                        if (ReplaceOpeningStyleTag(ref sourceText, i, out srcOffset, ref m_InternalParsingBuffer, ref writeIndex))
                        {
                            i = srcOffset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref sourceText, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref sourceText, i, ref m_InternalParsingBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                m_InternalParsingBuffer[writeIndex].unicode = sourceText[i];
                writeIndex += 1;
            }

            m_TextStyleStackDepth = 0;

            // Insert Closing Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertClosingStyleTag(ref m_InternalParsingBuffer, ref writeIndex);

            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

            m_InternalParsingBuffer[writeIndex].unicode = 0;
            m_InternalParsingBufferSize = writeIndex;

            m_inputSource = TextInputSources.SetCharArray;
            m_isInputParsingRequired = true;
            m_havePropertiesChanged = true;

            SetVerticesDirty();
            SetLayoutDirty();
        }


        /// <summary>
        /// Character array containing the text to be displayed.
        /// </summary>
        /// <param name="sourceText"></param>
        public void SetCharArray(char[] sourceText, int start, int length)
        {
            int characterCount = 0;

            // Range check
            if (sourceText != null)
            {
                start = Mathf.Clamp(start, 0, sourceText.Length);
                length = Mathf.Clamp(length, 0, start + length < sourceText.Length ? length : sourceText.Length - start);

                characterCount = length;
            }

            #if UNITY_EDITOR
            // Create new string to be displayed in the Input Text Box of the Editor Panel.
            if (characterCount == 0)
                m_text = string.Empty;
            else
                m_text = new string(sourceText, start, length);
            #endif

            // Early exit if string is null or empty
            if (characterCount == 0)
            {
                m_InternalParsingBuffer[0].unicode = 0;
                m_InternalParsingBufferSize = 0;
                return;
            }

            // Make sure parsing buffer is large enough to handle the required text.
            if (m_InternalParsingBuffer.Length < characterCount)
                ResizeInternalArray(ref m_InternalParsingBuffer, characterCount);

            // Clear Style stacks.
            for (int j = 0; j < m_TextStyleStacks.Length; j++)
                m_TextStyleStacks[j].SetDefault(0);

            m_TextStyleStackDepth = 0;
            int writeIndex = 0;

            // Insert Opening Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertOpeningStyleTag(m_TextStyle, 0, ref m_InternalParsingBuffer, ref writeIndex);

            int i = start;
            int end = start + length;
            for (; i < end; i++)
            {
                if (sourceText[i] == 92 && i < length - 1)
                {
                    switch ((int)sourceText[i + 1])
                    {
                        case 110: // \n LineFeed
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 10;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 114: // \r Carriage Return
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 13;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 116: // \t Tab
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 9;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 118: // \v Vertical tab used as soft line break
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 11;
                            i += 1;
                            writeIndex += 1;
                            continue;
                    }
                }

                // Handle inline replacement of <stlye> and <br> tags.
                if (sourceText[i] == 60)
                {
                    if (IsTagName(ref sourceText, "<BR>", i))
                    {
                        if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                        m_InternalParsingBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<NBSP>", i))
                    {
                        if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                        m_InternalParsingBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<ZWSP>", i))
                    {
                        if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                        m_InternalParsingBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<STYLE=", i))
                    {
                        int srcOffset;
                        if (ReplaceOpeningStyleTag(ref sourceText, i, out srcOffset, ref m_InternalParsingBuffer, ref writeIndex))
                        {
                            i = srcOffset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref sourceText, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref sourceText, i, ref m_InternalParsingBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                m_InternalParsingBuffer[writeIndex].unicode = sourceText[i];
                writeIndex += 1;
            }

            m_TextStyleStackDepth = 0;

            // Insert Closing Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertClosingStyleTag(ref m_InternalParsingBuffer, ref writeIndex);

            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

            m_InternalParsingBuffer[writeIndex].unicode = 0;

            m_inputSource = TextInputSources.SetCharArray;
            m_havePropertiesChanged = true;
            m_isInputParsingRequired = true;

            SetVerticesDirty();
            SetLayoutDirty();
        }


        /// <summary>
        /// Character array containing the text to be displayed.
        /// </summary>
        /// <param name="sourceText"></param>
        public void SetCharArray(int[] sourceText, int start, int length)
        {
            // Initialize internal character buffer if necessary
            if (m_InternalParsingBuffer == null) m_InternalParsingBuffer = new UnicodeChar[8];

            #if UNITY_EDITOR
            // Create new string to be displayed in the Input Text Box of the Editor Panel.
            if (sourceText == null || sourceText.Length == 0 || length == 0)
            {
                m_text = string.Empty;
                start = 0;
                length = 0;
            }
            else
            {
                m_text = sourceText.IntToString(start, length);
            }
            #endif

            // Clear Style stacks.
            for (int j = 0; j < m_TextStyleStacks.Length; j++)
                m_TextStyleStacks[j].SetDefault(0);

            m_TextStyleStackDepth = 0;
            int writeIndex = 0;

            // Insert Opening Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertOpeningStyleTag(m_TextStyle, 0, ref m_InternalParsingBuffer, ref writeIndex);

            int end = start + length;
            for (int i = start; i < end && i < sourceText.Length; i++)
            {
                if (sourceText[i] == 92 && i < length - 1)
                {
                    switch ((int)sourceText[i + 1])
                    {
                        case 110: // \n LineFeed
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 10;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 114: // \r LineFeed
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 13;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 116: // \t Tab
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 9;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 118: // \v Vertical tab used as soft line break
                            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                            m_InternalParsingBuffer[writeIndex].unicode = 11;
                            i += 1;
                            writeIndex += 1;
                            continue;
                    }
                }

                // Handle inline replacement of <stlye> and <br> tags.
                if (sourceText[i] == 60)
                {
                    if (IsTagName(ref sourceText, "<BR>", i))
                    {
                        if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                        m_InternalParsingBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<NBSP>", i))
                    {
                        if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                        m_InternalParsingBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<ZWSP>", i))
                    {
                        if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                        m_InternalParsingBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<STYLE=", i))
                    {
                        int srcOffset;
                        if (ReplaceOpeningStyleTag(ref sourceText, i, out srcOffset, ref m_InternalParsingBuffer, ref writeIndex))
                        {
                            i = srcOffset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref sourceText, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref sourceText, i, ref m_InternalParsingBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                m_InternalParsingBuffer[writeIndex].unicode = sourceText[i];
                writeIndex += 1;
            }

            m_TextStyleStackDepth = 0;

            // Insert Closing Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertClosingStyleTag(ref m_InternalParsingBuffer, ref writeIndex);

            if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

            m_InternalParsingBuffer[writeIndex].unicode = 0;

            m_inputSource = TextInputSources.SetCharArray;
            m_havePropertiesChanged = true;
            m_isInputParsingRequired = true;

            SetVerticesDirty();
            SetLayoutDirty();
        }


        /// <summary>
        /// Copies Content of formatted SetText() to charBuffer.
        /// </summary>
        /// <param name="sourceText"></param>
        /// <param name="internalParsingArray"></param>
        protected int CharArrayToInternalParsingBuffer(char[] sourceText, ref UnicodeChar[] internalParsingArray)
        {
            int characterCount = sourceText == null ? 0 : sourceText.Length;

            #if UNITY_EDITOR
            // Create new string to be displayed in the Input Text Box of the Editor Panel.
            // This results in allocations in the Unity Editor only
            if (characterCount == 0)
                m_text = string.Empty;
            else
                m_text = new string(sourceText);
            #endif

            // Early exit if string is null or empty
            if (characterCount == 0)
            {
                if (internalParsingArray != null)
                    internalParsingArray[0].unicode = 0;

                return 0;
            }

            // Make sure parsing buffer is large enough to handle the required text.
            if (internalParsingArray == null)
                internalParsingArray = new UnicodeChar[characterCount];
            else if (internalParsingArray.Length < characterCount)
                ResizeInternalArray(ref internalParsingArray, characterCount);

            // Clear Style stacks.
            for (int j = 0; j < m_TextStyleStacks.Length; j++)
                m_TextStyleStacks[j].SetDefault(0);

            m_TextStyleStackDepth = 0;
            int writeIndex = 0;

            // Insert Opening Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertOpeningStyleTag(m_TextStyle, 0, ref internalParsingArray, ref writeIndex);

            for (int i = 0; i < m_charArray_Length; i++)
            {
                // Handle UTF-32 in the input text (string).
                if (char.IsHighSurrogate(sourceText[i]) && char.IsLowSurrogate(sourceText[i + 1]))
                {
                    if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                    internalParsingArray[writeIndex].unicode = char.ConvertToUtf32(sourceText[i], sourceText[i + 1]);
                    i += 1;
                    writeIndex += 1;
                    continue;
                }

                // Handle inline replacement of <stlye> and <br> tags.
                if (sourceText[i] == 60)
                {
                    if (IsTagName(ref sourceText, "<BR>", i))
                    {
                        if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                        internalParsingArray[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<NBSP>", i))
                    {
                        if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                        internalParsingArray[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<ZWSP>", i))
                    {
                        if (writeIndex == m_InternalParsingBuffer.Length) ResizeInternalArray(ref m_InternalParsingBuffer);

                        m_InternalParsingBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<STYLE=", i))
                    {
                        int srcOffset;
                        if (ReplaceOpeningStyleTag(ref sourceText, i, out srcOffset, ref internalParsingArray, ref writeIndex))
                        {
                            i = srcOffset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref sourceText, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref sourceText, i, ref internalParsingArray, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                internalParsingArray[writeIndex].unicode = sourceText[i];
                writeIndex += 1;
            }

            m_TextStyleStackDepth = 0;

            // Insert Closing Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertClosingStyleTag(ref internalParsingArray, ref writeIndex);

            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

            internalParsingArray[writeIndex].unicode = 0;

            return writeIndex;
        }


        /// <summary>
        /// Method to store the content of a string into an integer array.
        /// </summary>
        /// <param name="sourceText"></param>
        /// <param name="internalParsingArray"></param>
        protected int StringToInternalParsingBuffer(string sourceText, ref UnicodeChar[] internalParsingArray)
        {
            int characterCount = sourceText == null ? 0 : sourceText.Length;

            // Early exit if string is null or empty
            if (characterCount == 0)
            {
                if (internalParsingArray != null)
                    internalParsingArray[0].unicode = 0;

                return 0;
            }

            // Allocate internal buffers that are large enough to handle the required text.
            if (internalParsingArray == null)
                internalParsingArray = new UnicodeChar[characterCount];
            else if (internalParsingArray.Length < characterCount)
                ResizeInternalArray(ref internalParsingArray, characterCount);

            // Clear Style stacks.
            for (int j = 0; j < m_TextStyleStacks.Length; j++)
                m_TextStyleStacks[j].SetDefault(0);

            m_TextStyleStackDepth = 0;
            int writeIndex = 0;

            // Insert Opening Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertOpeningStyleTag(m_TextStyle, 0, ref internalParsingArray, ref writeIndex);

            for (int i = 0; i < sourceText.Length; i++)
            {
                if (m_inputSource == TextInputSources.Text && sourceText[i] == 92 && sourceText.Length > i + 1)
                {
                    switch ((int)sourceText[i + 1])
                    {
                        case 85: // \U00000000 for UTF-32 Unicode
                            if (sourceText.Length > i + 9)
                            {
                                if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                                internalParsingArray[writeIndex].unicode = GetUTF32(sourceText, i + 2);
                                internalParsingArray[writeIndex].stringIndex = i;
                                internalParsingArray[writeIndex].length = 10;

                                i += 9;
                                writeIndex += 1;
                                continue;
                            }
                            break;
                        case 92: // \ escape
                            if (!m_parseCtrlCharacters) break;

                            if (sourceText.Length <= i + 2) break;

                            if (writeIndex + 2 > internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                            internalParsingArray[writeIndex].unicode = sourceText[i + 1];
                            internalParsingArray[writeIndex + 1].unicode = sourceText[i + 2];
                            i += 2;
                            writeIndex += 2;
                            continue;
                        case 110: // \n LineFeed
                            if (!m_parseCtrlCharacters) break;

                            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                            internalParsingArray[writeIndex].unicode = 10;
                            internalParsingArray[writeIndex].stringIndex = i;
                            internalParsingArray[writeIndex].length = 1;

                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 114: // \r
                            if (!m_parseCtrlCharacters) break;

                            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                            internalParsingArray[writeIndex].unicode = 13;
                            internalParsingArray[writeIndex].stringIndex = i;
                            internalParsingArray[writeIndex].length = 1;

                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 116: // \t Tab
                            if (!m_parseCtrlCharacters) break;

                            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                            internalParsingArray[writeIndex].unicode = 9;
                            internalParsingArray[writeIndex].stringIndex = i;
                            internalParsingArray[writeIndex].length = 1;

                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 117: // \u0000 for UTF-16 Unicode
                            if (sourceText.Length > i + 5)
                            {
                                if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                                internalParsingArray[writeIndex].unicode = GetUTF16(sourceText, i + 2);
                                internalParsingArray[writeIndex].stringIndex = i;
                                internalParsingArray[writeIndex].length = 6;

                                i += 5;
                                writeIndex += 1;
                                continue;
                            }
                            break;
                        case 118: // \v Vertical tab used as soft line break
                            if (!m_parseCtrlCharacters) break;

                            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                            internalParsingArray[writeIndex].unicode = 11;
                            internalParsingArray[writeIndex].stringIndex = i;
                            internalParsingArray[writeIndex].length = 1;

                            i += 1;
                            writeIndex += 1;
                            continue;
                    }
                }

                // Handle UTF-32 in the input text (string). // Not sure this is needed //
                if (char.IsHighSurrogate(sourceText[i]) && char.IsLowSurrogate(sourceText[i + 1]))
                {
                    if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                    internalParsingArray[writeIndex].unicode = char.ConvertToUtf32(sourceText[i], sourceText[i + 1]);
                    internalParsingArray[writeIndex].stringIndex = i;
                    internalParsingArray[writeIndex].length = 2;

                    i += 1;
                    writeIndex += 1;
                    continue;
                }

                //// Handle inline replacement of <stlye> and <br> tags.
                if (sourceText[i] == 60 && m_isRichText)
                {
                    if (IsTagName(ref sourceText, "<BR>", i))
                    {
                        if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                        internalParsingArray[writeIndex].unicode = 10;
                        internalParsingArray[writeIndex].stringIndex = i;
                        internalParsingArray[writeIndex].length = 1;

                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<NBSP>", i))
                    {
                        if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                        internalParsingArray[writeIndex].unicode = 160;
                        internalParsingArray[writeIndex].stringIndex = i;
                        internalParsingArray[writeIndex].length = 1;

                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<ZWSP>", i))
                    {
                        if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                        internalParsingArray[writeIndex].unicode = 0x200B;
                        internalParsingArray[writeIndex].stringIndex = i;
                        internalParsingArray[writeIndex].length = 1;

                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<STYLE=", i))
                    {
                        int srcOffset;
                        if (ReplaceOpeningStyleTag(ref sourceText, i, out srcOffset, ref internalParsingArray, ref writeIndex))
                        {
                            i = srcOffset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref sourceText, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref sourceText, i, ref internalParsingArray, ref writeIndex);

                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                internalParsingArray[writeIndex].unicode = sourceText[i];
                internalParsingArray[writeIndex].stringIndex = writeIndex;
                internalParsingArray[writeIndex].length = 1;

                writeIndex += 1;
            }

            m_TextStyleStackDepth = 0;

            // Insert Closing Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertClosingStyleTag(ref internalParsingArray, ref writeIndex);

            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

            internalParsingArray[writeIndex].unicode = 0;
            return writeIndex;
        }


        /// <summary>
        /// Copy contents of StringBuilder into int array.
        /// </summary>
        /// <param name="sourceText">Text to copy.</param>
        /// <param name="internalParsingArray">Array to store contents.</param>
        protected int StringBuilderToInternalParsingBuffer(StringBuilder sourceText, ref UnicodeChar[] internalParsingArray)
        {
            int characterCount = sourceText == null ? 0 : sourceText.Length;

            #if UNITY_EDITOR
            // Create new string to be displayed in the Input Text Box of the Editor Panel.
            // This results in allocations in the Unity Editor only
            if (characterCount == 0)
                m_text = string.Empty;
            else
                m_text = sourceText.ToString();
            #endif

            // Early exit if string is null or empty
            if (characterCount == 0)
            {
                if (internalParsingArray != null)
                    internalParsingArray[0].unicode = 0;

                return 0;
            }

            // Make sure parsing buffer is large enough to handle the required text.
            if (internalParsingArray == null)
                internalParsingArray = new UnicodeChar[characterCount];
            else if (internalParsingArray.Length < characterCount)
                ResizeInternalArray(ref internalParsingArray, characterCount);

            // Clear Style stacks.
            for (int j = 0; j < m_TextStyleStacks.Length; j++)
                m_TextStyleStacks[j].SetDefault(0);

            m_TextStyleStackDepth = 0;
            int writeIndex = 0;

            // Insert Opening Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertOpeningStyleTag(m_TextStyle, 0, ref internalParsingArray, ref writeIndex);

            for (int i = 0; i < sourceText.Length; i++)
            {
                if (m_parseCtrlCharacters && sourceText[i] == 92 && sourceText.Length > i + 1)
                {
                    switch ((int)sourceText[i + 1])
                    {
                        case 85: // \U00000000 for UTF-32 Unicode
                            if (sourceText.Length > i + 9)
                            {
                                if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                                internalParsingArray[writeIndex].unicode = GetUTF32(sourceText, i + 2);
                                i += 9;
                                writeIndex += 1;
                                continue;
                            }
                            break;
                        case 92: // \ escape
                            if (sourceText.Length <= i + 2) break;

                            if (writeIndex + 2 > internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                            internalParsingArray[writeIndex].unicode = sourceText[i + 1];
                            internalParsingArray[writeIndex + 1].unicode = sourceText[i + 2];
                            i += 2;
                            writeIndex += 2;
                            continue;
                        case 110: // \n LineFeed
                            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                            internalParsingArray[writeIndex].unicode = 10;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 114: // \r
                            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                            internalParsingArray[writeIndex].unicode = 13;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 116: // \t Tab
                            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                            internalParsingArray[writeIndex].unicode = 9;
                            i += 1;
                            writeIndex += 1;
                            continue;
                        case 117: // \u0000 for UTF-16 Unicode
                            if (sourceText.Length > i + 5)
                            {
                                if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                                internalParsingArray[writeIndex].unicode = GetUTF16(sourceText, i + 2);
                                i += 5;
                                writeIndex += 1;
                                continue;
                            }
                            break;
                        case 118: // \v Vertical tab used as soft line break
                            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                            internalParsingArray[writeIndex].unicode = 11;
                            i += 1;
                            writeIndex += 1;
                            continue;
                    }
                }

                // Handle UTF-32 in the input text (string).
                if (char.IsHighSurrogate(sourceText[i]) && char.IsLowSurrogate(sourceText[i + 1]))
                {
                    if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                    internalParsingArray[writeIndex].unicode = char.ConvertToUtf32(sourceText[i], sourceText[i + 1]);
                    i += 1;
                    writeIndex += 1;
                    continue;
                }

                // Handle inline replacement of <stlye> and <br> tags.
                if (sourceText[i] == 60)
                {
                    if (IsTagName(ref sourceText, "<BR>", i))
                    {
                        if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                        internalParsingArray[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<NBSP>", i))
                    {
                        if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                        internalParsingArray[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<ZWSP>", i))
                    {
                        if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                        internalParsingArray[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref sourceText, "<STYLE=", i))
                    {
                        int srcOffset;
                        if (ReplaceOpeningStyleTag(ref sourceText, i, out srcOffset, ref internalParsingArray, ref writeIndex))
                        {
                            i = srcOffset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref sourceText, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref sourceText, i, ref internalParsingArray, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

                internalParsingArray[writeIndex].unicode = sourceText[i];
                writeIndex += 1;
            }

            m_TextStyleStackDepth = 0;

            // Insert Closing Style
            if (textStyle.hashCode != (int)TagHashCode.NORMAL)
                InsertClosingStyleTag(ref internalParsingArray, ref writeIndex);

            if (writeIndex == internalParsingArray.Length) ResizeInternalArray(ref internalParsingArray);

            internalParsingArray[writeIndex].unicode = 0;
            return writeIndex;
        }


        /// <summary>
        /// Method to handle inline replacement of style tag by opening style definition.
        /// </summary>
        /// <param name="sourceText"></param>
        /// <param name="srcIndex"></param>
        /// <param name="srcOffset"></param>
        /// <param name="charBuffer"></param>
        /// <param name="writeIndex"></param>
        /// <returns></returns>
        bool ReplaceOpeningStyleTag(ref string sourceText, int srcIndex, out int srcOffset, ref UnicodeChar[] charBuffer, ref int writeIndex)
        {
            // Validate <style> tag.
            int hashCode = GetTagHashCode(ref sourceText, srcIndex + 7, out srcOffset);

            TMP_Style style = GetStyle(hashCode);

            // Return if we don't have a valid style.
            if (style == null || srcOffset == 0) return false;

            // Increase style depth
            m_TextStyleStackDepth += 1;

            // Push style hashcode onto stack
            m_TextStyleStacks[m_TextStyleStackDepth].Push(style.hashCode);

            int styleLength = style.styleOpeningTagArray.Length;

            // Replace <style> tag with opening definition
            int[] tagDefinition = style.styleOpeningTagArray;

            for (int i = 0; i < styleLength; i++)
            {
                int c = tagDefinition[i];

                if (c == '\\' && i + 1 < styleLength)
                {
                    switch (tagDefinition[i + 1])
                    {
                        case '\\':
                            i += 1;
                            break;
                        case 'n':
                            c = 10;
                            i += 1;
                            break;
                        case 'r':
                            break;
                        case 't':
                            break;
                        case 'u':
                            // UTF16 format is "\uFF00" or u + 2 hex pairs.
                            if (i + 5 < styleLength)
                            {
                                c = GetUTF16(tagDefinition, i + 2);

                                i += 5;
                            }
                            break;
                        case 'U':
                            // UTF32 format is "\UFF00FF00" or U + 4 hex pairs.
                            if (i + 9 < styleLength)
                            {
                                c = GetUTF32(tagDefinition, i + 2);

                                i += 9;
                            }
                            break;
                    }
                }

                if (c == 60)
                {
                    if (IsTagName(ref tagDefinition, "<BR>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<NBSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<ZWSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<STYLE=", i))
                    {
                        int offset;
                        if (ReplaceOpeningStyleTag(ref tagDefinition, i, out offset, ref charBuffer, ref writeIndex))
                        {
                            i = offset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref tagDefinition, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref tagDefinition, i, ref charBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                charBuffer[writeIndex].unicode = c;
                writeIndex += 1;
            }

            m_TextStyleStackDepth -= 1;

            return true;
        }


        /// <summary>
        /// Method to handle inline replacement of style tag by opening style definition.
        /// </summary>
        /// <param name="sourceText"></param>
        /// <param name="srcIndex"></param>
        /// <param name="srcOffset"></param>
        /// <param name="charBuffer"></param>
        /// <param name="writeIndex"></param>
        /// <returns></returns>
        bool ReplaceOpeningStyleTag(ref int[] sourceText, int srcIndex, out int srcOffset, ref UnicodeChar[] charBuffer, ref int writeIndex)
        {
            // Validate <style> tag.
            int hashCode = GetTagHashCode(ref sourceText, srcIndex + 7, out srcOffset);

            TMP_Style style = GetStyle(hashCode);

            // Return if we don't have a valid style.
            if (style == null || srcOffset == 0) return false;

            // Increase style depth
            m_TextStyleStackDepth += 1;

            // Push style hashcode onto stack
            m_TextStyleStacks[m_TextStyleStackDepth].Push(style.hashCode);

            int styleLength = style.styleOpeningTagArray.Length;

            // Replace <style> tag with opening definition
            int[] tagDefinition = style.styleOpeningTagArray;

            for (int i = 0; i < styleLength; i++)
            {
                int c = tagDefinition[i];

                if (c == '\\' && i + 1 < styleLength)
                {
                    switch (tagDefinition[i + 1])
                    {
                        case '\\':
                            i += 1;
                            break;
                        case 'n':
                            c = 10;
                            i += 1;
                            break;
                        case 'r':
                            break;
                        case 't':
                            break;
                        case 'u':
                            // UTF16 format is "\uFF00" or u + 2 hex pairs.
                            if (i + 5 < styleLength)
                            {
                                c = GetUTF16(tagDefinition, i + 2);

                                i += 5;
                            }
                            break;
                        case 'U':
                            // UTF32 format is "\UFF00FF00" or U + 4 hex pairs.
                            if (i + 9 < styleLength)
                            {
                                c = GetUTF32(tagDefinition, i + 2);

                                i += 9;
                            }
                            break;
                    }
                }

                if (c == 60)
                {
                    if (IsTagName(ref tagDefinition, "<BR>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<NBSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<ZWSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<STYLE=", i))
                    {
                        int offset;
                        if (ReplaceOpeningStyleTag(ref tagDefinition, i, out offset, ref charBuffer, ref writeIndex))
                        {
                            i = offset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref tagDefinition, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref tagDefinition, i, ref charBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                charBuffer[writeIndex].unicode = c;
                writeIndex += 1;
            }

            m_TextStyleStackDepth -= 1;

            return true;
        }


        /// <summary>
        /// Method to handle inline replacement of style tag by opening style definition.
        /// </summary>
        /// <param name="sourceText"></param>
        /// <param name="srcIndex"></param>
        /// <param name="srcOffset"></param>
        /// <param name="charBuffer"></param>
        /// <param name="writeIndex"></param>
        /// <returns></returns>
        bool ReplaceOpeningStyleTag(ref char[] sourceText, int srcIndex, out int srcOffset, ref UnicodeChar[] charBuffer, ref int writeIndex)
        {
            // Validate <style> tag.
            int hashCode = GetTagHashCode(ref sourceText, srcIndex + 7, out srcOffset);

            TMP_Style style = GetStyle(hashCode);

            // Return if we don't have a valid style.
            if (style == null || srcOffset == 0) return false;

            // Increase style depth
            m_TextStyleStackDepth += 1;

            // Push style hashcode onto stack
            m_TextStyleStacks[m_TextStyleStackDepth].Push(style.hashCode);

            int styleLength = style.styleOpeningTagArray.Length;

            // Replace <style> tag with opening definition
            int[] tagDefinition = style.styleOpeningTagArray;

            for (int i = 0; i < styleLength; i++)
            {
                int c = tagDefinition[i];

                if (c == '\\' && i + 1 < styleLength)
                {
                    switch (tagDefinition[i + 1])
                    {
                        case '\\':
                            i += 1;
                            break;
                        case 'n':
                            c = 10;
                            i += 1;
                            break;
                        case 'r':
                            break;
                        case 't':
                            break;
                        case 'u':
                            // UTF16 format is "\uFF00" or u + 2 hex pairs.
                            if (i + 5 < styleLength)
                            {
                                c = GetUTF16(tagDefinition, i + 2);

                                i += 5;
                            }
                            break;
                        case 'U':
                            // UTF32 format is "\UFF00FF00" or U + 4 hex pairs.
                            if (i + 9 < styleLength)
                            {
                                c = GetUTF32(tagDefinition, i + 2);

                                i += 9;
                            }
                            break;
                    }
                }

                if (c == 60)
                {
                    if (IsTagName(ref tagDefinition, "<BR>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<NBSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<ZWSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<STYLE=", i))
                    {
                        int offset;
                        if (ReplaceOpeningStyleTag(ref tagDefinition, i, out offset, ref charBuffer, ref writeIndex))
                        {
                            i = offset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref tagDefinition, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref tagDefinition, i, ref charBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                charBuffer[writeIndex].unicode = c;
                writeIndex += 1;
            }

            m_TextStyleStackDepth -= 1;

            return true;
        }


        /// <summary>
        /// Method to handle inline replacement of style tag by opening style definition.
        /// </summary>
        /// <param name="sourceText"></param>
        /// <param name="srcIndex"></param>
        /// <param name="srcOffset"></param>
        /// <param name="charBuffer"></param>
        /// <param name="writeIndex"></param>
        /// <returns></returns>
        bool ReplaceOpeningStyleTag(ref StringBuilder sourceText, int srcIndex, out int srcOffset, ref UnicodeChar[] charBuffer, ref int writeIndex)
        {
            // Validate <style> tag.
            int hashCode = GetTagHashCode(ref sourceText, srcIndex + 7, out srcOffset);

            TMP_Style style = GetStyle(hashCode);

            // Return if we don't have a valid style.
            if (style == null || srcOffset == 0) return false;

            // Increase style depth
            m_TextStyleStackDepth += 1;

            // Push style hashcode onto stack
            m_TextStyleStacks[m_TextStyleStackDepth].Push(style.hashCode);

            int styleLength = style.styleOpeningTagArray.Length;

            // Replace <style> tag with opening definition
            int[] tagDefinition = style.styleOpeningTagArray;

            for (int i = 0; i < styleLength; i++)
            {
                int c = tagDefinition[i];

                if (c == '\\' && i + 1 < styleLength)
                {
                    switch (tagDefinition[i + 1])
                    {
                        case '\\':
                            i += 1;
                            break;
                        case 'n':
                            c = 10;
                            i += 1;
                            break;
                        case 'r':
                            break;
                        case 't':
                            break;
                        case 'u':
                            // UTF16 format is "\uFF00" or u + 2 hex pairs.
                            if (i + 5 < styleLength)
                            {
                                c = GetUTF16(tagDefinition, i + 2);

                                i += 5;
                            }
                            break;
                        case 'U':
                            // UTF32 format is "\UFF00FF00" or U + 4 hex pairs.
                            if (i + 9 < styleLength)
                            {
                                c = GetUTF32(tagDefinition, i + 2);

                                i += 9;
                            }
                            break;
                    }
                }

                if (c == 60)
                {
                    if (IsTagName(ref tagDefinition, "<BR>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<NBSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<ZWSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<STYLE=", i))
                    {
                        int offset;
                        if (ReplaceOpeningStyleTag(ref tagDefinition, i, out offset, ref charBuffer, ref writeIndex))
                        {
                            i = offset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref tagDefinition, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref tagDefinition, i, ref charBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                charBuffer[writeIndex].unicode = c;
                writeIndex += 1;
            }

            return true;
        }


        /// <summary>
        /// Method to handle inline replacement of style tag by closing style definition.
        /// </summary>
        /// <param name="sourceText"></param>
        /// <param name="srcIndex"></param>
        /// <param name="charBuffer"></param>
        /// <param name="writeIndex"></param>
        /// <returns></returns>
        bool ReplaceClosingStyleTag(ref string sourceText, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
        {
            // Get style from the Style Stack
            int hashCode = m_TextStyleStacks[m_TextStyleStackDepth + 1].Pop();
            TMP_Style style = GetStyle(hashCode);

            // Return if we don't have a valid style.
            if (style == null) return false;

            // Increase style depth
            m_TextStyleStackDepth += 1;

            int styleLength = style.styleClosingTagArray.Length;

            // Replace <style> tag with opening definition
            int[] tagDefinition = style.styleClosingTagArray;

            for (int i = 0; i < styleLength; i++)
            {
                int c = tagDefinition[i];

                if (c == '\\' && i + 1 < styleLength)
                {
                    switch (tagDefinition[i + 1])
                    {
                        case '\\':
                            i += 1;
                            break;
                        case 'n':
                            c = 10;
                            i += 1;
                            break;
                        case 'r':
                            break;
                        case 't':
                            break;
                        case 'u':
                            // UTF16 format is "\uFF00" or u + 2 hex pairs.
                            if (i + 5 < styleLength)
                            {
                                c = GetUTF16(tagDefinition, i + 2);

                                i += 5;
                            }
                            break;
                        case 'U':
                            // UTF32 format is "\UFF00FF00" or U + 4 hex pairs.
                            if (i + 9 < styleLength)
                            {
                                c = GetUTF32(tagDefinition, i + 2);

                                i += 9;
                            }
                            break;
                    }
                }

                if (c == 60)
                {
                    if (IsTagName(ref tagDefinition, "<BR>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<NBSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<ZWSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<STYLE=", i))
                    {
                        int offset;
                        if (ReplaceOpeningStyleTag(ref tagDefinition, i, out offset, ref charBuffer, ref writeIndex))
                        {
                            i = offset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref tagDefinition, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref tagDefinition, i, ref charBuffer, ref writeIndex);

                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                charBuffer[writeIndex].unicode = c;
                writeIndex += 1;
            }

            m_TextStyleStackDepth -= 1;

            return true;
        }


        /// <summary>
        /// Method to handle inline replacement of style tag by closing style definition.
        /// </summary>
        /// <param name="sourceText"></param>
        /// <param name="srcIndex"></param>
        /// <param name="charBuffer"></param>
        /// <param name="writeIndex"></param>
        /// <returns></returns>
        bool ReplaceClosingStyleTag(ref int[] sourceText, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
        {
            // Get style from the Style Stack
            int hashCode = m_TextStyleStacks[m_TextStyleStackDepth + 1].Pop();
            TMP_Style style = GetStyle(hashCode);

            // Return if we don't have a valid style.
            if (style == null) return false;

            // Increase style depth
            m_TextStyleStackDepth += 1;

            int styleLength = style.styleClosingTagArray.Length;

            // Replace <style> tag with opening definition
            int[] tagDefinition = style.styleClosingTagArray;

            for (int i = 0; i < styleLength; i++)
            {
                int c = tagDefinition[i];

                if (c == '\\' && i + 1 < styleLength)
                {
                    switch (tagDefinition[i + 1])
                    {
                        case '\\':
                            i += 1;
                            break;
                        case 'n':
                            c = 10;
                            i += 1;
                            break;
                        case 'r':
                            break;
                        case 't':
                            break;
                        case 'u':
                            // UTF16 format is "\uFF00" or u + 2 hex pairs.
                            if (i + 5 < styleLength)
                            {
                                c = GetUTF16(tagDefinition, i + 2);

                                i += 5;
                            }
                            break;
                        case 'U':
                            // UTF32 format is "\UFF00FF00" or U + 4 hex pairs.
                            if (i + 9 < styleLength)
                            {
                                c = GetUTF32(tagDefinition, i + 2);

                                i += 9;
                            }
                            break;
                    }
                }

                if (c == 60)
                {
                    if (IsTagName(ref tagDefinition, "<BR>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<NBSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<ZWSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<STYLE=", i))
                    {
                        int offset; ;
                        if (ReplaceOpeningStyleTag(ref tagDefinition, i, out offset, ref charBuffer, ref writeIndex))
                        {
                            i = offset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref tagDefinition, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref tagDefinition, i, ref charBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                charBuffer[writeIndex].unicode = c;
                writeIndex += 1;
            }

            m_TextStyleStackDepth -= 1;

            return true;
        }


        /// <summary>
        /// Method to handle inline replacement of style tag by closing style definition.
        /// </summary>
        /// <param name="sourceText"></param>
        /// <param name="srcIndex"></param>
        /// <param name="charBuffer"></param>
        /// <param name="writeIndex"></param>
        /// <returns></returns>
        bool ReplaceClosingStyleTag(ref char[] sourceText, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
        {
            // Get style from the Style Stack
            int hashCode = m_TextStyleStacks[m_TextStyleStackDepth + 1].Pop();
            TMP_Style style = GetStyle(hashCode);

            // Return if we don't have a valid style.
            if (style == null) return false;

            // Increase style depth
            m_TextStyleStackDepth += 1;

            int styleLength = style.styleClosingTagArray.Length;

            // Replace <style> tag with opening definition
            int[] tagDefinition = style.styleClosingTagArray;

            for (int i = 0; i < styleLength; i++)
            {
                int c = tagDefinition[i];

                if (c == '\\' && i + 1 < styleLength)
                {
                    switch (tagDefinition[i + 1])
                    {
                        case '\\':
                            i += 1;
                            break;
                        case 'n':
                            c = 10;
                            i += 1;
                            break;
                        case 'r':
                            break;
                        case 't':
                            break;
                        case 'u':
                            // UTF16 format is "\uFF00" or u + 2 hex pairs.
                            if (i + 5 < styleLength)
                            {
                                c = GetUTF16(tagDefinition, i + 2);

                                i += 5;
                            }
                            break;
                        case 'U':
                            // UTF32 format is "\UFF00FF00" or U + 4 hex pairs.
                            if (i + 9 < styleLength)
                            {
                                c = GetUTF32(tagDefinition, i + 2);

                                i += 9;
                            }
                            break;
                    }
                }

                if (c == 60)
                {
                    if (IsTagName(ref tagDefinition, "<BR>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<NBSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<ZWSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<STYLE=", i))
                    {
                        int offset;
                        if (ReplaceOpeningStyleTag(ref tagDefinition, i, out offset, ref charBuffer, ref writeIndex))
                        {
                            i = offset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref tagDefinition, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref tagDefinition, i, ref charBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                charBuffer[writeIndex].unicode = c;
                writeIndex += 1;
            }

            m_TextStyleStackDepth -= 1;

            return true;
        }

        /// <summary>
        /// Method to handle inline replacement of style tag by closing style definition.
        /// </summary>
        /// <param name="sourceText"></param>
        /// <param name="srcIndex"></param>
        /// <param name="charBuffer"></param>
        /// <param name="writeIndex"></param>
        /// <returns></returns>
        bool ReplaceClosingStyleTag(ref StringBuilder sourceText, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
        {
            // Get style from the Style Stack
            int hashCode = m_TextStyleStacks[m_TextStyleStackDepth + 1].Pop();
            TMP_Style style = GetStyle(hashCode);

            // Return if we don't have a valid style.
            if (style == null) return false;

            // Increase style depth
            m_TextStyleStackDepth += 1;

            int styleLength = style.styleClosingTagArray.Length;

            // Replace <style> tag with opening definition
            int[] tagDefinition = style.styleClosingTagArray;

            for (int i = 0; i < styleLength; i++)
            {
                int c = tagDefinition[i];

                if (c == '\\' && i + 1 < styleLength)
                {
                    switch (tagDefinition[i + 1])
                    {
                        case '\\':
                            i += 1;
                            break;
                        case 'n':
                            c = 10;
                            i += 1;
                            break;
                        case 'r':
                            break;
                        case 't':
                            break;
                        case 'u':
                            // UTF16 format is "\uFF00" or u + 2 hex pairs.
                            if (i + 5 < styleLength)
                            {
                                c = GetUTF16(tagDefinition, i + 2);

                                i += 5;
                            }
                            break;
                        case 'U':
                            // UTF32 format is "\UFF00FF00" or U + 4 hex pairs.
                            if (i + 9 < styleLength)
                            {
                                c = GetUTF32(tagDefinition, i + 2);

                                i += 9;
                            }
                            break;
                    }
                }

                if (c == 60)
                {
                    if (IsTagName(ref tagDefinition, "<BR>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<NBSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<ZWSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<STYLE=", i))
                    {
                        int offset;
                        if (ReplaceOpeningStyleTag(ref tagDefinition, i, out offset, ref charBuffer, ref writeIndex))
                        {
                            i = offset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref tagDefinition, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref tagDefinition, i, ref charBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                charBuffer[writeIndex].unicode = c;
                writeIndex += 1;
            }

            m_TextStyleStackDepth -= 1;

            return true;
        }

        /// <summary>
        ///
        /// </summary>
        /// <param name="hashCode"></param>
        /// <returns></returns>
        TMP_Style GetStyle(int hashCode)
        {
            TMP_Style style = null;

            // Get Style from Style Sheet potentially assigned to text object.
            if (m_StyleSheet != null)
            {
                style = m_StyleSheet.GetStyle(hashCode);

                if (style != null)
                    return style;
            }

            if (TMP_Settings.defaultStyleSheet != null)
                style = TMP_Settings.defaultStyleSheet.GetStyle(hashCode);

            return style;
        }

        bool InsertOpeningStyleTag(TMP_Style style, int srcIndex, ref UnicodeChar[] charBuffer, ref int writeIndex)
        {
            // Return if we don't have a valid style.
            if (style == null) return false;

            m_TextStyleStacks[0].Push(style.hashCode);

            int styleLength = style.styleOpeningTagArray.Length;

            // Replace <style> tag with opening definition
            int[] tagDefinition = style.styleOpeningTagArray;

            for (int i = 0; i < styleLength; i++)
            {
                int c = tagDefinition[i];

                if (c == '\\' && i + 1 < styleLength)
                {
                    switch (tagDefinition[i + 1])
                    {
                        case '\\':
                            i += 1;
                            break;
                        case 'n':
                            c = 10;
                            i += 1;
                            break;
                        case 'r':
                            break;
                        case 't':
                            break;
                        case 'u':
                            // UTF16 format is "\uFF00" or u + 2 hex pairs.
                            if (i + 5 < styleLength)
                            {
                                c = GetUTF16(tagDefinition, i + 2);

                                i += 5;
                            }
                            break;
                        case 'U':
                            // UTF32 format is "\UFF00FF00" or U + 4 hex pairs.
                            if (i + 9 < styleLength)
                            {
                                c = GetUTF32(tagDefinition, i + 2);

                                i += 9;
                            }
                            break;
                    }
                }

                if (c == 60)
                {
                    if (IsTagName(ref tagDefinition, "<BR>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<NBSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<ZWSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<STYLE=", i))
                    {
                        int offset;
                        if (ReplaceOpeningStyleTag(ref tagDefinition, i, out offset, ref charBuffer, ref writeIndex))
                        {
                            i = offset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref tagDefinition, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref tagDefinition, i, ref charBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                charBuffer[writeIndex].unicode = c;
                writeIndex += 1;
            }

            m_TextStyleStackDepth = 0;

            return true;
        }

        bool InsertClosingStyleTag(ref UnicodeChar[] charBuffer, ref int writeIndex)
        {
            // Get style from the Style Stack
            int hashCode = m_TextStyleStacks[0].Pop();
            TMP_Style style = GetStyle(hashCode);

            int styleLength = style.styleClosingTagArray.Length;

            // Replace <style> tag with opening definition
            int[] tagDefinition = style.styleClosingTagArray;

            for (int i = 0; i < styleLength; i++)
            {
                int c = tagDefinition[i];

                if (c == '\\' && i + 1 < styleLength)
                {
                    switch (tagDefinition[i + 1])
                    {
                        case '\\':
                            i += 1;
                            break;
                        case 'n':
                            c = 10;
                            i += 1;
                            break;
                        case 'r':
                            break;
                        case 't':
                            break;
                        case 'u':
                            // UTF16 format is "\uFF00" or u + 2 hex pairs.
                            if (i + 5 < styleLength)
                            {
                                c = GetUTF16(tagDefinition, i + 2);

                                i += 5;
                            }
                            break;
                        case 'U':
                            // UTF32 format is "\UFF00FF00" or U + 4 hex pairs.
                            if (i + 9 < styleLength)
                            {
                                c = GetUTF32(tagDefinition, i + 2);

                                i += 9;
                            }
                            break;
                    }
                }


                if (c == 60)
                {
                    if (IsTagName(ref tagDefinition, "<BR>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 10;
                        writeIndex += 1;
                        i += 3;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<NBSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 160;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<ZWSP>", i))
                    {
                        if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                        charBuffer[writeIndex].unicode = 0x200B;
                        writeIndex += 1;
                        i += 5;

                        continue;
                    }
                    else if (IsTagName(ref tagDefinition, "<STYLE=", i))
                    {
                        int offset;
                        if (ReplaceOpeningStyleTag(ref tagDefinition, i, out offset, ref charBuffer, ref writeIndex))
                        {
                            i = offset;
                            continue;
                        }
                    }
                    else if (IsTagName(ref tagDefinition, "</STYLE>", i))
                    {
                        ReplaceClosingStyleTag(ref tagDefinition, i, ref charBuffer, ref writeIndex);

                        // Strip </style> even if style is invalid.
                        i += 7;
                        continue;
                    }
                }

                if (writeIndex == charBuffer.Length) ResizeInternalArray(ref charBuffer);

                charBuffer[writeIndex].unicode = c;
                writeIndex += 1;
            }

            m_TextStyleStackDepth = 0;
            return true;
        }

        /// <summary>
        /// Method to check for a matching rich text tag.
        /// </summary>
        /// <param name="text"></param>
        /// <param name="tag"></param>
        /// <param name="index"></param>
        /// <returns></returns>
        bool IsTagName (ref string text, string tag, int index)
        {
            if (text.Length < index + tag.Length) return false;

            for (int i = 0; i < tag.Length; i++)
            {
                if (TMP_TextUtilities.ToUpperFast(text[index + i]) != tag[i]) return false;
            }

            return true;
        }

        /// <summary>
        /// Method to check for a matching rich text tag.
        /// </summary>
        /// <param name="text"></param>
        /// <param name="tag"></param>
        /// <param name="index"></param>
        /// <returns></returns>
        bool IsTagName(ref char[] text, string tag, int index)
        {
            if (text.Length < index + tag.Length) return false;

            for (int i = 0; i < tag.Length; i++)
            {
                if (TMP_TextUtilities.ToUpperFast(text[index + i]) != tag[i]) return false;
            }

            return true;
        }

        /// <summary>
        /// Method to check for a matching rich text tag.
        /// </summary>
        /// <param name="text"></param>
        /// <param name="tag"></param>
        /// <param name="index"></param>
        /// <returns></returns>
        bool IsTagName(ref int[] text, string tag, int index)
        {
            if (text.Length < index + tag.Length) return false;

            for (int i = 0; i < tag.Length; i++)
            {
                if (TMP_TextUtilities.ToUpperFast((char)text[index + i]) != tag[i]) return false;
            }

            return true;
        }

        /// <summary>
        /// Method to check for a matching rich text tag.
        /// </summary>
        /// <param name="text"></param>
        /// <param name="tag"></param>
        /// <param name="index"></param>
        /// <returns></returns>
        bool IsTagName(ref StringBuilder text, string tag, int index)
        {
            if (text.Length < index + tag.Length) return false;

            for (int i = 0; i < tag.Length; i++)
            {
                if (TMP_TextUtilities.ToUpperFast(text[index + i]) != tag[i]) return false;
            }

            return true;
        }

        /// <summary>
        /// Get Hashcode for a given tag.
        /// </summary>
        /// <param name="text"></param>
        /// <param name="index"></param>
        /// <param name="closeIndex"></param>
        /// <returns></returns>
        int GetTagHashCode(ref string text, int index, out int closeIndex)
        {
            int hashCode = 0;
            closeIndex = 0;

            for (int i = index; i < text.Length; i++)
            {
                // Skip quote '"' character
                if (text[i] == 34) continue;

                // Break at '>'
                if (text[i] == 62) { closeIndex = i; break; }

                hashCode = (hashCode << 5) + hashCode ^ TMP_TextParsingUtilities.ToUpperASCIIFast(text[i]);
            }

            return hashCode;
        }

        /// <summary>
        /// Get Hashcode for a given tag.
        /// </summary>
        /// <param name="text"></param>
        /// <param name="index"></param>
        /// <param name="closeIndex"></param>
        /// <returns></returns>
        int GetTagHashCode(ref char[] text, int index, out int closeIndex)
        {
            int hashCode = 0;
            closeIndex = 0;

            for (int i = index; i < text.Length; i++)
            {
                // Skip quote '"' character
                if (text[i] == 34) continue;

                // Break at '>'
                if (text[i] == 62) { closeIndex = i; break; }

                hashCode = (hashCode << 5) + hashCode ^ TMP_TextParsingUtilities.ToUpperASCIIFast(text[i]);
            }

            return hashCode;
        }

        /// <summary>
        /// Get Hashcode for a given tag.
        /// </summary>
        /// <param name="text"></param>
        /// <param name="index"></param>
        /// <param name="closeIndex"></param>
        /// <returns></returns>
        int GetTagHashCode(ref int[] text, int index, out int closeIndex)
        {
            int hashCode = 0;
            closeIndex = 0;

            for (int i = index; i < text.Length; i++)
            {
                // Skip quote '"' character
                if (text[i] == 34) continue;

                // Break at '>'
                if (text[i] == 62) { closeIndex = i; break; }

                hashCode = (hashCode << 5) + hashCode ^ TMP_TextParsingUtilities.ToUpperASCIIFast((char)text[i]);
            }

            return hashCode;
        }

        /// <summary>
        ///  Get Hashcode for a given tag.
        /// </summary>
        /// <param name="text"></param>
        /// <param name="index"></param>
        /// <param name="closeIndex"></param>
        /// <returns></returns>
        int GetTagHashCode(ref StringBuilder text, int index, out int closeIndex)
        {
            int hashCode = 0;
            closeIndex = 0;

            for (int i = index; i < text.Length; i++)
            {
                // Skip quote '"' character
                if (text[i] == 34) continue;

                // Break at '>'
                if (text[i] == 62) { closeIndex = i; break; }

                hashCode = (hashCode << 5) + hashCode ^ TMP_TextParsingUtilities.ToUpperASCIIFast(text[i]);
            }

            return hashCode;
        }

        /// <summary>
        ///
        /// </summary>
        void ResizeInternalArray <T>(ref T[] array)
        {
            int size = Mathf.NextPowerOfTwo(array.Length + 1);

            System.Array.Resize(ref array, size);
        }

        void ResizeInternalArray<T>(ref T[] array, int size)
        {
            size = Mathf.NextPowerOfTwo(size + 1);

            System.Array.Resize(ref array, size);
        }


        private readonly decimal[] k_Power = { 5e-1m, 5e-2m, 5e-3m, 5e-4m, 5e-5m, 5e-6m, 5e-7m, 5e-8m, 5e-9m, 5e-10m }; // Used by FormatText to enable rounding and avoid using Mathf.Pow.


        void AddFloatToCharArray(float value, int padding, int precision, ref int writeIndex)
        {
            if (value < 0)
            {
                m_input_CharArray[writeIndex] = '-';
                writeIndex += 1;
                value = -value;
            }

            // Using decimal type due to floating point precision impacting formatting
            decimal valueD = (decimal)value;

            // Round up value to the specified prevision otherwise set precision to max.
            if (padding == 0 && precision == 0)
                precision = 9;
            else
                valueD += k_Power[Mathf.Min(9, precision)];

            long integer = (long)valueD;

            AddIntegerToCharArray(integer, padding, ref writeIndex);

            if (precision > 0)
            {
                valueD -= integer;

                // Add decimal point and values only if remainder is not zero.
                if (valueD != 0)
                {
                    // Add decimal point
                    m_input_CharArray[writeIndex++] = '.';

                    for (int p = 0; p < precision; p++)
                    {
                        valueD *= 10;
                        long d = (long)valueD;

                        m_input_CharArray[writeIndex++] = (char)(d + 48);
                        valueD -= d;

                        if (valueD == 0)
                            p = precision;
                    }
                }
            }
        }


        /// <summary>
        ///
        /// </summary>
        /// <param name="number"></param>
        /// <param name="padding"></param>
        /// <param name="writeIndex"></param>
        void AddIntegerToCharArray(double number, int padding, ref int writeIndex)
        {
            int integralCount = 0;
            int i = writeIndex;

            do
            {
                m_input_CharArray[i++] = (char)(number % 10 + 48);
                number /= 10;
                integralCount += 1;
            } while (number > 0.999d || integralCount < padding);

            int lastIndex = i;

            //// Reverse string
            while (writeIndex + 1 < i)
            {
                i -= 1;
                char t = m_input_CharArray[writeIndex];
                m_input_CharArray[writeIndex] = m_input_CharArray[i];
                m_input_CharArray[i] = t;
                writeIndex += 1;
            }
            writeIndex = lastIndex;
        }


        /// <summary>
        /// Method used to determine the number of visible characters and required buffer allocations.
        /// </summary>
        /// <param name="unicodeChars"></param>
        /// <returns></returns>
        protected virtual int SetArraySizes(UnicodeChar[] unicodeChars) { return 0; }


        /// <summary>
        /// Method which parses the text input, does the layout of the text as well as generating the geometry.
        /// </summary>
        protected virtual void GenerateTextMesh() { }


        /// <summary>
        /// Function to Calculate the Preferred Width and Height of the text object.
        /// </summary>
        /// <returns></returns>
        public Vector2 GetPreferredValues()
        {
            if (m_isInputParsingRequired || m_isTextTruncated)
            {
                m_isCalculatingPreferredValues = true;
                ParseInputText();
            }

            // CALCULATE PREFERRED WIDTH
            float preferredWidth = GetPreferredWidth();

            // CALCULATE PREFERRED HEIGHT
            float preferredHeight = GetPreferredHeight();

            return new Vector2(preferredWidth, preferredHeight);
        }


        /// <summary>
        /// Function to Calculate the Preferred Width and Height of the text object given the provided width and height.
        /// </summary>
        /// <returns></returns>
        public Vector2 GetPreferredValues(float width, float height)
        {
            if (m_isInputParsingRequired || m_isTextTruncated)
            {
                m_isCalculatingPreferredValues = true;
                ParseInputText();
            }

            Vector2 margin = new Vector2(width, height);

            // CALCULATE PREFERRED WIDTH
            float preferredWidth = GetPreferredWidth(margin);

            // CALCULATE PREFERRED HEIGHT
            float preferredHeight = GetPreferredHeight(margin);

            return new Vector2(preferredWidth, preferredHeight);
        }


        /// <summary>
        /// Function to Calculate the Preferred Width and Height of the text object given a certain string.
        /// </summary>
        /// <param name="text"></param>
        /// <returns></returns>
        public Vector2 GetPreferredValues(string text)
        {
            m_isCalculatingPreferredValues = true;

            StringToInternalParsingBuffer(text, ref m_InternalParsingBuffer);
            SetArraySizes(m_InternalParsingBuffer);

            Vector2 margin = k_LargePositiveVector2;

            // CALCULATE PREFERRED WIDTH
            float preferredWidth = GetPreferredWidth(margin);

            // CALCULATE PREFERRED HEIGHT
            float preferredHeight = GetPreferredHeight(margin);

            return new Vector2(preferredWidth, preferredHeight);
        }


        /// <summary>
        ///  Function to Calculate the Preferred Width and Height of the text object given a certain string and size of text container.
        /// </summary>
        /// <param name="text"></param>
        /// <returns></returns>
        public Vector2 GetPreferredValues(string text, float width, float height)
        {
            m_isCalculatingPreferredValues = true;

            StringToInternalParsingBuffer(text, ref m_InternalParsingBuffer);
            SetArraySizes(m_InternalParsingBuffer);

            Vector2 margin = new Vector2(width, height);

            // CALCULATE PREFERRED WIDTH
            float preferredWidth = GetPreferredWidth(margin);

            // CALCULATE PREFERRED HEIGHT
            float preferredHeight = GetPreferredHeight(margin);

            return new Vector2(preferredWidth, preferredHeight);
        }


        /// <summary>
        /// Method to calculate the preferred width of a text object.
        /// </summary>
        /// <returns></returns>
        protected float GetPreferredWidth()
        {
            if (TMP_Settings.instance == null) return 0;

            // Return cached preferred height if already computed
            if (!m_isPreferredWidthDirty)
                return m_preferredWidth;

            float fontSize = m_enableAutoSizing ? m_fontSizeMax : m_fontSize;

            // Reset auto sizing point size bounds
            m_minFontSize = m_fontSizeMin;
            m_maxFontSize = m_fontSizeMax;
            m_charWidthAdjDelta = 0;

            // Set Margins to Infinity
            Vector2 margin = k_LargePositiveVector2;

            if (m_isInputParsingRequired || m_isTextTruncated)
            {
                m_isCalculatingPreferredValues = true;
                ParseInputText();
            }

            m_AutoSizeIterationCount = 0;
            float preferredWidth = CalculatePreferredValues(ref fontSize, margin, false, false).x;

            m_isPreferredWidthDirty = false;

            //Debug.Log("GetPreferredWidth() called on Object ID: " + GetInstanceID() + " on frame: " + Time.frameCount + ". Returning width of " + preferredWidth);

            return preferredWidth;
        }


        /// <summary>
        /// Method to calculate the preferred width of a text object.
        /// </summary>
        /// <param name="margin"></param>
        /// <returns></returns>
        float GetPreferredWidth(Vector2 margin)
        {
            float fontSize = m_enableAutoSizing ? m_fontSizeMax : m_fontSize;

            // Reset auto sizing point size bounds
            m_minFontSize = m_fontSizeMin;
            m_maxFontSize = m_fontSizeMax;
            m_charWidthAdjDelta = 0;

            m_AutoSizeIterationCount = 0;
            float preferredWidth = CalculatePreferredValues(ref fontSize, margin, false, false).x;

            //Debug.Log("GetPreferredWidth() Called. Returning width of " + preferredWidth);

            return preferredWidth;
        }


        /// <summary>
        /// Method to calculate the preferred height of a text object.
        /// </summary>
        /// <returns></returns>
        protected float GetPreferredHeight()
        {
            if (TMP_Settings.instance == null) return 0;

            // Return cached preferred height if already computed
            if (!m_isPreferredHeightDirty)
                return m_preferredHeight;

            float fontSize = m_enableAutoSizing ? m_fontSizeMax : m_fontSize;

            // Reset auto sizing point size bounds
            m_minFontSize = m_fontSizeMin;
            m_maxFontSize = m_fontSizeMax;
            m_charWidthAdjDelta = 0;

            Vector2 margin = new Vector2(m_marginWidth != 0 ? m_marginWidth : k_LargePositiveFloat, k_LargePositiveFloat);

            if (m_isInputParsingRequired || m_isTextTruncated)
            {
                m_isCalculatingPreferredValues = true;
                ParseInputText();
            }

            // Reset Text Auto Size iteration tracking.
            m_IsAutoSizePointSizeSet = false;
            m_AutoSizeIterationCount = 0;

            // The CalculatePreferredValues function is potentially called repeatedly when text auto size is enabled.
            // This is a revised implementation to remove the use of recursion which could potentially result in stack overflow issues.
            float preferredHeight = 0;

            while (m_IsAutoSizePointSizeSet == false)
            {
                preferredHeight = CalculatePreferredValues(ref fontSize, margin, m_enableAutoSizing, m_enableWordWrapping).y;
                m_AutoSizeIterationCount += 1;
            }

            m_isPreferredHeightDirty = false;

            //Debug.Log("GetPreferredHeight() called on Object ID: " + GetInstanceID() + " on frame: " + Time.frameCount +". Returning height of " + preferredHeight);

            return preferredHeight;
        }


        /// <summary>
        /// Method to calculate the preferred height of a text object.
        /// </summary>
        /// <param name="margin"></param>
        /// <returns></returns>
        float GetPreferredHeight(Vector2 margin)
        {
            float fontSize = m_enableAutoSizing ? m_fontSizeMax : m_fontSize;

            // Reset auto sizing point size bounds
            m_minFontSize = m_fontSizeMin;
            m_maxFontSize = m_fontSizeMax;
            m_charWidthAdjDelta = 0;

            // Reset Text Auto Size iteration tracking.
            m_IsAutoSizePointSizeSet = false;
            m_AutoSizeIterationCount = 0;

            // The CalculatePreferredValues function is potentially called repeatedly when text auto size is enabled.
            // This is a revised implementation to remove the use of recursion which could potentially result in stack overflow issues.
            float preferredHeight = 0;

            while (m_IsAutoSizePointSizeSet == false)
            {
                preferredHeight = CalculatePreferredValues(ref fontSize, margin, m_enableAutoSizing, m_enableWordWrapping).y;
                m_AutoSizeIterationCount += 1;
            }

            //Debug.Log("GetPreferredHeight() Called. Returning height of " + preferredHeight);

            return preferredHeight;
        }


        /// <summary>
        /// Method returning the rendered width and height of the text object.
        /// </summary>
        /// <returns></returns>
        public Vector2 GetRenderedValues()
        {
            return GetTextBounds().size;
        }

        /// <summary>
        ///
        /// </summary>
        /// <param name="onlyVisibleCharacters">Should returned value only factor in visible characters and exclude those greater than maxVisibleCharacters for instance.</param>
        /// <returns></returns>
        public Vector2 GetRenderedValues(bool onlyVisibleCharacters)
        {
            return GetTextBounds(onlyVisibleCharacters).size;
        }


        /// <summary>
        /// Method returning the rendered width of the text object.
        /// </summary>
        /// <returns></returns>
        float GetRenderedWidth()
        {
            return GetRenderedValues().x;
        }

        /// <summary>
        /// Method returning the rendered width of the text object.
        /// </summary>
        /// <returns></returns>
        protected float GetRenderedWidth(bool onlyVisibleCharacters)
        {
            return GetRenderedValues(onlyVisibleCharacters).x;
        }

        /// <summary>
        /// Method returning the rendered height of the text object.
        /// </summary>
        /// <returns></returns>
        float GetRenderedHeight()
        {
            return GetRenderedValues().y;
        }

        /// <summary>
        /// Method returning the rendered height of the text object.
        /// </summary>
        /// <returns></returns>
        protected float GetRenderedHeight(bool onlyVisibleCharacters)
        {
            return GetRenderedValues(onlyVisibleCharacters).y;
        }


        /// <summary>
        /// Method to calculate the preferred width and height of the text object.
        /// </summary>
        /// <returns></returns>
        protected virtual Vector2 CalculatePreferredValues(ref float fontSize, Vector2 marginSize, bool isTextAutoSizingEnabled, bool isWordWrappingEnabled)
        {
            //Debug.Log("*** CalculatePreferredValues() ***"); // ***** Frame: " + Time.frameCount);

            ////Profiler.BeginSample("TMP Generate Text - Phase I");

            // Early exit if no font asset was assigned. This should not be needed since LiberationSans SDF will be assigned by default.
            if (m_fontAsset == null || m_fontAsset.characterLookupTable == null)
            {
                Debug.LogWarning("Can't Generate Mesh! No Font Asset has been assigned to Object ID: " + this.GetInstanceID());

                m_IsAutoSizePointSizeSet = true;
                return Vector2.zero;
            }

            // Early exit if we don't have any Text to generate.
            if (m_InternalParsingBuffer == null || m_InternalParsingBuffer.Length == 0 || m_InternalParsingBuffer[0].unicode == (char)0)
            {
                m_IsAutoSizePointSizeSet = true;
                return Vector2.zero;
            }

            m_currentFontAsset = m_fontAsset;
            m_currentMaterial = m_sharedMaterial;
            m_currentMaterialIndex = 0;
            m_materialReferenceStack.SetDefault(new MaterialReference(0, m_currentFontAsset, null, m_currentMaterial, m_padding));

            // Total character count is computed when the text is parsed.
            int totalCharacterCount = m_totalCharacterCount; // m_VisibleCharacters.Count;

            if (m_internalCharacterInfo == null || totalCharacterCount > m_internalCharacterInfo.Length)
                m_internalCharacterInfo = new TMP_CharacterInfo[totalCharacterCount > 1024 ? totalCharacterCount + 256 : Mathf.NextPowerOfTwo(totalCharacterCount)];

            // Calculate the scale of the font based on selected font size and sampling point size.
            // baseScale is calculated using the font asset assigned to the text object.
            float baseScale = m_fontScale = (fontSize / m_fontAsset.faceInfo.pointSize * m_fontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));
            float currentElementScale = baseScale;
            float currentEmScale = fontSize * 0.01f * (m_isOrthographic ? 1 : 0.1f);
            m_fontScaleMultiplier = 1;

            m_currentFontSize = fontSize;
            m_sizeStack.SetDefault(m_currentFontSize);
            float fontSizeDelta = 0;

            m_FontStyleInternal = m_fontStyle; // Set the default style.

            m_lineJustification = m_HorizontalAlignment; // m_textAlignment; // Sets the line justification mode to match editor alignment.
            m_lineJustificationStack.SetDefault(m_lineJustification);

            m_baselineOffset = 0; // Used by subscript characters.
            m_baselineOffsetStack.Clear();

            m_lineOffset = 0; // Amount of space between lines (font line spacing + m_linespacing).
            m_lineHeight = TMP_Math.FLOAT_UNSET;
            float lineGap = m_currentFontAsset.faceInfo.lineHeight - (m_currentFontAsset.faceInfo.ascentLine - m_currentFontAsset.faceInfo.descentLine);

            m_cSpacing = 0; // Amount of space added between characters as a result of the use of the <cspace> tag.
            m_monoSpacing = 0;
            //float lineOffsetDelta = 0;
            m_xAdvance = 0; // Used to track the position of each character.
            float maxXAdvance = 0; // Used to determine Preferred Width.

            tag_LineIndent = 0; // Used for indentation of text.
            tag_Indent = 0;
            m_indentStack.SetDefault(0);
            tag_NoParsing = false;
            //m_isIgnoringAlignment = false;

            m_characterCount = 0; // Total characters in the char[]


            // Tracking of line information
            m_firstCharacterOfLine = 0;
            m_maxLineAscender = k_LargeNegativeFloat;
            m_maxLineDescender = k_LargePositiveFloat;
            m_lineNumber = 0;
            m_startOfLineAscender = 0;
            m_IsDrivenLineSpacing = false;

            float marginWidth = marginSize.x;
            float marginHeight = marginSize.y;
            m_marginLeft = 0;
            m_marginRight = 0;

            float lineMarginLeft = 0;
            float lineMarginRight = 0;

            m_width = -1;
            float widthOfTextArea = marginWidth + 0.0001f - m_marginLeft - m_marginRight;

            // Used by Unity's Auto Layout system.
            float renderedWidth = 0;
            float renderedHeight = 0;
            float textWidth = 0;
            m_isCalculatingPreferredValues = true;

            // Tracking of the highest Ascender
            m_maxCapHeight = 0;
            m_maxTextAscender = 0;
            m_ElementDescender = 0;
            float maxVisibleDescender = 0;
            bool isMaxVisibleDescenderSet = false;

            // Initialize struct to track states of word wrapping
            bool isFirstWordOfLine = true;
            m_isNonBreakingSpace = false;
            //bool isLastBreakingChar = false;
            bool isLastCharacterCJK = false;
            //int lastSoftLineBreak = 0;

            CharacterSubstitution characterToSubstitute = new CharacterSubstitution(-1, 0);
            bool isSoftHyphenIgnored = false;

            WordWrapState internalWordWrapState = new WordWrapState();
            WordWrapState internalLineState = new WordWrapState();
            WordWrapState internalSoftLineBreak = new WordWrapState();

            // Counter to prevent recursive lockup when computing preferred values.
            m_AutoSizeIterationCount += 1;

            // Parse through Character buffer to read HTML tags and begin creating mesh.
            for (int i = 0; i < m_InternalParsingBuffer.Length && m_InternalParsingBuffer[i].unicode != 0; i++)
            {
                int charCode = m_InternalParsingBuffer[i].unicode;

                // Parse Rich Text Tag
                #region Parse Rich Text Tag
                if (m_isRichText && charCode == 60)  // '<'
                {
                    m_isParsingText = true;
                    m_textElementType = TMP_TextElementType.Character;
                    int endTagIndex;

                    // Check if Tag is valid. If valid, skip to the end of the validated tag.
                    if (ValidateHtmlTag(m_InternalParsingBuffer, i + 1, out endTagIndex))
                    {
                        i = endTagIndex;

                        // Continue to next character or handle the sprite element
                        if (m_textElementType == TMP_TextElementType.Character)
                            continue;
                    }
                }
                else
                {
                    m_textElementType = m_textInfo.characterInfo[m_characterCount].elementType;
                    m_currentMaterialIndex = m_textInfo.characterInfo[m_characterCount].materialReferenceIndex;
                    m_currentFontAsset = m_textInfo.characterInfo[m_characterCount].fontAsset;
                }
                #endregion End Parse Rich Text Tag

                int prev_MaterialIndex = m_currentMaterialIndex;
                bool isUsingAltTypeface = m_textInfo.characterInfo[m_characterCount].isUsingAlternateTypeface;

                m_isParsingText = false;

                // Handle potential character substitutions
                #region Character Substitutions
                bool isInjectingCharacter = false;

                if (characterToSubstitute.index == m_characterCount)
                {
                    charCode = (int)characterToSubstitute.unicode;
                    m_textElementType = TMP_TextElementType.Character;
                    isInjectingCharacter = true;

                    switch (charCode)
                    {
                        case 0x03:
                            m_internalCharacterInfo[m_characterCount].textElement = m_currentFontAsset.characterLookupTable[0x03];
                            m_isTextTruncated = true;
                            break;
                        case 0x2D:
                            //
                            break;
                        case 0x2026:
                            m_internalCharacterInfo[m_characterCount].textElement = m_Ellipsis.character; ;
                            m_internalCharacterInfo[m_characterCount].elementType = TMP_TextElementType.Character;
                            m_internalCharacterInfo[m_characterCount].fontAsset = m_Ellipsis.fontAsset;
                            m_internalCharacterInfo[m_characterCount].material = m_Ellipsis.material;
                            m_internalCharacterInfo[m_characterCount].materialReferenceIndex = m_Ellipsis.materialIndex;

                            // Indicates the source parsing data has been modified.
                            m_isTextTruncated = true;

                            // End Of Text
                            characterToSubstitute.index = m_characterCount + 1;
                            characterToSubstitute.unicode = 0x03;
                            break;
                    }
                }
                #endregion


                // When using Linked text, mark character as ignored and skip to next character.
                #region Linked Text
                if (m_characterCount < m_firstVisibleCharacter && charCode != 0x03)
                {
                    m_internalCharacterInfo[m_characterCount].isVisible = false;
                    m_internalCharacterInfo[m_characterCount].character = (char)0x200B;
                    m_internalCharacterInfo[m_characterCount].lineNumber = 0;
                    m_characterCount += 1;
                    continue;
                }
                #endregion


                // Handle Font Styles like LowerCase, UpperCase and SmallCaps.
                #region Handling of LowerCase, UpperCase and SmallCaps Font Styles

                float smallCapsMultiplier = 1.0f;

                if (m_textElementType == TMP_TextElementType.Character)
                {
                    if (/*(m_fontStyle & FontStyles.UpperCase) == FontStyles.UpperCase ||*/ (m_FontStyleInternal & FontStyles.UpperCase) == FontStyles.UpperCase)
                    {
                        // If this character is lowercase, switch to uppercase.
                        if (char.IsLower((char)charCode))
                            charCode = char.ToUpper((char)charCode);

                    }
                    else if (/*(m_fontStyle & FontStyles.LowerCase) == FontStyles.LowerCase ||*/ (m_FontStyleInternal & FontStyles.LowerCase) == FontStyles.LowerCase)
                    {
                        // If this character is uppercase, switch to lowercase.
                        if (char.IsUpper((char)charCode))
                            charCode = char.ToLower((char)charCode);
                    }
                    else if (/*(m_fontStyle & FontStyles.SmallCaps) == FontStyles.SmallCaps ||*/ (m_FontStyleInternal & FontStyles.SmallCaps) == FontStyles.SmallCaps)
                    {
                        if (char.IsLower((char)charCode))
                        {
                            smallCapsMultiplier = 0.8f;
                            charCode = char.ToUpper((char)charCode);
                        }
                    }
                }
                #endregion


                // Look up Character Data from Dictionary and cache it.
                #region Look up Character Data
                //float baselineOffset = 0;
                float elementAscentLine = 0;
                float elementDescentLine = 0;
                if (m_textElementType == TMP_TextElementType.Sprite)
                {
                    // If a sprite is used as a fallback then get a reference to it and set the color to white.
                    m_currentSpriteAsset = m_textInfo.characterInfo[m_characterCount].spriteAsset;
                    m_spriteIndex = m_textInfo.characterInfo[m_characterCount].spriteIndex;

                    TMP_SpriteCharacter sprite = m_currentSpriteAsset.spriteCharacterTable[m_spriteIndex];
                    if (sprite == null) continue;

                    // Sprites are assigned in the E000 Private Area + sprite Index
                    if (charCode == 60)
                        charCode = 57344 + m_spriteIndex;

                    // The sprite scale calculations are based on the font asset assigned to the text object.
                    if (m_currentSpriteAsset.faceInfo.pointSize > 0)
                    {
                        float spriteScale = (m_currentFontSize / m_currentSpriteAsset.faceInfo.pointSize * m_currentSpriteAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));
                        currentElementScale = sprite.scale * sprite.glyph.scale * spriteScale;
                        elementAscentLine = m_currentSpriteAsset.faceInfo.ascentLine;
                        //baselineOffset = m_currentSpriteAsset.faceInfo.baseline * m_fontScale * m_fontScaleMultiplier * m_currentSpriteAsset.faceInfo.scale;
                        elementDescentLine = m_currentSpriteAsset.faceInfo.descentLine;
                    }
                    else
                    {
                        float spriteScale = (m_currentFontSize / m_currentFontAsset.faceInfo.pointSize * m_currentFontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));
                        currentElementScale = m_currentFontAsset.faceInfo.ascentLine / sprite.glyph.metrics.height * sprite.scale * sprite.glyph.scale * spriteScale;
                        float scaleDelta = spriteScale / currentElementScale;
                        elementAscentLine = m_currentFontAsset.faceInfo.ascentLine * scaleDelta;
                        //baselineOffset = m_currentFontAsset.faceInfo.baseline * m_fontScale * m_fontScaleMultiplier * m_currentFontAsset.faceInfo.scale;
                        elementDescentLine = m_currentFontAsset.faceInfo.descentLine * scaleDelta;
                    }

                    m_cached_TextElement = sprite;

                    m_internalCharacterInfo[m_characterCount].elementType = TMP_TextElementType.Sprite;
                    m_internalCharacterInfo[m_characterCount].scale = currentElementScale;

                    m_currentMaterialIndex = prev_MaterialIndex;
                }
                else if (m_textElementType == TMP_TextElementType.Character)
                {
                    m_cached_TextElement = m_textInfo.characterInfo[m_characterCount].textElement;
                    if (m_cached_TextElement == null) continue;

                    m_currentMaterialIndex = m_textInfo.characterInfo[m_characterCount].materialReferenceIndex;

                    float adjustedScale;
                    if (isInjectingCharacter && m_InternalParsingBuffer[i].unicode == 0x0A && m_characterCount != m_firstCharacterOfLine)
                        adjustedScale = m_textInfo.characterInfo[m_characterCount - 1].pointSize * smallCapsMultiplier / m_currentFontAsset.m_FaceInfo.pointSize * m_currentFontAsset.m_FaceInfo.scale * (m_isOrthographic ? 1 : 0.1f);
                    else
                        adjustedScale = m_currentFontSize * smallCapsMultiplier / m_currentFontAsset.m_FaceInfo.pointSize * m_currentFontAsset.m_FaceInfo.scale * (m_isOrthographic ? 1 : 0.1f);

                    elementAscentLine = m_currentFontAsset.m_FaceInfo.ascentLine;
                    elementDescentLine = m_currentFontAsset.m_FaceInfo.descentLine;

                    currentElementScale = adjustedScale * m_fontScaleMultiplier * m_cached_TextElement.scale;
                    //baselineOffset = m_currentFontAsset.faceInfo.baseline * m_fontScale * m_fontScaleMultiplier * m_currentFontAsset.faceInfo.scale;

                    m_internalCharacterInfo[m_characterCount].elementType = TMP_TextElementType.Character;
                }
                #endregion


                // Handle Soft Hyphen
                #region Handle Soft Hyphen
                float currentElementUnmodifiedScale = currentElementScale;
                if (charCode == 0xAD || charCode == 0x03)
                    currentElementScale = 0;
                #endregion


                // Store some of the text object's information
                m_internalCharacterInfo[m_characterCount].character = (char)charCode;

                // Cache glyph metrics
                GlyphMetrics currentGlyphMetrics = m_cached_TextElement.m_Glyph.metrics;

                // Optimization to avoid calling this more than once per character.
                bool isWhiteSpace = char.IsWhiteSpace((char)charCode);


                // Handle Kerning if Enabled.
                #region Handle Kerning
                TMP_GlyphValueRecord glyphAdjustments = new TMP_GlyphValueRecord();
                float characterSpacingAdjustment = m_characterSpacing;
                m_GlyphHorizontalAdvanceAdjustment = 0;
                if (m_enableKerning)
                {
                    TMP_GlyphPairAdjustmentRecord adjustmentPair;
                    uint baseGlyphIndex = m_cached_TextElement.m_GlyphIndex;

                    if (m_characterCount < totalCharacterCount - 1)
                    {
                        uint nextGlyphIndex = m_textInfo.characterInfo[m_characterCount + 1].textElement.m_GlyphIndex;
                        uint key = nextGlyphIndex << 16 | baseGlyphIndex;

                        if (m_currentFontAsset.m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.TryGetValue(key, out adjustmentPair))
                        {
                            glyphAdjustments = adjustmentPair.m_FirstAdjustmentRecord.m_GlyphValueRecord;
                            characterSpacingAdjustment = (adjustmentPair.m_FeatureLookupFlags & FontFeatureLookupFlags.IgnoreSpacingAdjustments) == FontFeatureLookupFlags.IgnoreSpacingAdjustments ? 0 : characterSpacingAdjustment;
                        }
                    }

                    if (m_characterCount >= 1)
                    {
                        uint previousGlyphIndex = m_textInfo.characterInfo[m_characterCount - 1].textElement.m_GlyphIndex;
                        uint key = baseGlyphIndex << 16 | previousGlyphIndex;

                        if (m_currentFontAsset.m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.TryGetValue(key, out adjustmentPair))
                        {
                            glyphAdjustments += adjustmentPair.m_SecondAdjustmentRecord.m_GlyphValueRecord;
                            characterSpacingAdjustment = (adjustmentPair.m_FeatureLookupFlags & FontFeatureLookupFlags.IgnoreSpacingAdjustments) == FontFeatureLookupFlags.IgnoreSpacingAdjustments ? 0 : characterSpacingAdjustment;
                        }
                    }

                    m_GlyphHorizontalAdvanceAdjustment = glyphAdjustments.m_XAdvance;
                }
                #endregion


                // Initial Implementation for RTL support.
                #region Handle Right-to-Left
                //if (m_isRightToLeft)
                //{
                //    m_xAdvance -= ((m_cached_TextElement.xAdvance * bold_xAdvance_multiplier + m_characterSpacing + m_wordSpacing + m_currentFontAsset.normalSpacingOffset) * currentElementScale + m_cSpacing) * (1 - m_charWidthAdjDelta);

                //    if (char.IsWhiteSpace((char)charCode) || charCode == 0x200B)
                //        m_xAdvance -= m_wordSpacing * currentElementScale;
                //}
                #endregion


                // Handle Mono Spacing
                #region Handle Mono Spacing
                float monoAdvance = 0;
                if (m_monoSpacing != 0)
                {
                    monoAdvance = (m_monoSpacing / 2 - (m_cached_TextElement.glyph.metrics.width / 2 + m_cached_TextElement.glyph.metrics.horizontalBearingX) * currentElementScale) * (1 - m_charWidthAdjDelta);
                    m_xAdvance += monoAdvance;
                }
                #endregion


                // Set Padding based on selected font style
                #region Handle Style Padding
                float boldSpacingAdjustment = 0;
                if (m_textElementType == TMP_TextElementType.Character && !isUsingAltTypeface && ((m_FontStyleInternal & FontStyles.Bold) == FontStyles.Bold)) // Checks for any combination of Bold Style.
                    boldSpacingAdjustment = m_currentFontAsset.boldSpacing;
                #endregion Handle Style Padding

                m_internalCharacterInfo[m_characterCount].baseLine = 0 - m_lineOffset + m_baselineOffset;

                // Compute text metrics
                #region Compute Ascender & Descender values
                // Element Ascender in line space
                float elementAscender = m_textElementType == TMP_TextElementType.Character
                    ? elementAscentLine * currentElementScale / smallCapsMultiplier + m_baselineOffset
                    : elementAscentLine * currentElementScale + m_baselineOffset;

                // Element Descender in line space
                float elementDescender = m_textElementType == TMP_TextElementType.Character
                    ? elementDescentLine * currentElementScale / smallCapsMultiplier + m_baselineOffset
                    : elementDescentLine * currentElementScale + m_baselineOffset;

                float adjustedAscender = elementAscender;
                float adjustedDescender = elementDescender;

                bool isFirstCharacterOfLine = m_characterCount == m_firstCharacterOfLine;
                // Max line ascender and descender in line space
                if (isFirstCharacterOfLine || isWhiteSpace == false)
                {
                    // Special handling for Superscript and Subscript where we use the unadjusted line ascender and descender
                    if (m_baselineOffset != 0)
                    {
                        adjustedAscender = Mathf.Max((elementAscender - m_baselineOffset) / m_fontScaleMultiplier, adjustedAscender);
                        adjustedDescender = Mathf.Min((elementDescender - m_baselineOffset) / m_fontScaleMultiplier, adjustedDescender);
                    }

                    m_maxLineAscender = Mathf.Max(adjustedAscender, m_maxLineAscender);
                    m_maxLineDescender = Mathf.Min(adjustedDescender, m_maxLineDescender);
                }

                // Element Ascender and Descender in object space
                if (isFirstCharacterOfLine || isWhiteSpace == false)
                {
                    m_internalCharacterInfo[m_characterCount].adjustedAscender = adjustedAscender;
                    m_internalCharacterInfo[m_characterCount].adjustedDescender = adjustedDescender;

                    m_ElementAscender = m_internalCharacterInfo[m_characterCount].ascender = elementAscender - m_lineOffset;
                    m_ElementDescender = m_internalCharacterInfo[m_characterCount].descender = elementDescender - m_lineOffset;
                }
                else
                {
                    m_internalCharacterInfo[m_characterCount].adjustedAscender = m_maxLineAscender;
                    m_internalCharacterInfo[m_characterCount].adjustedDescender = m_maxLineDescender;

                    m_ElementAscender = m_internalCharacterInfo[m_characterCount].ascender = m_maxLineAscender - m_lineOffset;
                    m_ElementDescender = m_internalCharacterInfo[m_characterCount].descender = m_maxLineDescender - m_lineOffset;
                }

                // Max text object ascender and cap height
                if (m_lineNumber == 0 || m_isNewPage)
                {
                    if (isFirstCharacterOfLine || isWhiteSpace == false)
                    {
                        m_maxTextAscender = m_maxLineAscender;
                        m_maxCapHeight = Mathf.Max(m_maxCapHeight, m_currentFontAsset.m_FaceInfo.capLine * currentElementScale / smallCapsMultiplier);
                    }
                }

                // Page ascender
                if (m_lineOffset == 0)
                {
                    if (!isWhiteSpace || m_characterCount == m_firstCharacterOfLine)
                        m_PageAscender = m_PageAscender > elementAscender ? m_PageAscender : elementAscender;
                }
                #endregion

                bool isJustifiedOrFlush = (m_lineJustification & HorizontalAlignmentOptions.Flush) == HorizontalAlignmentOptions.Flush || (m_lineJustification & HorizontalAlignmentOptions.Justified) == HorizontalAlignmentOptions.Justified;

                // Setup Mesh for visible text elements. ie. not a SPACE / LINEFEED / CARRIAGE RETURN.
                #region Handle Visible Characters
                if (charCode == 9 || (isWhiteSpace == false && charCode != 0x200B && charCode != 0xAD && charCode != 0x03) || (charCode == 0xAD && isSoftHyphenIgnored == false) || m_textElementType == TMP_TextElementType.Sprite)
                {
                    //float marginLeft = m_marginLeft;
                    //float marginRight = m_marginRight;

                    // Injected characters do not override margins
                    //if (isInjectingCharacter)
                    //{
                    //    marginLeft = m_textInfo.lineInfo[m_lineNumber].marginLeft;
                    //    marginRight = m_textInfo.lineInfo[m_lineNumber].marginRight;
                    //}

                    widthOfTextArea = m_width != -1 ? Mathf.Min(marginWidth + 0.0001f - m_marginLeft - m_marginRight, m_width) : marginWidth + 0.0001f - m_marginLeft - m_marginRight;

                    // Calculate the line breaking width of the text.
                    textWidth = Mathf.Abs(m_xAdvance) + currentGlyphMetrics.horizontalAdvance * (1 - m_charWidthAdjDelta) * (charCode == 0xAD ? currentElementUnmodifiedScale : currentElementScale);

                    int testedCharacterCount = m_characterCount;

                    // Handling of Horizontal Bounds
                    #region Current Line Horizontal Bounds Check
                    if (textWidth > widthOfTextArea * (isJustifiedOrFlush ? 1.05f : 1.0f))
                    {
                        // Handle Line Breaking (if still possible)
                        if (isWordWrappingEnabled && m_characterCount != m_firstCharacterOfLine) // && isFirstWord == false)
                        {
                            // Restore state to previous safe line breaking
                            i = RestoreWordWrappingState(ref internalWordWrapState);

                            // Replace Soft Hyphen by Hyphen Minus 0x2D
                            #region Handle Soft Hyphenation
                            if (m_internalCharacterInfo[m_characterCount - 1].character == 0xAD && isSoftHyphenIgnored == false && m_overflowMode == TextOverflowModes.Overflow)
                            {
                                characterToSubstitute.index = m_characterCount - 1;
                                characterToSubstitute.unicode = 0x2D;

                                i -= 1;
                                m_characterCount -= 1;
                                continue;
                            }

                            isSoftHyphenIgnored = false;

                            // Ignore Soft Hyphen to prevent it from wrapping
                            if (m_internalCharacterInfo[m_characterCount].character == 0xAD)
                            {
                                isSoftHyphenIgnored = true;
                                continue;
                            }
                            #endregion

                            // Adjust character spacing before breaking up word if auto size is enabled
                            #region Handle Text Auto Size (if word wrapping is no longer possible)
                            if (isTextAutoSizingEnabled && isFirstWordOfLine)
                            {
                                // Handle Character Width Adjustments
                                #region Character Width Adjustments
                                if (m_charWidthAdjDelta < m_charWidthMaxAdj / 100 && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                                {
                                    float adjustedTextWidth = textWidth;

                                    // Determine full width of the text
                                    if (m_charWidthAdjDelta > 0)
                                        adjustedTextWidth /= 1f - m_charWidthAdjDelta;

                                    float adjustmentDelta = textWidth - (widthOfTextArea - 0.0001f) * (isJustifiedOrFlush ? 1.05f : 1.0f);
                                    m_charWidthAdjDelta += adjustmentDelta / adjustedTextWidth;
                                    m_charWidthAdjDelta = Mathf.Min(m_charWidthAdjDelta, m_charWidthMaxAdj / 100);

                                    //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Character Width by " + (m_charWidthAdjDelta * 100) + "%");
                                    return Vector2.zero;
                                }
                                #endregion

                                // Handle Text Auto-sizing resulting from text exceeding vertical bounds.
                                #region Text Auto-Sizing (Text greater than vertical bounds)
                                if (fontSize > m_fontSizeMin && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                                {
                                    m_maxFontSize = fontSize;

                                    float sizeDelta = Mathf.Max((fontSize - m_minFontSize) / 2, 0.05f);
                                    fontSize -= sizeDelta;
                                    fontSize = Mathf.Max((int)(fontSize * 20 + 0.5f) / 20f, m_fontSizeMin);

                                    //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Point Size from [" + m_maxFontSize.ToString("f3") + "] to [" + m_fontSize.ToString("f3") + "] with delta of [" + sizeDelta.ToString("f3") + "].");
                                    return Vector2.zero;
                                }
                                #endregion Text Auto-Sizing
                            }
                            #endregion

                            // Adjust line spacing if necessary
                            float baselineAdjustmentDelta = m_maxLineAscender - m_startOfLineAscender;
                            if (m_lineOffset > 0 && Math.Abs(baselineAdjustmentDelta) > 0.01f && m_IsDrivenLineSpacing == false && !m_isNewPage)
                            {
                                //AdjustLineOffset(m_firstCharacterOfLine, m_characterCount, baselineAdjustmentDelta);
                                m_ElementDescender -= baselineAdjustmentDelta;
                                m_lineOffset += baselineAdjustmentDelta;
                            }

                            // Calculate line ascender and make sure if last character is superscript or subscript that we check that as well.
                            float lineAscender = m_maxLineAscender - m_lineOffset;
                            float lineDescender = m_maxLineDescender - m_lineOffset;

                            // Update maxDescender and maxVisibleDescender
                            m_ElementDescender = m_ElementDescender < lineDescender ? m_ElementDescender : lineDescender;
                            if (!isMaxVisibleDescenderSet)
                                maxVisibleDescender = m_ElementDescender;

                            if (m_useMaxVisibleDescender && (m_characterCount >= m_maxVisibleCharacters || m_lineNumber >= m_maxVisibleLines))
                                isMaxVisibleDescenderSet = true;

                            // Store first character of the next line.
                            m_firstCharacterOfLine = m_characterCount;
                            m_lineVisibleCharacterCount = 0;

                            // Compute Preferred Width & Height
                            renderedWidth += m_xAdvance;

                            if (isWordWrappingEnabled)
                                renderedHeight = m_maxTextAscender - m_ElementDescender;
                            else
                                renderedHeight = Mathf.Max(renderedHeight, lineAscender - lineDescender);

                            // Store the state of the line before starting on the new line.
                            SaveWordWrappingState(ref internalLineState, i, m_characterCount - 1);

                            m_lineNumber += 1;

                            float ascender = m_internalCharacterInfo[m_characterCount].adjustedAscender;

                            // Compute potential new line offset in the event a line break is needed.
                            if (m_lineHeight == TMP_Math.FLOAT_UNSET)
                            {
                                m_lineOffset += 0 - m_maxLineDescender + ascender + (lineGap + m_lineSpacingDelta) * baseScale + m_lineSpacing * currentEmScale;
                                m_IsDrivenLineSpacing = false;
                            }
                            else
                            {
                                m_lineOffset += m_lineHeight + m_lineSpacing * currentEmScale;
                                m_IsDrivenLineSpacing = true;
                            }

                            m_maxLineAscender = k_LargeNegativeFloat;
                            m_maxLineDescender = k_LargePositiveFloat;
                            m_startOfLineAscender = ascender;

                            m_xAdvance = 0 + tag_Indent;
                            //isStartOfNewLine = true;
                            isFirstWordOfLine = true;
                            continue;
                        }
                    }
                    #endregion

                    lineMarginLeft = m_marginLeft;
                    lineMarginRight = m_marginRight;

                }
                #endregion Handle Visible Characters


                // Check if Line Spacing of previous line needs to be adjusted.
                #region Adjust Line Spacing
                /*if (m_lineOffset > 0 && !TMP_Math.Approximately(m_maxLineAscender, m_startOfLineAscender) && m_IsDrivenLineSpacing == false && !m_isNewPage)
                {
                    float offsetDelta = m_maxLineAscender - m_startOfLineAscender;
                    //AdjustLineOffset(m_firstCharacterOfLine, m_characterCount, offsetDelta);
                    m_ElementDescender -= offsetDelta;
                    m_lineOffset += offsetDelta;

                    m_startOfLineAscender += offsetDelta;
                    internalWordWrapState.lineOffset = m_lineOffset;
                    internalWordWrapState.startOfLineAscender = m_startOfLineAscender;
                }*/
                #endregion


                // Handle xAdvance & Tabulation Stops. Tab stops at every 25% of Font Size.
                #region XAdvance, Tabulation & Stops
                if (charCode == 9)
                {
                    float tabSize = m_currentFontAsset.faceInfo.tabWidth * m_currentFontAsset.tabSize * currentElementScale;
                    float tabs = Mathf.Ceil(m_xAdvance / tabSize) * tabSize;
                    m_xAdvance = tabs > m_xAdvance ? tabs : m_xAdvance + tabSize;
                }
                else if (m_monoSpacing != 0)
                {
                    m_xAdvance += (m_monoSpacing - monoAdvance + ((m_currentFontAsset.normalSpacingOffset + characterSpacingAdjustment) * currentEmScale) + m_cSpacing) * (1 - m_charWidthAdjDelta);

                    if (isWhiteSpace || charCode == 0x200B)
                        m_xAdvance += m_wordSpacing * currentEmScale;
                }
                else
                {
                    m_xAdvance += ((currentGlyphMetrics.horizontalAdvance + glyphAdjustments.xAdvance + boldSpacingAdjustment) * currentElementScale + (m_currentFontAsset.normalSpacingOffset + characterSpacingAdjustment) * currentEmScale + m_cSpacing) * (1 - m_charWidthAdjDelta);

                    if (isWhiteSpace || charCode == 0x200B)
                        m_xAdvance += m_wordSpacing * currentEmScale;
                }
                #endregion Tabulation & Stops


                // Handle Carriage Return
                #region Carriage Return
                if (charCode == 13)
                {
                    maxXAdvance = Mathf.Max(maxXAdvance, renderedWidth + m_xAdvance);
                    renderedWidth = 0;
                    m_xAdvance = 0 + tag_Indent;
                }
                #endregion Carriage Return


                // Handle Line Spacing Adjustments + Word Wrapping & special case for last line.
                #region Check for Line Feed and Last Character
                if (charCode == 10 || charCode == 11 || charCode == 0x03 || charCode == 0x2028 || charCode == 0x2029 || m_characterCount == totalCharacterCount - 1)
                {
                    // Check if Line Spacing of previous line needs to be adjusted.
                    float baselineAdjustmentDelta = m_maxLineAscender - m_startOfLineAscender;
                    if (m_lineOffset > 0 && Math.Abs(baselineAdjustmentDelta) > 0.01f && m_IsDrivenLineSpacing == false && !m_isNewPage)
                    {
                        m_ElementDescender -= baselineAdjustmentDelta;
                        m_lineOffset += baselineAdjustmentDelta;
                    }
                    m_isNewPage = false;

                    // Calculate lineAscender & make sure if last character is superscript or subscript that we check that as well.
                    //float lineAscender = m_maxLineAscender - m_lineOffset;
                    float lineDescender = m_maxLineDescender - m_lineOffset;

                    // Update maxDescender and maxVisibleDescender
                    m_ElementDescender = m_ElementDescender < lineDescender ? m_ElementDescender : lineDescender;

                    // Store PreferredWidth paying attention to linefeed and last character of text.
                    if (m_characterCount == totalCharacterCount - 1)
                        renderedWidth = Mathf.Max(maxXAdvance, renderedWidth + textWidth + lineMarginLeft + lineMarginRight);
                    else
                    {
                        maxXAdvance = Mathf.Max(maxXAdvance, renderedWidth + textWidth + lineMarginLeft + lineMarginRight);
                        renderedWidth = 0;
                    }

                    renderedHeight = m_maxTextAscender - m_ElementDescender;

                    // Add new line if not last lines or character.
                    if (charCode == 10 || charCode == 11 || charCode == 0x2D || charCode == 0x2028 || charCode == 0x2029)
                    {
                        // Store the state of the line before starting on the new line.
                        SaveWordWrappingState(ref internalLineState, i, m_characterCount);
                        // Store the state of the last Character before the new line.
                        SaveWordWrappingState(ref internalWordWrapState, i, m_characterCount);

                        m_lineNumber += 1;
                        m_firstCharacterOfLine = m_characterCount + 1;

                        float ascender = m_internalCharacterInfo[m_characterCount].adjustedAscender;

                        // Apply Line Spacing with special handling for VT char(11)
                        if (m_lineHeight == TMP_Math.FLOAT_UNSET)
                        {
                            float lineOffsetDelta = 0 - m_maxLineDescender + ascender + (lineGap + m_lineSpacingDelta) * baseScale + (m_lineSpacing + (charCode == 10 || charCode == 0x2029 ? m_paragraphSpacing : 0)) * currentEmScale;
                            m_lineOffset += lineOffsetDelta;
                            m_IsDrivenLineSpacing = false;
                        }
                        else
                        {
                            m_lineOffset += m_lineHeight + (m_lineSpacing + (charCode == 10 || charCode == 0x2029 ? m_paragraphSpacing : 0)) * currentEmScale;
                            m_IsDrivenLineSpacing = true;
                        }

                        m_maxLineAscender = k_LargeNegativeFloat;
                        m_maxLineDescender = k_LargePositiveFloat;
                        m_startOfLineAscender = ascender;

                        m_xAdvance = 0 + tag_LineIndent + tag_Indent;

                        m_characterCount += 1;
                        continue;
                    }

                    // If End of Text
                    if (charCode == 0x03)
                        i = m_InternalParsingBuffer.Length;
                }
                #endregion Check for Linefeed or Last Character


                // Save State of Mesh Creation for handling of Word Wrapping
                #region Save Word Wrapping State
                if (isWordWrappingEnabled || m_overflowMode == TextOverflowModes.Truncate || m_overflowMode == TextOverflowModes.Ellipsis)
                {
                    if ((isWhiteSpace || charCode == 0x200B || charCode == 0x2D || charCode == 0xAD) && !m_isNonBreakingSpace && charCode != 0xA0 && charCode != 0x2007 && charCode != 0x2011 && charCode != 0x202F && charCode != 0x2060)
                    {
                        // We store the state of numerous variables for the most recent Space, LineFeed or Carriage Return to enable them to be restored
                        // for Word Wrapping.
                        SaveWordWrappingState(ref internalWordWrapState, i, m_characterCount);
                        isFirstWordOfLine = false;
                        isLastCharacterCJK = false;

                        // Reset soft line breaking point since we now have a valid hard break point.
                        internalSoftLineBreak.previous_WordBreak = -1;
                    }
                    // Handling for East Asian languages
                    else if (m_isNonBreakingSpace == false &&
                             ((charCode > 0x1100 && charCode < 0x11ff || /* Hangul Jamo */
                               charCode > 0xA960 && charCode < 0xA97F || /* Hangul Jamo Extended-A */
                               charCode > 0xAC00 && charCode < 0xD7FF)&& /* Hangul Syllables */
                              TMP_Settings.useModernHangulLineBreakingRules == false ||

                              (charCode > 0x2E80 && charCode < 0x9FFF || /* CJK */
                               charCode > 0xF900 && charCode < 0xFAFF || /* CJK Compatibility Ideographs */
                               charCode > 0xFE30 && charCode < 0xFE4F || /* CJK Compatibility Forms */
                               charCode > 0xFF00 && charCode < 0xFFEF))) /* CJK Halfwidth */
                    {
                        bool isLeadingCharacter = TMP_Settings.linebreakingRules.leadingCharacters.ContainsKey(charCode);
                        bool isFollowingCharacter = m_characterCount < totalCharacterCount - 1 && TMP_Settings.linebreakingRules.followingCharacters.ContainsKey(m_internalCharacterInfo[m_characterCount + 1].character);

                        if (isFirstWordOfLine || isLeadingCharacter == false)
                        {
                            if (isFollowingCharacter == false)
                            {
                                SaveWordWrappingState(ref internalWordWrapState, i, m_characterCount);
                                isFirstWordOfLine = false;
                            }

                            if (isFirstWordOfLine)
                            {
                                // Special handling for non-breaking space and soft line breaks
                                if (isWhiteSpace)
                                    SaveWordWrappingState(ref internalSoftLineBreak, i, m_characterCount);

                                SaveWordWrappingState(ref internalWordWrapState, i, m_characterCount);
                            }
                        }

                        isLastCharacterCJK = true;
                    }
                    else if (isLastCharacterCJK)
                    {
                        bool isLeadingCharacter = TMP_Settings.linebreakingRules.leadingCharacters.ContainsKey(charCode);

                        if (isLeadingCharacter == false)
                            SaveWordWrappingState(ref internalWordWrapState, i, m_characterCount);

                        isLastCharacterCJK = false;
                    }
                    else if (isFirstWordOfLine)
                    {
                        // Special handling for non-breaking space and soft line breaks
                        if (isWhiteSpace || (charCode == 0xAD && isSoftHyphenIgnored == false))
                            SaveWordWrappingState(ref internalSoftLineBreak, i, m_characterCount);

                        SaveWordWrappingState(ref internalWordWrapState, i, m_characterCount);
                        isLastCharacterCJK = false;
                    }
                }
                #endregion Save Word Wrapping State

                m_characterCount += 1;
            }

            // Check Auto Sizing and increase font size to fill text container.
            #region Check Auto-Sizing (Upper Font Size Bounds)
            fontSizeDelta = m_maxFontSize - m_minFontSize;
            if (isTextAutoSizingEnabled && fontSizeDelta > 0.051f && fontSize < m_fontSizeMax && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
            {
                // Reset character width adjustment delta
                if (m_charWidthAdjDelta < m_charWidthMaxAdj / 100)
                    m_charWidthAdjDelta = 0;

                m_minFontSize = fontSize;

                float sizeDelta = Mathf.Max((m_maxFontSize - fontSize) / 2, 0.05f);
                fontSize += sizeDelta;
                fontSize = Mathf.Min((int)(fontSize * 20 + 0.5f) / 20f, m_fontSizeMax);

                //Debug.Log("[" + m_AutoSizeIterationCount + "] Increasing Point Size from [" + m_minFontSize.ToString("f3") + "] to [" + m_fontSize.ToString("f3") + "] with delta of [" + sizeDelta.ToString("f3") + "].");
                return Vector2.zero;
            }
            #endregion End Auto-sizing Check

            m_IsAutoSizePointSizeSet = true;

            m_isCalculatingPreferredValues = false;

            // Adjust Preferred Width and Height to account for Margins.
            renderedWidth += m_margin.x > 0 ? m_margin.x : 0;
            renderedWidth += m_margin.z > 0 ? m_margin.z : 0;

            renderedHeight += m_margin.y > 0 ? m_margin.y : 0;
            renderedHeight += m_margin.w > 0 ? m_margin.w : 0;

            // Round Preferred Values to nearest 5/100.
            renderedWidth = (int)(renderedWidth * 100 + 1f) / 100f;
            renderedHeight = (int)(renderedHeight * 100 + 1f) / 100f;

            //Debug.Log("Preferred Values: (" + renderedWidth + ", " + renderedHeight + ") with Recursive count of " + m_recursiveCount);

            ////Profiler.EndSample();
            return new Vector2(renderedWidth, renderedHeight);
        }


        /// <summary>
        /// Method returning the compound bounds of the text object and child sub objects.
        /// </summary>
        /// <returns></returns>
        protected virtual Bounds GetCompoundBounds() { return new Bounds(); }

        internal virtual Rect GetCanvasSpaceClippingRect() { return Rect.zero; }

        /// <summary>
        /// Method which returns the bounds of the text object;
        /// </summary>
        /// <returns></returns>
        protected Bounds GetTextBounds()
        {
            if (m_textInfo == null || m_textInfo.characterCount > m_textInfo.characterInfo.Length) return new Bounds();

            Extents extent = new Extents(k_LargePositiveVector2, k_LargeNegativeVector2);

            for (int i = 0; i < m_textInfo.characterCount && i < m_textInfo.characterInfo.Length; i++)
            {
                if (!m_textInfo.characterInfo[i].isVisible) continue;

                extent.min.x = Mathf.Min(extent.min.x, m_textInfo.characterInfo[i].bottomLeft.x);
                extent.min.y = Mathf.Min(extent.min.y, m_textInfo.characterInfo[i].descender);

                extent.max.x = Mathf.Max(extent.max.x, m_textInfo.characterInfo[i].xAdvance);
                extent.max.y = Mathf.Max(extent.max.y, m_textInfo.characterInfo[i].ascender);
            }

            Vector2 size;
            size.x = extent.max.x - extent.min.x;
            size.y = extent.max.y - extent.min.y;

            Vector3 center = (extent.min + extent.max) / 2;

            return new Bounds(center, size);
        }


        /// <summary>
        /// Method which returns the bounds of the text object;
        /// </summary>
        /// <param name="onlyVisibleCharacters"></param>
        /// <returns></returns>
        protected Bounds GetTextBounds(bool onlyVisibleCharacters)
        {
            if (m_textInfo == null) return new Bounds();

            Extents extent = new Extents(k_LargePositiveVector2, k_LargeNegativeVector2);

            for (int i = 0; i < m_textInfo.characterCount; i++)
            {
                if ((i > maxVisibleCharacters || m_textInfo.characterInfo[i].lineNumber > m_maxVisibleLines) && onlyVisibleCharacters) break;

                if (onlyVisibleCharacters && !m_textInfo.characterInfo[i].isVisible) continue;

                extent.min.x = Mathf.Min(extent.min.x, m_textInfo.characterInfo[i].origin);
                extent.min.y = Mathf.Min(extent.min.y, m_textInfo.characterInfo[i].descender);

                extent.max.x = Mathf.Max(extent.max.x, m_textInfo.characterInfo[i].xAdvance);
                extent.max.y = Mathf.Max(extent.max.y, m_textInfo.characterInfo[i].ascender);
            }

            Vector2 size;
            size.x = extent.max.x - extent.min.x;
            size.y = extent.max.y - extent.min.y;

            Vector2 center = (extent.min + extent.max) / 2;

            return new Bounds(center, size);
        }


        /// <summary>
        /// Method to adjust line spacing as a result of using different fonts or font point size.
        /// </summary>
        /// <param name="startIndex"></param>
        /// <param name="endIndex"></param>
        /// <param name="offset"></param>
        // Function to offset vertices position to account for line spacing changes.
        protected void AdjustLineOffset(int startIndex, int endIndex, float offset)
        {
            Vector3 vertexOffset = new Vector3(0, offset, 0);

            for (int i = startIndex; i <= endIndex; i++)
            {
                m_textInfo.characterInfo[i].bottomLeft -= vertexOffset;
                m_textInfo.characterInfo[i].topLeft -= vertexOffset;
                m_textInfo.characterInfo[i].topRight -= vertexOffset;
                m_textInfo.characterInfo[i].bottomRight -= vertexOffset;

                m_textInfo.characterInfo[i].ascender -= vertexOffset.y;
                m_textInfo.characterInfo[i].baseLine -= vertexOffset.y;
                m_textInfo.characterInfo[i].descender -= vertexOffset.y;

                if (m_textInfo.characterInfo[i].isVisible)
                {
                    m_textInfo.characterInfo[i].vertex_BL.position -= vertexOffset;
                    m_textInfo.characterInfo[i].vertex_TL.position -= vertexOffset;
                    m_textInfo.characterInfo[i].vertex_TR.position -= vertexOffset;
                    m_textInfo.characterInfo[i].vertex_BR.position -= vertexOffset;
                }
            }
        }


        /// <summary>
        /// Function to increase the size of the Line Extents Array.
        /// </summary>
        /// <param name="size"></param>
        protected void ResizeLineExtents(int size)
        {
            size = size > 1024 ? size + 256 : Mathf.NextPowerOfTwo(size + 1);

            TMP_LineInfo[] temp_lineInfo = new TMP_LineInfo[size];
            for (int i = 0; i < size; i++)
            {
                if (i < m_textInfo.lineInfo.Length)
                    temp_lineInfo[i] = m_textInfo.lineInfo[i];
                else
                {
                    temp_lineInfo[i].lineExtents.min = k_LargePositiveVector2;
                    temp_lineInfo[i].lineExtents.max = k_LargeNegativeVector2;

                    temp_lineInfo[i].ascender = k_LargeNegativeFloat;
                    temp_lineInfo[i].descender = k_LargePositiveFloat;
                }
            }

            m_textInfo.lineInfo = temp_lineInfo;
        }
        protected static Vector2 k_LargePositiveVector2 = new Vector2(TMP_Math.INT_MAX, TMP_Math.INT_MAX);
        protected static Vector2 k_LargeNegativeVector2 = new Vector2(TMP_Math.INT_MIN, TMP_Math.INT_MIN);
        protected static float k_LargePositiveFloat = TMP_Math.FLOAT_MAX;
        protected static float k_LargeNegativeFloat = TMP_Math.FLOAT_MIN;
        protected static int k_LargePositiveInt = TMP_Math.INT_MAX;
        protected static int k_LargeNegativeInt = TMP_Math.INT_MIN;

        /// <summary>
        /// Function used to evaluate the length of a text string.
        /// </summary>
        /// <param name="text"></param>
        /// <returns></returns>
        public virtual TMP_TextInfo GetTextInfo(string text) { return null; }


        /// <summary>
        /// Function to force an update of the margin size.
        /// </summary>
        public virtual void ComputeMarginSize() { }


        /// <summary>
        /// Function used in conjunction with GetTextInfo to figure out Array allocations.
        /// </summary>
        /// <param name="chars"></param>
        /// <returns></returns>
        //protected int GetArraySizes(int[] chars)
        //{
        //    //Debug.Log("Set Array Size called.");

        //    //int visibleCount = 0;
        //    //int totalCount = 0;
        //    int tagEnd = 0;

        //    m_totalCharacterCount = 0;
        //    m_isUsingBold = false;
        //    m_isParsingText = false;


        //    //m_VisibleCharacters.Clear();

        //    for (int i = 0; chars[i] != 0; i++)
        //    {
        //        int c = chars[i];

        //        if (m_isRichText && c == 60) // if Char '<'
        //        {
        //            // Check if Tag is Valid
        //            if (ValidateHtmlTag(chars, i + 1, out tagEnd))
        //            {
        //                i = tagEnd;
        //                //if ((m_style & FontStyles.Underline) == FontStyles.Underline) visibleCount += 3;

        //                if ((m_style & FontStyles.Bold) == FontStyles.Bold) m_isUsingBold = true;

        //                continue;
        //            }
        //        }

        //        //if (!char.IsWhiteSpace((char)c) && c != 0x200B)
        //        //{
        //            //visibleCount += 1;
        //        //}

        //        //m_VisibleCharacters.Add((char)c);
        //        m_totalCharacterCount += 1;
        //    }

        //    return m_totalCharacterCount;
        //}


        protected void InsertNewLine(int i, float baseScale, float currentElementScale, float currentEmScale, float glyphAdjustment, float boldSpacingAdjustment, float characterSpacingAdjustment, float width, float lineGap, ref bool isMaxVisibleDescenderSet, ref float maxVisibleDescender)
        {
            // Adjust line spacing if necessary
            float baselineAdjustmentDelta = m_maxLineAscender - m_startOfLineAscender;
            if (m_lineOffset > 0 && Math.Abs(baselineAdjustmentDelta) > 0.01f && m_IsDrivenLineSpacing == false && !m_isNewPage)
            {
                AdjustLineOffset(m_firstCharacterOfLine, m_characterCount, baselineAdjustmentDelta);
                m_ElementDescender -= baselineAdjustmentDelta;
                m_lineOffset += baselineAdjustmentDelta;
            }

            // Calculate lineAscender & make sure if last character is superscript or subscript that we check that as well.
            float lineAscender = m_maxLineAscender - m_lineOffset;
            float lineDescender = m_maxLineDescender - m_lineOffset;

            // Update maxDescender and maxVisibleDescender
            m_ElementDescender = m_ElementDescender < lineDescender ? m_ElementDescender : lineDescender;
            if (!isMaxVisibleDescenderSet)
                maxVisibleDescender = m_ElementDescender;

            if (m_useMaxVisibleDescender && (m_characterCount >= m_maxVisibleCharacters || m_lineNumber >= m_maxVisibleLines))
                isMaxVisibleDescenderSet = true;

            // Track & Store lineInfo for the new line
            m_textInfo.lineInfo[m_lineNumber].firstCharacterIndex = m_firstCharacterOfLine;
            m_textInfo.lineInfo[m_lineNumber].firstVisibleCharacterIndex = m_firstVisibleCharacterOfLine = m_firstCharacterOfLine > m_firstVisibleCharacterOfLine ? m_firstCharacterOfLine : m_firstVisibleCharacterOfLine;
            int lastCharacterIndex = m_textInfo.lineInfo[m_lineNumber].lastCharacterIndex = m_lastCharacterOfLine = m_characterCount - 1 > 0 ? m_characterCount - 1 : 0;
            m_textInfo.lineInfo[m_lineNumber].lastVisibleCharacterIndex = m_lastVisibleCharacterOfLine = m_lastVisibleCharacterOfLine < m_firstVisibleCharacterOfLine ? m_firstVisibleCharacterOfLine : m_lastVisibleCharacterOfLine;

            m_textInfo.lineInfo[m_lineNumber].characterCount = m_textInfo.lineInfo[m_lineNumber].lastCharacterIndex - m_textInfo.lineInfo[m_lineNumber].firstCharacterIndex + 1;
            m_textInfo.lineInfo[m_lineNumber].visibleCharacterCount = m_lineVisibleCharacterCount;
            m_textInfo.lineInfo[m_lineNumber].lineExtents.min = new Vector2(m_textInfo.characterInfo[m_firstVisibleCharacterOfLine].bottomLeft.x, lineDescender);
            m_textInfo.lineInfo[m_lineNumber].lineExtents.max = new Vector2(m_textInfo.characterInfo[m_lastVisibleCharacterOfLine].topRight.x, lineAscender);
            m_textInfo.lineInfo[m_lineNumber].length = m_textInfo.lineInfo[m_lineNumber].lineExtents.max.x;
            m_textInfo.lineInfo[m_lineNumber].width = width;

            float maxAdvanceOffset = ((glyphAdjustment + boldSpacingAdjustment) * currentElementScale + (m_currentFontAsset.normalSpacingOffset + characterSpacingAdjustment) * currentEmScale - m_cSpacing) * (1 - m_charWidthAdjDelta);
            float adjustedHorizontalAdvance = m_textInfo.lineInfo[m_lineNumber].maxAdvance = m_textInfo.characterInfo[m_lastVisibleCharacterOfLine].xAdvance + (m_isRightToLeft ? maxAdvanceOffset : - maxAdvanceOffset);
            m_textInfo.characterInfo[lastCharacterIndex].xAdvance = adjustedHorizontalAdvance;

            m_textInfo.lineInfo[m_lineNumber].baseline = 0 - m_lineOffset;
            m_textInfo.lineInfo[m_lineNumber].ascender = lineAscender;
            m_textInfo.lineInfo[m_lineNumber].descender = lineDescender;
            m_textInfo.lineInfo[m_lineNumber].lineHeight = lineAscender - lineDescender + lineGap * baseScale;

            m_firstCharacterOfLine = m_characterCount; // Store first character of the next line.
            m_lineVisibleCharacterCount = 0;

            // Store the state of the line before starting on the new line.
            SaveWordWrappingState(ref m_SavedLineState, i, m_characterCount - 1);

            m_lineNumber += 1;

            // Check to make sure Array is large enough to hold a new line.
            if (m_lineNumber >= m_textInfo.lineInfo.Length)
                ResizeLineExtents(m_lineNumber);

            // Apply Line Spacing based on scale of the last character of the line.
            if (m_lineHeight == TMP_Math.FLOAT_UNSET)
            {
                float ascender = m_textInfo.characterInfo[m_characterCount].adjustedAscender;
                float lineOffsetDelta = 0 - m_maxLineDescender + ascender + (lineGap + m_lineSpacingDelta) * baseScale + m_lineSpacing * currentEmScale;
                m_lineOffset += lineOffsetDelta;

                m_startOfLineAscender = ascender;
            }
            else
            {
                m_lineOffset += m_lineHeight + m_lineSpacing * currentEmScale;
            }

            m_maxLineAscender = k_LargeNegativeFloat;
            m_maxLineDescender = k_LargePositiveFloat;

            m_xAdvance = 0 + tag_Indent;
        }


        /// <summary>
        /// Save the State of various variables used in the mesh creation loop in conjunction with Word Wrapping
        /// </summary>
        /// <param name="state"></param>
        /// <param name="index"></param>
        /// <param name="count"></param>
        protected void SaveWordWrappingState(ref WordWrapState state, int index, int count)
        {
            // Multi Font & Material support related
            state.currentFontAsset = m_currentFontAsset;
            state.currentSpriteAsset = m_currentSpriteAsset;
            state.currentMaterial = m_currentMaterial;
            state.currentMaterialIndex = m_currentMaterialIndex;

            state.previous_WordBreak = index;
            state.total_CharacterCount = count;
            state.visible_CharacterCount = m_lineVisibleCharacterCount;
            //state.visible_CharacterCount = m_visibleCharacterCount;
            //state.visible_SpriteCount = m_visibleSpriteCount;
            state.visible_LinkCount = m_textInfo.linkCount;

            state.firstCharacterIndex = m_firstCharacterOfLine;
            state.firstVisibleCharacterIndex = m_firstVisibleCharacterOfLine;
            state.lastVisibleCharIndex = m_lastVisibleCharacterOfLine;

            state.fontStyle = m_FontStyleInternal;
            state.italicAngle = m_ItalicAngle;
            state.fontScale = m_fontScale;
            //state.maxFontScale = m_maxFontScale;
            state.fontScaleMultiplier = m_fontScaleMultiplier;
            state.currentFontSize = m_currentFontSize;

            state.xAdvance = m_xAdvance;
            state.maxCapHeight = m_maxCapHeight;
            state.maxAscender = m_maxTextAscender;
            state.maxDescender = m_ElementDescender;
            state.startOfLineAscender = m_startOfLineAscender;
            state.maxLineAscender = m_maxLineAscender;
            state.maxLineDescender = m_maxLineDescender;
            state.pageAscender = m_PageAscender;

            state.preferredWidth = m_preferredWidth;
            state.preferredHeight = m_preferredHeight;
            state.meshExtents = m_meshExtents;

            state.lineNumber = m_lineNumber;
            state.lineOffset = m_lineOffset;
            state.baselineOffset = m_baselineOffset;
            state.isDrivenLineSpacing = m_IsDrivenLineSpacing;
            state.glyphHorizontalAdvanceAdjustment = m_GlyphHorizontalAdvanceAdjustment;

            state.cSpace = m_cSpacing;
            state.mSpace = m_monoSpacing;

            state.horizontalAlignment = m_lineJustification;
            state.marginLeft = m_marginLeft;
            state.marginRight = m_marginRight;

            state.vertexColor = m_htmlColor;
            state.underlineColor = m_underlineColor;
            state.strikethroughColor = m_strikethroughColor;

            state.isNonBreakingSpace = m_isNonBreakingSpace;
            state.tagNoParsing = tag_NoParsing;

            // XML Tag Stack
            state.basicStyleStack = m_fontStyleStack;
            state.italicAngleStack = m_ItalicAngleStack;
            state.colorStack = m_colorStack;
            state.underlineColorStack = m_underlineColorStack;
            state.strikethroughColorStack = m_strikethroughColorStack;
            state.highlightStateStack = m_HighlightStateStack;
            state.colorGradientStack = m_colorGradientStack;
            state.sizeStack = m_sizeStack;
            state.indentStack = m_indentStack;
            state.fontWeightStack = m_FontWeightStack;
            //state.styleStack = m_styleStack;

            state.baselineStack = m_baselineOffsetStack;
            state.actionStack = m_actionStack;
            state.materialReferenceStack = m_materialReferenceStack;
            state.lineJustificationStack = m_lineJustificationStack;
            //state.spriteAnimationStack = m_spriteAnimationStack;

            state.spriteAnimationID = m_spriteAnimationID;

            if (m_lineNumber < m_textInfo.lineInfo.Length)
                state.lineInfo = m_textInfo.lineInfo[m_lineNumber];
        }


        /// <summary>
        /// Restore the State of various variables used in the mesh creation loop.
        /// </summary>
        /// <param name="state"></param>
        /// <returns></returns>
        protected int RestoreWordWrappingState(ref WordWrapState state)
        {
            int index = state.previous_WordBreak;

            // Multi Font & Material support related
            m_currentFontAsset = state.currentFontAsset;
            m_currentSpriteAsset = state.currentSpriteAsset;
            m_currentMaterial = state.currentMaterial;
            m_currentMaterialIndex = state.currentMaterialIndex;

            m_characterCount = state.total_CharacterCount + 1;
            m_lineVisibleCharacterCount = state.visible_CharacterCount;
            //m_visibleCharacterCount = state.visible_CharacterCount;
            //m_visibleSpriteCount = state.visible_SpriteCount;
            m_textInfo.linkCount = state.visible_LinkCount;

            m_firstCharacterOfLine = state.firstCharacterIndex;
            m_firstVisibleCharacterOfLine = state.firstVisibleCharacterIndex;
            m_lastVisibleCharacterOfLine = state.lastVisibleCharIndex;

            m_FontStyleInternal = state.fontStyle;
            m_ItalicAngle = state.italicAngle;
            m_fontScale = state.fontScale;
            m_fontScaleMultiplier = state.fontScaleMultiplier;
            //m_maxFontScale = state.maxFontScale;
            m_currentFontSize = state.currentFontSize;

            m_xAdvance = state.xAdvance;
            m_maxCapHeight = state.maxCapHeight;
            m_maxTextAscender = state.maxAscender;
            m_ElementDescender = state.maxDescender;
            m_startOfLineAscender = state.startOfLineAscender;
            m_maxLineAscender = state.maxLineAscender;
            m_maxLineDescender = state.maxLineDescender;
            m_PageAscender = state.pageAscender;

            m_preferredWidth = state.preferredWidth;
            m_preferredHeight = state.preferredHeight;
            m_meshExtents = state.meshExtents;

            m_lineNumber = state.lineNumber;
            m_lineOffset = state.lineOffset;
            m_baselineOffset = state.baselineOffset;
            m_IsDrivenLineSpacing = state.isDrivenLineSpacing;
            m_GlyphHorizontalAdvanceAdjustment = state.glyphHorizontalAdvanceAdjustment;

            m_cSpacing = state.cSpace;
            m_monoSpacing = state.mSpace;

            m_lineJustification = state.horizontalAlignment;
            m_marginLeft = state.marginLeft;
            m_marginRight = state.marginRight;

            m_htmlColor = state.vertexColor;
            m_underlineColor = state.underlineColor;
            m_strikethroughColor = state.strikethroughColor;

            m_isNonBreakingSpace = state.isNonBreakingSpace;
            tag_NoParsing = state.tagNoParsing;

            // XML Tag Stack
            m_fontStyleStack = state.basicStyleStack;
            m_ItalicAngleStack = state.italicAngleStack;
            m_colorStack = state.colorStack;
            m_underlineColorStack = state.underlineColorStack;
            m_strikethroughColorStack = state.strikethroughColorStack;
            m_HighlightStateStack = state.highlightStateStack;
            m_colorGradientStack = state.colorGradientStack;
            m_sizeStack = state.sizeStack;
            m_indentStack = state.indentStack;
            m_FontWeightStack = state.fontWeightStack;
            //m_styleStack = state.styleStack;

            m_baselineOffsetStack = state.baselineStack;
            m_actionStack = state.actionStack;
            m_materialReferenceStack = state.materialReferenceStack;
            m_lineJustificationStack = state.lineJustificationStack;
            //m_spriteAnimationStack = state.spriteAnimationStack;

            m_spriteAnimationID = state.spriteAnimationID;

            if (m_lineNumber < m_textInfo.lineInfo.Length)
                m_textInfo.lineInfo[m_lineNumber] = state.lineInfo;

            return index;
        }


        /// <summary>
        /// Store vertex information for each character.
        /// </summary>
        /// <param name="style_padding">Style_padding.</param>
        /// <param name="vertexColor">Vertex color.</param>
        protected virtual void SaveGlyphVertexInfo(float padding, float style_padding, Color32 vertexColor)
        {
            // Save the Vertex Position for the Character
            #region Setup Mesh Vertices
            m_textInfo.characterInfo[m_characterCount].vertex_BL.position = m_textInfo.characterInfo[m_characterCount].bottomLeft;
            m_textInfo.characterInfo[m_characterCount].vertex_TL.position = m_textInfo.characterInfo[m_characterCount].topLeft;
            m_textInfo.characterInfo[m_characterCount].vertex_TR.position = m_textInfo.characterInfo[m_characterCount].topRight;
            m_textInfo.characterInfo[m_characterCount].vertex_BR.position = m_textInfo.characterInfo[m_characterCount].bottomRight;
            #endregion


            #region Setup Vertex Colors
            // Alpha is the lower of the vertex color or tag color alpha used.
            vertexColor.a = m_fontColor32.a < vertexColor.a ? m_fontColor32.a : vertexColor.a;

            // Handle Vertex Colors & Vertex Color Gradient
            if (!m_enableVertexGradient)
            {
                m_textInfo.characterInfo[m_characterCount].vertex_BL.color = vertexColor;
                m_textInfo.characterInfo[m_characterCount].vertex_TL.color = vertexColor;
                m_textInfo.characterInfo[m_characterCount].vertex_TR.color = vertexColor;
                m_textInfo.characterInfo[m_characterCount].vertex_BR.color = vertexColor;
            }
            else
            {
                if (!m_overrideHtmlColors && m_colorStack.index > 1)
                {
                    m_textInfo.characterInfo[m_characterCount].vertex_BL.color = vertexColor;
                    m_textInfo.characterInfo[m_characterCount].vertex_TL.color = vertexColor;
                    m_textInfo.characterInfo[m_characterCount].vertex_TR.color = vertexColor;
                    m_textInfo.characterInfo[m_characterCount].vertex_BR.color = vertexColor;
                }
                else // Handle Vertex Color Gradient
                {
                    // Use Vertex Color Gradient Preset (if one is assigned)
                    if (m_fontColorGradientPreset != null)
                    {
                        m_textInfo.characterInfo[m_characterCount].vertex_BL.color = m_fontColorGradientPreset.bottomLeft * vertexColor;
                        m_textInfo.characterInfo[m_characterCount].vertex_TL.color = m_fontColorGradientPreset.topLeft * vertexColor;
                        m_textInfo.characterInfo[m_characterCount].vertex_TR.color = m_fontColorGradientPreset.topRight * vertexColor;
                        m_textInfo.characterInfo[m_characterCount].vertex_BR.color = m_fontColorGradientPreset.bottomRight * vertexColor;
                    }
                    else
                    {
                        m_textInfo.characterInfo[m_characterCount].vertex_BL.color = m_fontColorGradient.bottomLeft * vertexColor;
                        m_textInfo.characterInfo[m_characterCount].vertex_TL.color = m_fontColorGradient.topLeft * vertexColor;
                        m_textInfo.characterInfo[m_characterCount].vertex_TR.color = m_fontColorGradient.topRight * vertexColor;
                        m_textInfo.characterInfo[m_characterCount].vertex_BR.color = m_fontColorGradient.bottomRight * vertexColor;
                    }
                }
            }

            if (m_colorGradientPreset != null)
            {
                if (m_colorGradientPresetIsTinted)
                {
                    m_textInfo.characterInfo[m_characterCount].vertex_BL.color *= m_colorGradientPreset.bottomLeft;
                    m_textInfo.characterInfo[m_characterCount].vertex_TL.color *= m_colorGradientPreset.topLeft;
                    m_textInfo.characterInfo[m_characterCount].vertex_TR.color *= m_colorGradientPreset.topRight;
                    m_textInfo.characterInfo[m_characterCount].vertex_BR.color *= m_colorGradientPreset.bottomRight;
                }
                else
                {
                    m_textInfo.characterInfo[m_characterCount].vertex_BL.color = m_colorGradientPreset.bottomLeft.MinAlpha(vertexColor);
                    m_textInfo.characterInfo[m_characterCount].vertex_TL.color = m_colorGradientPreset.topLeft.MinAlpha(vertexColor);
                    m_textInfo.characterInfo[m_characterCount].vertex_TR.color = m_colorGradientPreset.topRight.MinAlpha(vertexColor);
                    m_textInfo.characterInfo[m_characterCount].vertex_BR.color = m_colorGradientPreset.bottomRight.MinAlpha(vertexColor);
                }
            }
            #endregion

            // Apply style_padding only if this is a SDF Shader.
            if (!m_isSDFShader)
                style_padding = 0f;


            // Setup UVs for the Character
            #region Setup UVs

            GlyphRect glyphRect = m_cached_TextElement.m_Glyph.glyphRect;

            Vector2 uv0;
            uv0.x = (glyphRect.x - padding - style_padding) / m_currentFontAsset.m_AtlasWidth;
            uv0.y = (glyphRect.y - padding - style_padding) / m_currentFontAsset.m_AtlasHeight;

            Vector2 uv1;
            uv1.x = uv0.x;
            uv1.y = (glyphRect.y + padding + style_padding + glyphRect.height) / m_currentFontAsset.m_AtlasHeight;

            Vector2 uv2;
            uv2.x = (glyphRect.x + padding + style_padding + glyphRect.width) / m_currentFontAsset.m_AtlasWidth;
            uv2.y = uv1.y;

            Vector2 uv3;
            uv3.x = uv2.x;
            uv3.y = uv0.y;

            // Store UV Information
            m_textInfo.characterInfo[m_characterCount].vertex_BL.uv = uv0;
            m_textInfo.characterInfo[m_characterCount].vertex_TL.uv = uv1;
            m_textInfo.characterInfo[m_characterCount].vertex_TR.uv = uv2;
            m_textInfo.characterInfo[m_characterCount].vertex_BR.uv = uv3;
            #endregion Setup UVs


            // Normal
            #region Setup Normals & Tangents
            //Vector3 normal = new Vector3(0, 0, -1);
            //m_textInfo.characterInfo[m_characterCount].vertex_BL.normal = normal;
            //m_textInfo.characterInfo[m_characterCount].vertex_TL.normal = normal;
            //m_textInfo.characterInfo[m_characterCount].vertex_TR.normal = normal;
            //m_textInfo.characterInfo[m_characterCount].vertex_BR.normal = normal;

            // Tangents
            //Vector4 tangent = new Vector4(-1, 0, 0, 1);
            //m_textInfo.characterInfo[m_characterCount].vertex_BL.tangent = tangent;
            //m_textInfo.characterInfo[m_characterCount].vertex_TL.tangent = tangent;
            //m_textInfo.characterInfo[m_characterCount].vertex_TR.tangent = tangent;
            //m_textInfo.characterInfo[m_characterCount].vertex_BR.tangent = tangent;
            #endregion end Normals & Tangents
        }


        /// <summary>
        /// Store vertex information for each sprite.
        /// </summary>
        /// <param name="padding"></param>
        /// <param name="style_padding"></param>
        /// <param name="vertexColor"></param>
        protected virtual void SaveSpriteVertexInfo(Color32 vertexColor)
        {
            // Save the Vertex Position for the Character
            #region Setup Mesh Vertices
            m_textInfo.characterInfo[m_characterCount].vertex_BL.position = m_textInfo.characterInfo[m_characterCount].bottomLeft;
            m_textInfo.characterInfo[m_characterCount].vertex_TL.position = m_textInfo.characterInfo[m_characterCount].topLeft;
            m_textInfo.characterInfo[m_characterCount].vertex_TR.position = m_textInfo.characterInfo[m_characterCount].topRight;
            m_textInfo.characterInfo[m_characterCount].vertex_BR.position = m_textInfo.characterInfo[m_characterCount].bottomRight;
            #endregion

            // Vertex Color Alpha
            if (m_tintAllSprites) m_tintSprite = true;
            Color32 spriteColor = m_tintSprite ? m_spriteColor.Multiply(vertexColor) : m_spriteColor;
            spriteColor.a = spriteColor.a < m_fontColor32.a ? spriteColor.a = spriteColor.a < vertexColor.a ? spriteColor.a : vertexColor.a : m_fontColor32.a;

            Color32 c0 = spriteColor;
            Color32 c1 = spriteColor;
            Color32 c2 = spriteColor;
            Color32 c3 = spriteColor;

            if (m_enableVertexGradient)
            {
                if (m_fontColorGradientPreset != null)
                {
                    c0 = m_tintSprite ? c0.Multiply(m_fontColorGradientPreset.bottomLeft) : c0;
                    c1 = m_tintSprite ? c1.Multiply(m_fontColorGradientPreset.topLeft) : c1;
                    c2 = m_tintSprite ? c2.Multiply(m_fontColorGradientPreset.topRight) : c2;
                    c3 = m_tintSprite ? c3.Multiply(m_fontColorGradientPreset.bottomRight) : c3;
                }
                else
                {
                    c0 = m_tintSprite ? c0.Multiply(m_fontColorGradient.bottomLeft) : c0;
                    c1 = m_tintSprite ? c1.Multiply(m_fontColorGradient.topLeft) : c1;
                    c2 = m_tintSprite ? c2.Multiply(m_fontColorGradient.topRight) : c2;
                    c3 = m_tintSprite ? c3.Multiply(m_fontColorGradient.bottomRight) : c3;
                }
            }

            if (m_colorGradientPreset != null)
            {
                c0 = m_tintSprite ? c0.Multiply(m_colorGradientPreset.bottomLeft) : c0;
                c1 = m_tintSprite ? c1.Multiply(m_colorGradientPreset.topLeft) : c1;
                c2 = m_tintSprite ? c2.Multiply(m_colorGradientPreset.topRight) : c2;
                c3 = m_tintSprite ? c3.Multiply(m_colorGradientPreset.bottomRight) : c3;
            }

            m_textInfo.characterInfo[m_characterCount].vertex_BL.color = c0;
            m_textInfo.characterInfo[m_characterCount].vertex_TL.color = c1;
            m_textInfo.characterInfo[m_characterCount].vertex_TR.color = c2;
            m_textInfo.characterInfo[m_characterCount].vertex_BR.color = c3;


            // Setup UVs for the Character
            #region Setup UVs
            GlyphRect glyphRect = m_cached_TextElement.m_Glyph.glyphRect;

            Vector2 uv0 = new Vector2((float)glyphRect.x / m_currentSpriteAsset.spriteSheet.width, (float)glyphRect.y / m_currentSpriteAsset.spriteSheet.height);  // bottom left
            Vector2 uv1 = new Vector2(uv0.x, (float)(glyphRect.y + glyphRect.height) / m_currentSpriteAsset.spriteSheet.height);  // top left
            Vector2 uv2 = new Vector2((float)(glyphRect.x + glyphRect.width) / m_currentSpriteAsset.spriteSheet.width, uv1.y); // top right
            Vector2 uv3 = new Vector2(uv2.x, uv0.y); // bottom right

            // Store UV Information
            m_textInfo.characterInfo[m_characterCount].vertex_BL.uv = uv0;
            m_textInfo.characterInfo[m_characterCount].vertex_TL.uv = uv1;
            m_textInfo.characterInfo[m_characterCount].vertex_TR.uv = uv2;
            m_textInfo.characterInfo[m_characterCount].vertex_BR.uv = uv3;
            #endregion Setup UVs


            // Normal
            #region Setup Normals & Tangents
            //Vector3 normal = new Vector3(0, 0, -1);
            //m_textInfo.characterInfo[m_characterCount].vertex_BL.normal = normal;
            //m_textInfo.characterInfo[m_characterCount].vertex_TL.normal = normal;
            //m_textInfo.characterInfo[m_characterCount].vertex_TR.normal = normal;
            //m_textInfo.characterInfo[m_characterCount].vertex_BR.normal = normal;

            // Tangents
            //Vector4 tangent = new Vector4(-1, 0, 0, 1);
            //m_textInfo.characterInfo[m_characterCount].vertex_BL.tangent = tangent;
            //m_textInfo.characterInfo[m_characterCount].vertex_TL.tangent = tangent;
            //m_textInfo.characterInfo[m_characterCount].vertex_TR.tangent = tangent;
            //m_textInfo.characterInfo[m_characterCount].vertex_BR.tangent = tangent;
            #endregion end Normals & Tangents

        }


        /// <summary>
        /// Store vertex attributes into the appropriate TMP_MeshInfo.
        /// </summary>
        /// <param name="i"></param>
        /// <param name="index_X4"></param>
        protected virtual void FillCharacterVertexBuffers(int i, int index_X4)
        {
            int materialIndex = m_textInfo.characterInfo[i].materialReferenceIndex;
            index_X4 = m_textInfo.meshInfo[materialIndex].vertexCount;

            // Check to make sure our current mesh buffer allocations can hold these new Quads.
            if (index_X4 >= m_textInfo.meshInfo[materialIndex].vertices.Length)
                m_textInfo.meshInfo[materialIndex].ResizeMeshInfo(Mathf.NextPowerOfTwo((index_X4 + 4) / 4));


            TMP_CharacterInfo[] characterInfoArray = m_textInfo.characterInfo;
            m_textInfo.characterInfo[i].vertexIndex = index_X4;

            // Setup Vertices for Characters
            m_textInfo.meshInfo[materialIndex].vertices[0 + index_X4] = characterInfoArray[i].vertex_BL.position;
            m_textInfo.meshInfo[materialIndex].vertices[1 + index_X4] = characterInfoArray[i].vertex_TL.position;
            m_textInfo.meshInfo[materialIndex].vertices[2 + index_X4] = characterInfoArray[i].vertex_TR.position;
            m_textInfo.meshInfo[materialIndex].vertices[3 + index_X4] = characterInfoArray[i].vertex_BR.position;


            // Setup UVS0
            m_textInfo.meshInfo[materialIndex].uvs0[0 + index_X4] = characterInfoArray[i].vertex_BL.uv;
            m_textInfo.meshInfo[materialIndex].uvs0[1 + index_X4] = characterInfoArray[i].vertex_TL.uv;
            m_textInfo.meshInfo[materialIndex].uvs0[2 + index_X4] = characterInfoArray[i].vertex_TR.uv;
            m_textInfo.meshInfo[materialIndex].uvs0[3 + index_X4] = characterInfoArray[i].vertex_BR.uv;


            // Setup UVS2
            m_textInfo.meshInfo[materialIndex].uvs2[0 + index_X4] = characterInfoArray[i].vertex_BL.uv2;
            m_textInfo.meshInfo[materialIndex].uvs2[1 + index_X4] = characterInfoArray[i].vertex_TL.uv2;
            m_textInfo.meshInfo[materialIndex].uvs2[2 + index_X4] = characterInfoArray[i].vertex_TR.uv2;
            m_textInfo.meshInfo[materialIndex].uvs2[3 + index_X4] = characterInfoArray[i].vertex_BR.uv2;


            // Setup UVS4
            //m_textInfo.meshInfo[0].uvs4[0 + index_X4] = characterInfoArray[i].vertex_BL.uv4;
            //m_textInfo.meshInfo[0].uvs4[1 + index_X4] = characterInfoArray[i].vertex_TL.uv4;
            //m_textInfo.meshInfo[0].uvs4[2 + index_X4] = characterInfoArray[i].vertex_TR.uv4;
            //m_textInfo.meshInfo[0].uvs4[3 + index_X4] = characterInfoArray[i].vertex_BR.uv4;


            // setup Vertex Colors
            m_textInfo.meshInfo[materialIndex].colors32[0 + index_X4] = characterInfoArray[i].vertex_BL.color;
            m_textInfo.meshInfo[materialIndex].colors32[1 + index_X4] = characterInfoArray[i].vertex_TL.color;
            m_textInfo.meshInfo[materialIndex].colors32[2 + index_X4] = characterInfoArray[i].vertex_TR.color;
            m_textInfo.meshInfo[materialIndex].colors32[3 + index_X4] = characterInfoArray[i].vertex_BR.color;

            m_textInfo.meshInfo[materialIndex].vertexCount = index_X4 + 4;
        }


        protected virtual void FillCharacterVertexBuffers(int i, int index_X4, bool isVolumetric)
        {
            int materialIndex = m_textInfo.characterInfo[i].materialReferenceIndex;
            index_X4 = m_textInfo.meshInfo[materialIndex].vertexCount;

            // Check to make sure our current mesh buffer allocations can hold these new Quads.
            if (index_X4 >= m_textInfo.meshInfo[materialIndex].vertices.Length)
                m_textInfo.meshInfo[materialIndex].ResizeMeshInfo(Mathf.NextPowerOfTwo((index_X4 + (isVolumetric ? 8 : 4)) / 4));

            TMP_CharacterInfo[] characterInfoArray = m_textInfo.characterInfo;
            m_textInfo.characterInfo[i].vertexIndex = index_X4;

            // Setup Vertices for Characters
            m_textInfo.meshInfo[materialIndex].vertices[0 + index_X4] = characterInfoArray[i].vertex_BL.position;
            m_textInfo.meshInfo[materialIndex].vertices[1 + index_X4] = characterInfoArray[i].vertex_TL.position;
            m_textInfo.meshInfo[materialIndex].vertices[2 + index_X4] = characterInfoArray[i].vertex_TR.position;
            m_textInfo.meshInfo[materialIndex].vertices[3 + index_X4] = characterInfoArray[i].vertex_BR.position;

            if (isVolumetric)
            {
                Vector3 depth = new Vector3(0, 0, m_fontSize * m_fontScale);
                m_textInfo.meshInfo[materialIndex].vertices[4 + index_X4] = characterInfoArray[i].vertex_BL.position + depth;
                m_textInfo.meshInfo[materialIndex].vertices[5 + index_X4] = characterInfoArray[i].vertex_TL.position + depth;
                m_textInfo.meshInfo[materialIndex].vertices[6 + index_X4] = characterInfoArray[i].vertex_TR.position + depth;
                m_textInfo.meshInfo[materialIndex].vertices[7 + index_X4] = characterInfoArray[i].vertex_BR.position + depth;
            }

            // Setup UVS0
            m_textInfo.meshInfo[materialIndex].uvs0[0 + index_X4] = characterInfoArray[i].vertex_BL.uv;
            m_textInfo.meshInfo[materialIndex].uvs0[1 + index_X4] = characterInfoArray[i].vertex_TL.uv;
            m_textInfo.meshInfo[materialIndex].uvs0[2 + index_X4] = characterInfoArray[i].vertex_TR.uv;
            m_textInfo.meshInfo[materialIndex].uvs0[3 + index_X4] = characterInfoArray[i].vertex_BR.uv;

            if (isVolumetric)
            {
                m_textInfo.meshInfo[materialIndex].uvs0[4 + index_X4] = characterInfoArray[i].vertex_BL.uv;
                m_textInfo.meshInfo[materialIndex].uvs0[5 + index_X4] = characterInfoArray[i].vertex_TL.uv;
                m_textInfo.meshInfo[materialIndex].uvs0[6 + index_X4] = characterInfoArray[i].vertex_TR.uv;
                m_textInfo.meshInfo[materialIndex].uvs0[7 + index_X4] = characterInfoArray[i].vertex_BR.uv;
            }


            // Setup UVS2
            m_textInfo.meshInfo[materialIndex].uvs2[0 + index_X4] = characterInfoArray[i].vertex_BL.uv2;
            m_textInfo.meshInfo[materialIndex].uvs2[1 + index_X4] = characterInfoArray[i].vertex_TL.uv2;
            m_textInfo.meshInfo[materialIndex].uvs2[2 + index_X4] = characterInfoArray[i].vertex_TR.uv2;
            m_textInfo.meshInfo[materialIndex].uvs2[3 + index_X4] = characterInfoArray[i].vertex_BR.uv2;

            if (isVolumetric)
            {
                m_textInfo.meshInfo[materialIndex].uvs2[4 + index_X4] = characterInfoArray[i].vertex_BL.uv2;
                m_textInfo.meshInfo[materialIndex].uvs2[5 + index_X4] = characterInfoArray[i].vertex_TL.uv2;
                m_textInfo.meshInfo[materialIndex].uvs2[6 + index_X4] = characterInfoArray[i].vertex_TR.uv2;
                m_textInfo.meshInfo[materialIndex].uvs2[7 + index_X4] = characterInfoArray[i].vertex_BR.uv2;
            }


            // Setup UVS4
            //m_textInfo.meshInfo[0].uvs4[0 + index_X4] = characterInfoArray[i].vertex_BL.uv4;
            //m_textInfo.meshInfo[0].uvs4[1 + index_X4] = characterInfoArray[i].vertex_TL.uv4;
            //m_textInfo.meshInfo[0].uvs4[2 + index_X4] = characterInfoArray[i].vertex_TR.uv4;
            //m_textInfo.meshInfo[0].uvs4[3 + index_X4] = characterInfoArray[i].vertex_BR.uv4;


            // setup Vertex Colors
            m_textInfo.meshInfo[materialIndex].colors32[0 + index_X4] = characterInfoArray[i].vertex_BL.color;
            m_textInfo.meshInfo[materialIndex].colors32[1 + index_X4] = characterInfoArray[i].vertex_TL.color;
            m_textInfo.meshInfo[materialIndex].colors32[2 + index_X4] = characterInfoArray[i].vertex_TR.color;
            m_textInfo.meshInfo[materialIndex].colors32[3 + index_X4] = characterInfoArray[i].vertex_BR.color;

            if (isVolumetric)
            {
                Color32 backColor = new Color32(255, 255, 128, 255);
                m_textInfo.meshInfo[materialIndex].colors32[4 + index_X4] = backColor; //characterInfoArray[i].vertex_BL.color;
                m_textInfo.meshInfo[materialIndex].colors32[5 + index_X4] = backColor; //characterInfoArray[i].vertex_TL.color;
                m_textInfo.meshInfo[materialIndex].colors32[6 + index_X4] = backColor; //characterInfoArray[i].vertex_TR.color;
                m_textInfo.meshInfo[materialIndex].colors32[7 + index_X4] = backColor; //characterInfoArray[i].vertex_BR.color;
            }

            m_textInfo.meshInfo[materialIndex].vertexCount = index_X4 + (!isVolumetric ? 4 : 8);
        }


        /// <summary>
        /// Fill Vertex Buffers for Sprites
        /// </summary>
        /// <param name="i"></param>
        /// <param name="spriteIndex_X4"></param>
        protected virtual void FillSpriteVertexBuffers(int i, int index_X4)
        {
            int materialIndex = m_textInfo.characterInfo[i].materialReferenceIndex;
            index_X4 = m_textInfo.meshInfo[materialIndex].vertexCount;

            // Check to make sure our current mesh buffer allocations can hold these new Quads.
            if (index_X4 >= m_textInfo.meshInfo[materialIndex].vertices.Length)
                m_textInfo.meshInfo[materialIndex].ResizeMeshInfo(Mathf.NextPowerOfTwo((index_X4 + 4) / 4));

            TMP_CharacterInfo[] characterInfoArray = m_textInfo.characterInfo;
            m_textInfo.characterInfo[i].vertexIndex = index_X4;

            // Setup Vertices for Characters
            m_textInfo.meshInfo[materialIndex].vertices[0 + index_X4] = characterInfoArray[i].vertex_BL.position;
            m_textInfo.meshInfo[materialIndex].vertices[1 + index_X4] = characterInfoArray[i].vertex_TL.position;
            m_textInfo.meshInfo[materialIndex].vertices[2 + index_X4] = characterInfoArray[i].vertex_TR.position;
            m_textInfo.meshInfo[materialIndex].vertices[3 + index_X4] = characterInfoArray[i].vertex_BR.position;


            // Setup UVS0
            m_textInfo.meshInfo[materialIndex].uvs0[0 + index_X4] = characterInfoArray[i].vertex_BL.uv;
            m_textInfo.meshInfo[materialIndex].uvs0[1 + index_X4] = characterInfoArray[i].vertex_TL.uv;
            m_textInfo.meshInfo[materialIndex].uvs0[2 + index_X4] = characterInfoArray[i].vertex_TR.uv;
            m_textInfo.meshInfo[materialIndex].uvs0[3 + index_X4] = characterInfoArray[i].vertex_BR.uv;


            // Setup UVS2
            m_textInfo.meshInfo[materialIndex].uvs2[0 + index_X4] = characterInfoArray[i].vertex_BL.uv2;
            m_textInfo.meshInfo[materialIndex].uvs2[1 + index_X4] = characterInfoArray[i].vertex_TL.uv2;
            m_textInfo.meshInfo[materialIndex].uvs2[2 + index_X4] = characterInfoArray[i].vertex_TR.uv2;
            m_textInfo.meshInfo[materialIndex].uvs2[3 + index_X4] = characterInfoArray[i].vertex_BR.uv2;


            // Setup UVS4
            //m_textInfo.meshInfo[0].uvs4[0 + index_X4] = characterInfoArray[i].vertex_BL.uv4;
            //m_textInfo.meshInfo[0].uvs4[1 + index_X4] = characterInfoArray[i].vertex_TL.uv4;
            //m_textInfo.meshInfo[0].uvs4[2 + index_X4] = characterInfoArray[i].vertex_TR.uv4;
            //m_textInfo.meshInfo[0].uvs4[3 + index_X4] = characterInfoArray[i].vertex_BR.uv4;


            // setup Vertex Colors
            m_textInfo.meshInfo[materialIndex].colors32[0 + index_X4] = characterInfoArray[i].vertex_BL.color;
            m_textInfo.meshInfo[materialIndex].colors32[1 + index_X4] = characterInfoArray[i].vertex_TL.color;
            m_textInfo.meshInfo[materialIndex].colors32[2 + index_X4] = characterInfoArray[i].vertex_TR.color;
            m_textInfo.meshInfo[materialIndex].colors32[3 + index_X4] = characterInfoArray[i].vertex_BR.color;

            m_textInfo.meshInfo[materialIndex].vertexCount = index_X4 + 4;
        }


        /// <summary>
        /// Method to add the underline geometry.
        /// </summary>
        /// <param name="start"></param>
        /// <param name="end"></param>
        /// <param name="startScale"></param>
        /// <param name="endScale"></param>
        /// <param name="maxScale"></param>
        /// <param name="underlineColor"></param>
        protected virtual void DrawUnderlineMesh(Vector3 start, Vector3 end, ref int index, float startScale, float endScale, float maxScale, float sdfScale, Color32 underlineColor)
        {
            // Get Underline special character from the primary font asset.
            GetUnderlineSpecialCharacter(m_fontAsset);

            if (m_Underline.character == null)
            {
                if (!TMP_Settings.warningsDisabled)
                    Debug.LogWarning("Unable to add underline since the primary Font Asset doesn't contain the underline character.", this);

                return;
            }

            int underlineMaterialIndex = m_Underline.materialIndex;

            int verticesCount = index + 12;

            // Check to make sure our current mesh buffer allocations can hold these new Quads.
            if (verticesCount > m_textInfo.meshInfo[underlineMaterialIndex].vertices.Length)
            {
                // Resize Mesh Buffers
                m_textInfo.meshInfo[underlineMaterialIndex].ResizeMeshInfo(verticesCount / 4);
            }

            // Adjust the position of the underline based on the lowest character. This matters for subscript character.
            start.y = Mathf.Min(start.y, end.y);
            end.y = Mathf.Min(start.y, end.y);

            GlyphMetrics underlineGlyphMetrics = m_Underline.character.glyph.metrics;
            GlyphRect underlineGlyphRect = m_Underline.character.glyph.glyphRect;

            float segmentWidth = underlineGlyphMetrics.width / 2 * maxScale;

            if (end.x - start.x < underlineGlyphMetrics.width * maxScale)
            {
                segmentWidth = (end.x - start.x) / 2f;
            }

            float startPadding = m_padding * startScale / maxScale;
            float endPadding = m_padding * endScale / maxScale;

            float underlineThickness = m_Underline.fontAsset.faceInfo.underlineThickness;

            // UNDERLINE VERTICES FOR (3) LINE SEGMENTS
            #region UNDERLINE VERTICES
            Vector3[] vertices = m_textInfo.meshInfo[underlineMaterialIndex].vertices;

            // Front Part of the Underline
            vertices[index + 0] = start + new Vector3(0, 0 - (underlineThickness + m_padding) * maxScale, 0); // BL
            vertices[index + 1] = start + new Vector3(0, m_padding * maxScale, 0); // TL
            vertices[index + 2] = vertices[index + 1] + new Vector3(segmentWidth, 0, 0); // TR
            vertices[index + 3] = vertices[index + 0] + new Vector3(segmentWidth, 0, 0); // BR

            // Middle Part of the Underline
            vertices[index + 4] = vertices[index + 3]; // BL
            vertices[index + 5] = vertices[index + 2]; // TL
            vertices[index + 6] = end + new Vector3(-segmentWidth, m_padding * maxScale, 0);  // TR
            vertices[index + 7] = end + new Vector3(-segmentWidth, -(underlineThickness + m_padding) * maxScale, 0); // BR

            // End Part of the Underline
            vertices[index + 8] = vertices[index + 7]; // BL
            vertices[index + 9] = vertices[index + 6]; // TL
            vertices[index + 10] = end + new Vector3(0, m_padding * maxScale, 0); // TR
            vertices[index + 11] = end + new Vector3(0, -(underlineThickness + m_padding) * maxScale, 0); // BR
            #endregion

            // UNDERLINE UV0
            #region HANDLE UV0
            Vector2[] uvs0 = m_textInfo.meshInfo[underlineMaterialIndex].uvs0;

            int atlasWidth = m_Underline.fontAsset.atlasWidth;
            int atlasHeight = m_Underline.fontAsset.atlasHeight;

            // Calculate UV required to setup the 3 Quads for the Underline.
            Vector2 uv0 = new Vector2((underlineGlyphRect.x - startPadding) / atlasWidth, (underlineGlyphRect.y - m_padding) / atlasHeight);  // bottom left
            Vector2 uv1 = new Vector2(uv0.x, (underlineGlyphRect.y + underlineGlyphRect.height + m_padding) / atlasHeight);  // top left
            Vector2 uv2 = new Vector2((underlineGlyphRect.x - startPadding + (float)underlineGlyphRect.width / 2) / atlasWidth, uv1.y); // Mid Top Left
            Vector2 uv3 = new Vector2(uv2.x, uv0.y); // Mid Bottom Left
            Vector2 uv4 = new Vector2((underlineGlyphRect.x + endPadding + (float)underlineGlyphRect.width / 2) / atlasWidth, uv1.y); // Mid Top Right
            Vector2 uv5 = new Vector2(uv4.x, uv0.y); // Mid Bottom right
            Vector2 uv6 = new Vector2((underlineGlyphRect.x + endPadding + underlineGlyphRect.width) / atlasWidth, uv1.y); // End Part - Bottom Right
            Vector2 uv7 = new Vector2(uv6.x, uv0.y); // End Part - Top Right

            // Left Part of the Underline
            uvs0[0 + index] = uv0; // BL
            uvs0[1 + index] = uv1; // TL
            uvs0[2 + index] = uv2; // TR
            uvs0[3 + index] = uv3; // BR

            // Middle Part of the Underline
            uvs0[4 + index] = new Vector2(uv2.x - uv2.x * 0.001f, uv0.y);
            uvs0[5 + index] = new Vector2(uv2.x - uv2.x * 0.001f, uv1.y);
            uvs0[6 + index] = new Vector2(uv2.x + uv2.x * 0.001f, uv1.y);
            uvs0[7 + index] = new Vector2(uv2.x + uv2.x * 0.001f, uv0.y);

            // Right Part of the Underline
            uvs0[8 + index] = uv5;
            uvs0[9 + index] = uv4;
            uvs0[10 + index] = uv6;
            uvs0[11 + index] = uv7;
            #endregion

            // UNDERLINE UV2
            #region HANDLE UV2 - SDF SCALE
            // UV1 contains Face / Border UV layout.
            float min_UvX = 0;
            float max_UvX = (vertices[index + 2].x - start.x) / (end.x - start.x);

            //Calculate the xScale or how much the UV's are getting stretched on the X axis for the middle section of the underline.
            float xScale = Mathf.Abs(sdfScale);

            Vector2[] uvs2 = m_textInfo.meshInfo[underlineMaterialIndex].uvs2;

            uvs2[0 + index] = PackUV(0, 0, xScale);
            uvs2[1 + index] = PackUV(0, 1, xScale);
            uvs2[2 + index] = PackUV(max_UvX, 1, xScale);
            uvs2[3 + index] = PackUV(max_UvX, 0, xScale);

            min_UvX = (vertices[index + 4].x - start.x) / (end.x - start.x);
            max_UvX = (vertices[index + 6].x - start.x) / (end.x - start.x);

            uvs2[4 + index] = PackUV(min_UvX, 0, xScale);
            uvs2[5 + index] = PackUV(min_UvX, 1, xScale);
            uvs2[6 + index] = PackUV(max_UvX, 1, xScale);
            uvs2[7 + index] = PackUV(max_UvX, 0, xScale);

            min_UvX = (vertices[index + 8].x - start.x) / (end.x - start.x);

            uvs2[8 + index] = PackUV(min_UvX, 0, xScale);
            uvs2[9 + index] = PackUV(min_UvX, 1, xScale);
            uvs2[10 + index] = PackUV(1, 1, xScale);
            uvs2[11 + index] = PackUV(1, 0, xScale);
            #endregion

            // UNDERLINE VERTEX COLORS
            #region UNDERLINE VERTEX COLORS
            // Alpha is the lower of the vertex color or tag color alpha used.
            underlineColor.a = m_fontColor32.a < underlineColor.a ? m_fontColor32.a : underlineColor.a;

            Color32[] colors32 = m_textInfo.meshInfo[underlineMaterialIndex].colors32;
            colors32[0 + index] = underlineColor;
            colors32[1 + index] = underlineColor;
            colors32[2 + index] = underlineColor;
            colors32[3 + index] = underlineColor;

            colors32[4 + index] = underlineColor;
            colors32[5 + index] = underlineColor;
            colors32[6 + index] = underlineColor;
            colors32[7 + index] = underlineColor;

            colors32[8 + index] = underlineColor;
            colors32[9 + index] = underlineColor;
            colors32[10 + index] = underlineColor;
            colors32[11 + index] = underlineColor;
            #endregion

            index += 12;
        }


        protected virtual void DrawTextHighlight(Vector3 start, Vector3 end, ref int index, Color32 highlightColor)
        {
            if (m_Underline.character == null)
            {
                GetUnderlineSpecialCharacter(m_fontAsset);

                if (m_Underline.character == null)
                {
                    if (!TMP_Settings.warningsDisabled)
                        Debug.LogWarning("Unable to add highlight since the primary Font Asset doesn't contain the underline character.", this);

                    return;
                }
            }

            int underlineMaterialIndex = m_Underline.materialIndex;

            int verticesCount = index + 4;

            // Check to make sure our current mesh buffer allocations can hold these new Quads.
            if (verticesCount > m_textInfo.meshInfo[underlineMaterialIndex].vertices.Length)
            {
                // Resize Mesh Buffers
                m_textInfo.meshInfo[underlineMaterialIndex].ResizeMeshInfo(verticesCount / 4);
            }

            // UNDERLINE VERTICES FOR (3) LINE SEGMENTS
            #region HIGHLIGHT VERTICES
            Vector3[] vertices = m_textInfo.meshInfo[underlineMaterialIndex].vertices;

            // Front Part of the Underline
            vertices[index + 0] = start; // BL
            vertices[index + 1] = new Vector3(start.x, end.y, 0); // TL
            vertices[index + 2] = end; // TR
            vertices[index + 3] = new Vector3(end.x, start.y, 0); // BR
            #endregion

            // UNDERLINE UV0
            #region HANDLE UV0
            Vector2[] uvs0 = m_textInfo.meshInfo[underlineMaterialIndex].uvs0;

            int atlasWidth = m_Underline.fontAsset.atlasWidth;
            int atlasHeight = m_Underline.fontAsset.atlasHeight;
            GlyphRect glyphRect = m_Underline.character.glyph.glyphRect;

            // Calculate UV
            Vector2 uv0 = new Vector2(((float)glyphRect.x + glyphRect.width / 2) / atlasWidth, (glyphRect.y + (float)glyphRect.height / 2) / atlasHeight);  // bottom left

            // UVs for the Quad
            uvs0[0 + index] = uv0; // BL
            uvs0[1 + index] = uv0; // TL
            uvs0[2 + index] = uv0; // TR
            uvs0[3 + index] = uv0; // BR
            #endregion

            // HIGHLIGHT UV2
            #region HANDLE UV2 - SDF SCALE
            Vector2[] uvs2 = m_textInfo.meshInfo[underlineMaterialIndex].uvs2;
            Vector2 customUV = new Vector2(0, 1);
            uvs2[0 + index] = customUV;
            uvs2[1 + index] = customUV;
            uvs2[2 + index] = customUV;
            uvs2[3 + index] = customUV;
            #endregion

            // HIGHLIGHT VERTEX COLORS
            #region
            // Alpha is the lower of the vertex color or tag color alpha used.
            highlightColor.a = m_fontColor32.a < highlightColor.a ? m_fontColor32.a : highlightColor.a;

            Color32[] colors32 = m_textInfo.meshInfo[underlineMaterialIndex].colors32;
            colors32[0 + index] = highlightColor;
            colors32[1 + index] = highlightColor;
            colors32[2 + index] = highlightColor;
            colors32[3 + index] = highlightColor;
            #endregion

            index += 4;
        }


        /// <summary>
        /// Internal function used to load the default settings of text objects.
        /// </summary>
        protected void LoadDefaultSettings()
        {
            if (m_fontAsset == null || m_isWaitingOnResourceLoad)
            {
                m_rectTransform = this.rectTransform;

                if (TMP_Settings.autoSizeTextContainer)
                {
                    autoSizeTextContainer = true;
                }
                else
                {
                    if (GetType() == typeof(TextMeshPro))
                    {
                        if (m_rectTransform.sizeDelta == new Vector2(100, 100))
                            m_rectTransform.sizeDelta = TMP_Settings.defaultTextMeshProTextContainerSize;
                    }
                    else
                    {
                        if (m_rectTransform.sizeDelta == new Vector2(100, 100))
                            m_rectTransform.sizeDelta = TMP_Settings.defaultTextMeshProUITextContainerSize;
                    }

                }

                m_enableWordWrapping = TMP_Settings.enableWordWrapping;
                m_enableKerning = TMP_Settings.enableKerning;
                m_enableExtraPadding = TMP_Settings.enableExtraPadding;
                m_tintAllSprites = TMP_Settings.enableTintAllSprites;
                m_parseCtrlCharacters = TMP_Settings.enableParseEscapeCharacters;
                m_fontSize = m_fontSizeBase = TMP_Settings.defaultFontSize;
                m_fontSizeMin = m_fontSize * TMP_Settings.defaultTextAutoSizingMinRatio;
                m_fontSizeMax = m_fontSize * TMP_Settings.defaultTextAutoSizingMaxRatio;
                m_isWaitingOnResourceLoad = false;
                raycastTarget = TMP_Settings.enableRaycastTarget;
                m_IsTextObjectScaleStatic = TMP_Settings.isTextObjectScaleStatic;
            }
            else if ((int)m_textAlignment < 0xFF)
            {
                // Convert Legacy TextAlignmentOptions enumerations from Unity 5.2 / 5.3.
                m_textAlignment = TMP_Compatibility.ConvertTextAlignmentEnumValues(m_textAlignment);
            }

            // Convert text alignment to independent horizontal and vertical alignment properties
            if (m_textAlignment != TextAlignmentOptions.Converted)
            {
                m_HorizontalAlignment = (HorizontalAlignmentOptions)((int)m_textAlignment & 0xFF);
                m_VerticalAlignment = (VerticalAlignmentOptions)((int)m_textAlignment & 0xFF00);
                m_textAlignment = TextAlignmentOptions.Converted;
            }
        }


        /// <summary>
        /// Method used to find and cache references to the Underline and Ellipsis characters.
        /// </summary>
        /// <param name=""></param>
        protected void GetSpecialCharacters(TMP_FontAsset fontAsset)
        {
            GetEllipsisSpecialCharacter(fontAsset);

            GetUnderlineSpecialCharacter(fontAsset);
        }


        protected void GetEllipsisSpecialCharacter(TMP_FontAsset fontAsset)
        {
            bool isUsingAlternativeTypeface;

            // Search base font asset
            TMP_Character character = TMP_FontAssetUtilities.GetCharacterFromFontAsset(0x2026, fontAsset, false, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface);

            if (character == null)
            {
                // Search primary fallback list
                if (fontAsset.m_FallbackFontAssetTable != null && fontAsset.m_FallbackFontAssetTable.Count > 0)
                    character = TMP_FontAssetUtilities.GetCharacterFromFontAssets(0x2026, fontAsset, fontAsset.m_FallbackFontAssetTable, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface);
            }

            // Search TMP Settings general fallback list
            if (character == null)
            {
                if (TMP_Settings.fallbackFontAssets != null && TMP_Settings.fallbackFontAssets.Count > 0)
                    character = TMP_FontAssetUtilities.GetCharacterFromFontAssets(0x2026, fontAsset, TMP_Settings.fallbackFontAssets, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface);
            }

            // Search TMP Settings' default font asset
            if (character == null)
            {
                if (TMP_Settings.defaultFontAsset != null)
                    character = TMP_FontAssetUtilities.GetCharacterFromFontAsset(0x2026, TMP_Settings.defaultFontAsset, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface);
            }

            if (character != null)
                m_Ellipsis = new SpecialCharacter(character, 0);
        }


        protected void GetUnderlineSpecialCharacter(TMP_FontAsset fontAsset)
        {
            bool isUsingAlternativeTypeface;

            // Search primary font asset for underline character while ignoring font style and weight as these do not affect the underline character.
            TMP_Character character = TMP_FontAssetUtilities.GetCharacterFromFontAsset(0x5F, fontAsset, false, FontStyles.Normal, FontWeight.Regular, out isUsingAlternativeTypeface);

            /*
            if (m_Underline.character == null)
            {
                // Search primary fallback list
                if (fontAsset.m_FallbackFontAssetTable != null && fontAsset.m_FallbackFontAssetTable.Count > 0)
                    m_Underline.character = TMP_FontAssetUtilities.GetCharacterFromFontAssets(0x5F, fontAsset.m_FallbackFontAssetTable, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface, out tempFontAsset);
            }

            // Search TMP Settings general fallback list
            if (m_Underline.character == null)
            {
                if (TMP_Settings.fallbackFontAssets != null && TMP_Settings.fallbackFontAssets.Count > 0)
                    m_Underline.character = TMP_FontAssetUtilities.GetCharacterFromFontAssets(0x5F, TMP_Settings.fallbackFontAssets, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface, out tempFontAsset);
            }

            // Search TMP Settings' default font asset
            if (m_Underline.character == null)
            {
                if (TMP_Settings.defaultFontAsset != null)
                    m_Underline.character = TMP_FontAssetUtilities.GetCharacterFromFontAsset(0x5F, TMP_Settings.defaultFontAsset, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface, out tempFontAsset);
            }
            */

            if (character != null)
            {
                m_Underline = new SpecialCharacter(character, 0);
            }
            else
            {
                if (!TMP_Settings.warningsDisabled)
                    Debug.LogWarning("The character used for Underline is not available in font asset [" + fontAsset.name + "].", this);
            }
        }


        /// <summary>
        /// Replace a given number of characters (tag) in the array with a new character and shift subsequent characters in the array.
        /// </summary>
        /// <param name="chars">Array which contains the text.</param>
        /// <param name="insertionIndex">The index of where the new character will be inserted</param>
        /// <param name="tagLength">Length of the tag being replaced.</param>
        /// <param name="c">The replacement character.</param>
        protected void ReplaceTagWithCharacter(int[] chars, int insertionIndex, int tagLength, char c)
        {
            chars[insertionIndex] = c;

            for (int i = insertionIndex + tagLength; i < chars.Length; i++)
            {
                chars[i - 3] = chars[i];
            }
        }


        /// <summary>
        ///
        /// </summary>
        /// <returns></returns>
        //protected int GetMaterialReferenceForFontWeight()
        //{
        //    //bool isItalic = (m_style & FontStyles.Italic) == FontStyles.Italic || (m_fontStyle & FontStyles.Italic) == FontStyles.Italic;

        //    m_currentMaterialIndex = MaterialReference.AddMaterialReference(m_currentFontAsset.fontWeights[0].italicTypeface.material, m_currentFontAsset.fontWeights[0].italicTypeface, m_materialReferences, m_materialReferenceIndexLookup);

        //    return 0;
        //}


        /// <summary>
        ///
        /// </summary>
        /// <returns></returns>
        protected TMP_FontAsset GetFontAssetForWeight(int fontWeight)
        {
            bool isItalic = (m_FontStyleInternal & FontStyles.Italic) == FontStyles.Italic || (m_fontStyle & FontStyles.Italic) == FontStyles.Italic;

            TMP_FontAsset fontAsset = null;

            int weightIndex = fontWeight / 100;

            if (isItalic)
                fontAsset = m_currentFontAsset.fontWeightTable[weightIndex].italicTypeface;
            else
                fontAsset = m_currentFontAsset.fontWeightTable[weightIndex].regularTypeface;

            return fontAsset;
        }

        internal TMP_TextElement GetTextElement(uint unicode, TMP_FontAsset fontAsset, FontStyles fontStyle, FontWeight fontWeight, out bool isUsingAlternativeTypeface)
        {
            TMP_Character character = TMP_FontAssetUtilities.GetCharacterFromFontAsset(unicode, fontAsset, false, fontStyle, fontWeight, out isUsingAlternativeTypeface);

            if (character != null)
                return character;

            // Search potential list of fallback font assets assigned to the font asset.
            if (fontAsset.m_FallbackFontAssetTable != null && fontAsset.m_FallbackFontAssetTable.Count > 0)
                character = TMP_FontAssetUtilities.GetCharacterFromFontAssets(unicode, fontAsset, fontAsset.m_FallbackFontAssetTable, true, fontStyle, fontWeight, out isUsingAlternativeTypeface);

            if (character != null)
            {
                // Add character to font asset lookup cache
                //fontAsset.AddCharacterToLookupCache(unicode, character);

                return character;
            }

            // Search for the character in the primary font asset if not the current font asset
            if (fontAsset.instanceID != m_fontAsset.instanceID)
            {
                // Search primary font asset
                character = TMP_FontAssetUtilities.GetCharacterFromFontAsset(unicode, m_fontAsset, false, fontStyle, fontWeight, out isUsingAlternativeTypeface);

                // Use material and index of primary font asset.
                if (character != null)
                {
                    m_currentMaterialIndex = 0;
                    m_currentMaterial = m_materialReferences[0].material;

                    // Add character to font asset lookup cache
                    //fontAsset.AddCharacterToLookupCache(unicode, character);

                    return character;
                }

                // Search list of potential fallback font assets assigned to the primary font asset.
                if (m_fontAsset.m_FallbackFontAssetTable != null && m_fontAsset.m_FallbackFontAssetTable.Count > 0)
                    character = TMP_FontAssetUtilities.GetCharacterFromFontAssets(unicode, fontAsset, m_fontAsset.m_FallbackFontAssetTable, true, fontStyle, fontWeight, out isUsingAlternativeTypeface);

                if (character != null)
                {
                    // Add character to font asset lookup cache
                    //fontAsset.AddCharacterToLookupCache(unicode, character);

                    return character;
                }
            }

            // Search for the character in potential local Sprite Asset assigned to the text object.
            if (m_spriteAsset != null)
            {
                TMP_SpriteCharacter spriteCharacter = TMP_FontAssetUtilities.GetSpriteCharacterFromSpriteAsset(unicode, m_spriteAsset, true);

                if (spriteCharacter != null)
                    return spriteCharacter;
            }

            // Search for the character in the list of fallback assigned in the TMP Settings (General Fallbacks).
            if (TMP_Settings.fallbackFontAssets != null && TMP_Settings.fallbackFontAssets.Count > 0)
                character = TMP_FontAssetUtilities.GetCharacterFromFontAssets(unicode, fontAsset, TMP_Settings.fallbackFontAssets, true, fontStyle, fontWeight, out isUsingAlternativeTypeface);

            if (character != null)
            {
                // Add character to font asset lookup cache
                //fontAsset.AddCharacterToLookupCache(unicode, character);

                return character;
            }

            // Search for the character in the Default Font Asset assigned in the TMP Settings file.
            if (TMP_Settings.defaultFontAsset != null)
                character = TMP_FontAssetUtilities.GetCharacterFromFontAsset(unicode, TMP_Settings.defaultFontAsset, true, fontStyle, fontWeight, out isUsingAlternativeTypeface);

            if (character != null)
            {
                // Add character to font asset lookup cache
                //fontAsset.AddCharacterToLookupCache(unicode, character);

                return character;
            }

            // Search for the character in the Default Sprite Asset assigned in the TMP Settings file.
            if (TMP_Settings.defaultSpriteAsset != null)
            {
                TMP_SpriteCharacter spriteCharacter = TMP_FontAssetUtilities.GetSpriteCharacterFromSpriteAsset(unicode, TMP_Settings.defaultSpriteAsset, true);

                if (spriteCharacter != null)
                    return spriteCharacter;
            }

            return null;
        }


        /// <summary>
        /// Method to Enable or Disable child SubMesh objects.
        /// </summary>
        /// <param name="state"></param>
        protected virtual void SetActiveSubMeshes(bool state) { }


        /// <summary>
        /// Destroy Sub Mesh Objects.
        /// </summary>
        protected virtual void DestroySubMeshObjects() { }


        /// <summary>
        /// Function to clear the geometry of the Primary and Sub Text objects.
        /// </summary>
        public virtual void ClearMesh() { }


        /// <summary>
        /// Function to clear the geometry of the Primary and Sub Text objects.
        /// </summary>
        public virtual void ClearMesh(bool uploadGeometry) { }


        /// <summary>
        /// Function which returns the text after it has been parsed and rich text tags removed.
        /// </summary>
        /// <returns></returns>
        public virtual string GetParsedText()
        {
            if (m_textInfo == null)
                return string.Empty;

            int characterCount = m_textInfo.characterCount;

            // TODO - Could implement some static buffer pool shared by all instances of TMP objects.
            char[] buffer = new char[characterCount];

            for (int i = 0; i < characterCount && i < m_textInfo.characterInfo.Length; i++)
            {
                buffer[i] = m_textInfo.characterInfo[i].character;
            }

            return new string(buffer);
        }


        internal bool IsSelfOrLinkedAncestor(TMP_Text targetTextComponent)
        {
            if (targetTextComponent == null)
                return true;

            if (parentLinkedComponent != null)
            {
                if (parentLinkedComponent.IsSelfOrLinkedAncestor(targetTextComponent))
                    return true;
            }

            if (this.GetInstanceID() == targetTextComponent.GetInstanceID())
                return true;

            return false;
        }

        internal void ReleaseLinkedTextComponent(TMP_Text targetTextComponent)
        {
            if (targetTextComponent == null)
                return;

            TMP_Text childLinkedComponent = targetTextComponent.linkedTextComponent;

            if (childLinkedComponent != null)
                ReleaseLinkedTextComponent(childLinkedComponent);

            targetTextComponent.text = string.Empty;
            targetTextComponent.firstVisibleCharacter = 0;
            targetTextComponent.linkedTextComponent = null;
            targetTextComponent.parentLinkedComponent = null;
        }


        /// <summary>
        /// Function to pack scale information in the UV2 Channel.
        /// </summary>
        /// <param name="x"></param>
        /// <param name="y"></param>
        /// <param name="scale"></param>
        /// <returns></returns>
        //protected Vector2 PackUV(float x, float y, float scale)
        //{
        //    Vector2 output;

        //    output.x = Mathf.Floor(x * 4095);
        //    output.y = Mathf.Floor(y * 4095);

        //    output.x = (output.x * 4096) + output.y;
        //    output.y = scale;

        //    return output;
        //}

        /// <summary>
        /// Function to pack scale information in the UV2 Channel.
        /// </summary>
        /// <param name="x"></param>
        /// <param name="y"></param>
        /// <param name="scale"></param>
        /// <returns></returns>
        protected Vector2 PackUV(float x, float y, float scale)
        {
            Vector2 output;

            output.x = (int)(x * 511);
            output.y = (int)(y * 511);

            output.x = (output.x * 4096) + output.y;
            output.y = scale;

            return output;
        }


        /// <summary>
        ///
        /// </summary>
        /// <param name="x"></param>
        /// <param name="y"></param>
        /// <returns></returns>
        protected float PackUV(float x, float y)
        {
            double x0 = (int)(x * 511);
            double y0 = (int)(y * 511);

            return (float)((x0 * 4096) + y0);
        }


        /// <summary>
        /// Function used as a replacement for LateUpdate()
        /// </summary>
        internal virtual void InternalUpdate() { }


        /// <summary>
        /// Function to pack scale information in the UV2 Channel.
        /// </summary>
        /// <param name="x"></param>
        /// <param name="y"></param>
        /// <param name="scale"></param>
        /// <returns></returns>
        //protected Vector2 PackUV(float x, float y, float scale)
        //{
        //    Vector2 output;

        //    output.x = Mathf.Floor(x * 4095);
        //    output.y = Mathf.Floor(y * 4095);

        //    return new Vector2((output.x * 4096) + output.y, scale);
        //}


        /// <summary>
        ///
        /// </summary>
        /// <param name="x"></param>
        /// <param name="y"></param>
        /// <returns></returns>
        //protected float PackUV(float x, float y)
        //{
        //    x = (x % 5) / 5;
        //    y = (y % 5) / 5;

        //    return Mathf.Round(x * 4096) + y;
        //}


        /// <summary>
        /// Method to convert Hex to Int
        /// </summary>
        /// <param name="hex"></param>
        /// <returns></returns>
        protected int HexToInt(char hex)
        {
            switch (hex)
            {
                case '0': return 0;
                case '1': return 1;
                case '2': return 2;
                case '3': return 3;
                case '4': return 4;
                case '5': return 5;
                case '6': return 6;
                case '7': return 7;
                case '8': return 8;
                case '9': return 9;
                case 'A': return 10;
                case 'B': return 11;
                case 'C': return 12;
                case 'D': return 13;
                case 'E': return 14;
                case 'F': return 15;
                case 'a': return 10;
                case 'b': return 11;
                case 'c': return 12;
                case 'd': return 13;
                case 'e': return 14;
                case 'f': return 15;
            }
            return 15;
        }


        /// <summary>
        /// Convert UTF-16 Hex to Char
        /// </summary>
        /// <returns>The Unicode hex.</returns>
        /// <param name="i">The index.</param>
        protected int GetUTF16(string text, int i)
        {
            int unicode = 0;
            unicode += HexToInt(text[i]) << 12;
            unicode += HexToInt(text[i + 1]) << 8;
            unicode += HexToInt(text[i + 2]) << 4;
            unicode += HexToInt(text[i + 3]);
            return unicode;
        }

        protected int GetUTF16(int[] text, int i)
        {
            int unicode = 0;
            unicode += HexToInt((char)text[i]) << 12;
            unicode += HexToInt((char)text[i + 1]) << 8;
            unicode += HexToInt((char)text[i + 2]) << 4;
            unicode += HexToInt((char)text[i + 3]);
            return unicode;
        }

        /// <summary>
        /// Convert UTF-16 Hex to Char
        /// </summary>
        /// <returns>The Unicode hex.</returns>
        /// <param name="i">The index.</param>
        protected int GetUTF16(StringBuilder text, int i)
        {
            int unicode = 0;
            unicode += HexToInt(text[i]) << 12;
            unicode += HexToInt(text[i + 1]) << 8;
            unicode += HexToInt(text[i + 2]) << 4;
            unicode += HexToInt(text[i + 3]);
            return unicode;
        }


        /// <summary>
        /// Convert UTF-32 Hex to Char
        /// </summary>
        /// <returns>The Unicode hex.</returns>
        /// <param name="i">The index.</param>
        protected int GetUTF32(string text, int i)
        {
            int unicode = 0;
            unicode += HexToInt(text[i]) << 28;
            unicode += HexToInt(text[i + 1]) << 24;
            unicode += HexToInt(text[i + 2]) << 20;
            unicode += HexToInt(text[i + 3]) << 16;
            unicode += HexToInt(text[i + 4]) << 12;
            unicode += HexToInt(text[i + 5]) << 8;
            unicode += HexToInt(text[i + 6]) << 4;
            unicode += HexToInt(text[i + 7]);
            return unicode;
        }

        protected int GetUTF32(int[] text, int i)
        {
            int unicode = 0;
            unicode += HexToInt((char)text[i]) << 28;
            unicode += HexToInt((char)text[i + 1]) << 24;
            unicode += HexToInt((char)text[i + 2]) << 20;
            unicode += HexToInt((char)text[i + 3]) << 16;
            unicode += HexToInt((char)text[i + 4]) << 12;
            unicode += HexToInt((char)text[i + 5]) << 8;
            unicode += HexToInt((char)text[i + 6]) << 4;
            unicode += HexToInt((char)text[i + 7]);
            return unicode;
        }

        /// <summary>
        /// Convert UTF-32 Hex to Char
        /// </summary>
        /// <returns>The Unicode hex.</returns>
        /// <param name="i">The index.</param>
        protected int GetUTF32(StringBuilder text, int i)
        {
            int unicode = 0;
            unicode += HexToInt(text[i]) << 28;
            unicode += HexToInt(text[i + 1]) << 24;
            unicode += HexToInt(text[i + 2]) << 20;
            unicode += HexToInt(text[i + 3]) << 16;
            unicode += HexToInt(text[i + 4]) << 12;
            unicode += HexToInt(text[i + 5]) << 8;
            unicode += HexToInt(text[i + 6]) << 4;
            unicode += HexToInt(text[i + 7]);
            return unicode;
        }


        /// <summary>
        /// Method to convert Hex color values to Color32
        /// </summary>
        /// <param name="hexChars"></param>
        /// <param name="tagCount"></param>
        /// <returns></returns>
        protected Color32 HexCharsToColor(char[] hexChars, int tagCount)
        {
            if (tagCount == 4)
            {
                byte r = (byte)(HexToInt(hexChars[1]) * 16 + HexToInt(hexChars[1]));
                byte g = (byte)(HexToInt(hexChars[2]) * 16 + HexToInt(hexChars[2]));
                byte b = (byte)(HexToInt(hexChars[3]) * 16 + HexToInt(hexChars[3]));

                return new Color32(r, g, b, 255);
            }
            else if (tagCount == 5)
            {
                byte r = (byte)(HexToInt(hexChars[1]) * 16 + HexToInt(hexChars[1]));
                byte g = (byte)(HexToInt(hexChars[2]) * 16 + HexToInt(hexChars[2]));
                byte b = (byte)(HexToInt(hexChars[3]) * 16 + HexToInt(hexChars[3]));
                byte a = (byte)(HexToInt(hexChars[4]) * 16 + HexToInt(hexChars[4]));

                return new Color32(r, g, b, a);
            }
            else if (tagCount == 7)
            {
                byte r = (byte)(HexToInt(hexChars[1]) * 16 + HexToInt(hexChars[2]));
                byte g = (byte)(HexToInt(hexChars[3]) * 16 + HexToInt(hexChars[4]));
                byte b = (byte)(HexToInt(hexChars[5]) * 16 + HexToInt(hexChars[6]));

                return new Color32(r, g, b, 255);
            }
            else if (tagCount == 9)
            {
                byte r = (byte)(HexToInt(hexChars[1]) * 16 + HexToInt(hexChars[2]));
                byte g = (byte)(HexToInt(hexChars[3]) * 16 + HexToInt(hexChars[4]));
                byte b = (byte)(HexToInt(hexChars[5]) * 16 + HexToInt(hexChars[6]));
                byte a = (byte)(HexToInt(hexChars[7]) * 16 + HexToInt(hexChars[8]));

                return new Color32(r, g, b, a);
            }
            else if (tagCount == 10)
            {
                byte r = (byte)(HexToInt(hexChars[7]) * 16 + HexToInt(hexChars[7]));
                byte g = (byte)(HexToInt(hexChars[8]) * 16 + HexToInt(hexChars[8]));
                byte b = (byte)(HexToInt(hexChars[9]) * 16 + HexToInt(hexChars[9]));

                return new Color32(r, g, b, 255);
            }
            else if (tagCount == 11)
            {
                byte r = (byte)(HexToInt(hexChars[7]) * 16 + HexToInt(hexChars[7]));
                byte g = (byte)(HexToInt(hexChars[8]) * 16 + HexToInt(hexChars[8]));
                byte b = (byte)(HexToInt(hexChars[9]) * 16 + HexToInt(hexChars[9]));
                byte a = (byte)(HexToInt(hexChars[10]) * 16 + HexToInt(hexChars[10]));

                return new Color32(r, g, b, a);
            }
            else if (tagCount == 13)
            {
                byte r = (byte)(HexToInt(hexChars[7]) * 16 + HexToInt(hexChars[8]));
                byte g = (byte)(HexToInt(hexChars[9]) * 16 + HexToInt(hexChars[10]));
                byte b = (byte)(HexToInt(hexChars[11]) * 16 + HexToInt(hexChars[12]));

                return new Color32(r, g, b, 255);
            }
            else if (tagCount == 15)
            {
                byte r = (byte)(HexToInt(hexChars[7]) * 16 + HexToInt(hexChars[8]));
                byte g = (byte)(HexToInt(hexChars[9]) * 16 + HexToInt(hexChars[10]));
                byte b = (byte)(HexToInt(hexChars[11]) * 16 + HexToInt(hexChars[12]));
                byte a = (byte)(HexToInt(hexChars[13]) * 16 + HexToInt(hexChars[14]));

                return new Color32(r, g, b, a);
            }

            return new Color32(255, 255, 255, 255);
        }


        /// <summary>
        /// Method to convert Hex Color values to Color32
        /// </summary>
        /// <param name="hexChars"></param>
        /// <param name="startIndex"></param>
        /// <param name="length"></param>
        /// <returns></returns>
        protected Color32 HexCharsToColor(char[] hexChars, int startIndex, int length)
        {
            if (length == 7)
            {
                byte r = (byte)(HexToInt(hexChars[startIndex + 1]) * 16 + HexToInt(hexChars[startIndex + 2]));
                byte g = (byte)(HexToInt(hexChars[startIndex + 3]) * 16 + HexToInt(hexChars[startIndex + 4]));
                byte b = (byte)(HexToInt(hexChars[startIndex + 5]) * 16 + HexToInt(hexChars[startIndex + 6]));

                return new Color32(r, g, b, 255);
            }
            else if (length == 9)
            {
                byte r = (byte)(HexToInt(hexChars[startIndex + 1]) * 16 + HexToInt(hexChars[startIndex + 2]));
                byte g = (byte)(HexToInt(hexChars[startIndex + 3]) * 16 + HexToInt(hexChars[startIndex + 4]));
                byte b = (byte)(HexToInt(hexChars[startIndex + 5]) * 16 + HexToInt(hexChars[startIndex + 6]));
                byte a = (byte)(HexToInt(hexChars[startIndex + 7]) * 16 + HexToInt(hexChars[startIndex + 8]));

                return new Color32(r, g, b, a);
            }

            return s_colorWhite;
        }


        /// <summary>
        /// Method which returns the number of parameters used in a tag attribute and populates an array with such values.
        /// </summary>
        /// <param name="chars">Char[] containing the tag attribute and data</param>
        /// <param name="startIndex">The index of the first char of the data</param>
        /// <param name="length">The length of the data</param>
        /// <param name="parameters">The number of parameters contained in the Char[]</param>
        /// <returns></returns>
        int GetAttributeParameters(char[] chars, int startIndex, int length, ref float[] parameters)
        {
            int endIndex = startIndex;
            int attributeCount = 0;

            while (endIndex < startIndex + length)
            {
                parameters[attributeCount] = ConvertToFloat(chars, startIndex, length, out endIndex);

                length -= (endIndex - startIndex) + 1;
                startIndex = endIndex + 1;

                attributeCount += 1;
            }

            return attributeCount;
        }


        /// <summary>
        /// Extracts a float value from char[] assuming we know the position of the start, end and decimal point.
        /// </summary>
        /// <param name="chars"></param>
        /// <param name="startIndex"></param>
        /// <param name="length"></param>
        /// <returns></returns>
        protected float ConvertToFloat(char[] chars, int startIndex, int length)
        {
            int lastIndex;

            return ConvertToFloat(chars, startIndex, length, out lastIndex);
        }


        /// <summary>
        /// Extracts a float value from char[] given a start index and length.
        /// </summary>
        /// <param name="chars"></param> The Char[] containing the numerical sequence.
        /// <param name="startIndex"></param> The index of the start of the numerical sequence.
        /// <param name="length"></param> The length of the numerical sequence.
        /// <param name="lastIndex"></param> Index of the last character in the validated sequence.
        /// <returns></returns>
        protected float ConvertToFloat(char[] chars, int startIndex, int length, out int lastIndex)
        {
            if (startIndex == 0)
            {
                lastIndex = 0;
                return Int16.MinValue;
            }

            int endIndex = startIndex + length;

            bool isIntegerValue = true;
            float decimalPointMultiplier = 0;

            // Set value multiplier checking the first character to determine if we are using '+' or '-'
            int valueSignMultiplier = 1;
            if (chars[startIndex] == '+')
            {
                valueSignMultiplier = 1;
                startIndex += 1;
            }
            else if (chars[startIndex] == '-')
            {
                valueSignMultiplier = -1;
                startIndex += 1;
            }

            float value = 0;

            for (int i = startIndex; i < endIndex; i++)
            {
                uint c = chars[i];

                if (c >= '0' && c <= '9' || c == '.')
                {
                    if (c == '.')
                    {
                        isIntegerValue = false;
                        decimalPointMultiplier = 0.1f;
                        continue;
                    }

                    //Calculate integer and floating point value
                    if (isIntegerValue)
                        value = value * 10 + (c - 48) * valueSignMultiplier;
                    else
                    {
                        value = value + (c - 48) * decimalPointMultiplier * valueSignMultiplier;
                        decimalPointMultiplier *= 0.1f;
                    }

                    continue;
                }
                else if (c == ',')
                {
                    if (i + 1 < endIndex && chars[i + 1] == ' ')
                        lastIndex = i + 1;
                    else
                        lastIndex = i;

                    // Make sure value is within reasonable range.
                    if (value > 32767)
                        return Int16.MinValue;

                    return value;
                }
            }

            lastIndex = endIndex;

            // Make sure value is within reasonable range.
            if (value > 32767)
                return Int16.MinValue;

            return value;
        }


        /// <summary>
        /// Function to identify and validate the rich tag. Returns the position of the > if the tag was valid.
        /// </summary>
        /// <param name="chars"></param>
        /// <param name="startIndex"></param>
        /// <param name="endIndex"></param>
        /// <returns></returns>
        protected bool ValidateHtmlTag(UnicodeChar[] chars, int startIndex, out int endIndex)
        {
            int tagCharCount = 0;
            byte attributeFlag = 0;

            int attributeIndex = 0;
            m_xmlAttribute[attributeIndex].nameHashCode = 0;
            m_xmlAttribute[attributeIndex].valueHashCode = 0;
            m_xmlAttribute[attributeIndex].valueStartIndex = 0;
            m_xmlAttribute[attributeIndex].valueLength = 0;
            TagValueType tagValueType = m_xmlAttribute[attributeIndex].valueType = TagValueType.None;
            TagUnitType tagUnitType = m_xmlAttribute[attributeIndex].unitType = TagUnitType.Pixels;

            // Clear attribute name hash codes
            m_xmlAttribute[1].nameHashCode = 0;
            m_xmlAttribute[2].nameHashCode = 0;
            m_xmlAttribute[3].nameHashCode = 0;
            m_xmlAttribute[4].nameHashCode = 0;

            endIndex = startIndex;
            bool isTagSet = false;
            bool isValidHtmlTag = false;

            for (int i = startIndex; i < chars.Length && chars[i].unicode != 0 && tagCharCount < m_htmlTag.Length && chars[i].unicode != '<'; i++)
            {
                int unicode = chars[i].unicode;

                if (unicode == '>') // ASCII Code of End HTML tag '>'
                {
                    isValidHtmlTag = true;
                    endIndex = i;
                    m_htmlTag[tagCharCount] = (char)0;
                    break;
                }

                m_htmlTag[tagCharCount] = (char)unicode;
                tagCharCount += 1;

                if (attributeFlag == 1)
                {
                    if (tagValueType == TagValueType.None)
                    {
                        // Check for attribute type
                        if (unicode == '+' || unicode == '-' || unicode == '.' || (unicode >= '0' && unicode <= '9'))
                        {
                            tagUnitType = TagUnitType.Pixels;
                            tagValueType = m_xmlAttribute[attributeIndex].valueType = TagValueType.NumericalValue;
                            m_xmlAttribute[attributeIndex].valueStartIndex = tagCharCount - 1;
                            m_xmlAttribute[attributeIndex].valueLength += 1;
                        }
                        else if (unicode == '#')
                        {
                            tagUnitType = TagUnitType.Pixels;
                            tagValueType = m_xmlAttribute[attributeIndex].valueType = TagValueType.ColorValue;
                            m_xmlAttribute[attributeIndex].valueStartIndex = tagCharCount - 1;
                            m_xmlAttribute[attributeIndex].valueLength += 1;
                        }
                        else if (unicode == '"')
                        {
                            tagUnitType = TagUnitType.Pixels;
                            tagValueType = m_xmlAttribute[attributeIndex].valueType = TagValueType.StringValue;
                            m_xmlAttribute[attributeIndex].valueStartIndex = tagCharCount;
                        }
                        else
                        {
                            tagUnitType = TagUnitType.Pixels;
                            tagValueType = m_xmlAttribute[attributeIndex].valueType = TagValueType.StringValue;
                            m_xmlAttribute[attributeIndex].valueStartIndex = tagCharCount - 1;
                            m_xmlAttribute[attributeIndex].valueHashCode = (m_xmlAttribute[attributeIndex].valueHashCode << 5) + m_xmlAttribute[attributeIndex].valueHashCode ^ unicode;
                            m_xmlAttribute[attributeIndex].valueLength += 1;
                        }
                    }
                    else
                    {
                        if (tagValueType == TagValueType.NumericalValue)
                        {
                            // Check for termination of numerical value.
                            if (unicode == 'p' || unicode == 'e' || unicode == '%' || unicode == ' ')
                            {
                                attributeFlag = 2;
                                tagValueType = TagValueType.None;

                                switch (unicode)
                                {
                                    case 'e':
                                        m_xmlAttribute[attributeIndex].unitType = tagUnitType = TagUnitType.FontUnits;
                                        break;
                                    case '%':
                                        m_xmlAttribute[attributeIndex].unitType = tagUnitType = TagUnitType.Percentage;
                                        break;
                                    default:
                                        m_xmlAttribute[attributeIndex].unitType = tagUnitType = TagUnitType.Pixels;
                                        break;
                                }

                                attributeIndex += 1;
                                m_xmlAttribute[attributeIndex].nameHashCode = 0;
                                m_xmlAttribute[attributeIndex].valueHashCode = 0;
                                m_xmlAttribute[attributeIndex].valueType = TagValueType.None;
                                m_xmlAttribute[attributeIndex].unitType = TagUnitType.Pixels;
                                m_xmlAttribute[attributeIndex].valueStartIndex = 0;
                                m_xmlAttribute[attributeIndex].valueLength = 0;

                            }
                            else if (attributeFlag != 2)
                            {
                                m_xmlAttribute[attributeIndex].valueLength += 1;
                            }
                        }
                        else if (tagValueType == TagValueType.ColorValue)
                        {
                            if (unicode != ' ')
                            {
                                m_xmlAttribute[attributeIndex].valueLength += 1;
                            }
                            else
                            {
                                attributeFlag = 2;
                                tagValueType = TagValueType.None;
                                tagUnitType = TagUnitType.Pixels;
                                attributeIndex += 1;
                                m_xmlAttribute[attributeIndex].nameHashCode = 0;
                                m_xmlAttribute[attributeIndex].valueType = TagValueType.None;
                                m_xmlAttribute[attributeIndex].unitType = TagUnitType.Pixels;
                                m_xmlAttribute[attributeIndex].valueHashCode = 0;
                                m_xmlAttribute[attributeIndex].valueStartIndex = 0;
                                m_xmlAttribute[attributeIndex].valueLength = 0;
                            }
                        }
                        else if (tagValueType == TagValueType.StringValue)
                        {
                            // Compute HashCode value for the named tag.
                            if (unicode != '"')
                            {
                                m_xmlAttribute[attributeIndex].valueHashCode = (m_xmlAttribute[attributeIndex].valueHashCode << 5) + m_xmlAttribute[attributeIndex].valueHashCode ^ unicode;
                                m_xmlAttribute[attributeIndex].valueLength += 1;
                            }
                            else
                            {
                                attributeFlag = 2;
                                tagValueType = TagValueType.None;
                                tagUnitType = TagUnitType.Pixels;
                                attributeIndex += 1;
                                m_xmlAttribute[attributeIndex].nameHashCode = 0;
                                m_xmlAttribute[attributeIndex].valueType = TagValueType.None;
                                m_xmlAttribute[attributeIndex].unitType = TagUnitType.Pixels;
                                m_xmlAttribute[attributeIndex].valueHashCode = 0;
                                m_xmlAttribute[attributeIndex].valueStartIndex = 0;
                                m_xmlAttribute[attributeIndex].valueLength = 0;
                            }
                        }
                    }
                }


                if (unicode == '=') // '='
                    attributeFlag = 1;

                // Compute HashCode for the name of the attribute
                if (attributeFlag == 0 && unicode == ' ')
                {
                    if (isTagSet) return false;

                    isTagSet = true;
                    attributeFlag = 2;

                    tagValueType = TagValueType.None;
                    tagUnitType = TagUnitType.Pixels;
                    attributeIndex += 1;
                    m_xmlAttribute[attributeIndex].nameHashCode = 0;
                    m_xmlAttribute[attributeIndex].valueType = TagValueType.None;
                    m_xmlAttribute[attributeIndex].unitType = TagUnitType.Pixels;
                    m_xmlAttribute[attributeIndex].valueHashCode = 0;
                    m_xmlAttribute[attributeIndex].valueStartIndex = 0;
                    m_xmlAttribute[attributeIndex].valueLength = 0;
                }

                if (attributeFlag == 0)
                    m_xmlAttribute[attributeIndex].nameHashCode = (m_xmlAttribute[attributeIndex].nameHashCode << 3) - m_xmlAttribute[attributeIndex].nameHashCode + unicode;

                if (attributeFlag == 2 && unicode == ' ')
                    attributeFlag = 0;

            }

            if (!isValidHtmlTag)
            {
                return false;
            }

            //Debug.Log("Tag is [" + m_htmlTag.ArrayToString() + "].  Tag HashCode: " + m_xmlAttribute[0].nameHashCode + "  Tag Value HashCode: " + m_xmlAttribute[0].valueHashCode + "  Attribute 1 HashCode: " + m_xmlAttribute[1].nameHashCode + " Value HashCode: " + m_xmlAttribute[1].valueHashCode);
            //for (int i = 0; i < attributeIndex; i++)
            //    Debug.Log("Tag [" + i + "] with HashCode: " + m_xmlAttribute[i].nameHashCode + " has value of [" + new string(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength) + "] Numerical Value: " + ConvertToFloat(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength));

            #region Rich Text Tag Processing
            #if !RICH_TEXT_ENABLED
            // Special handling of the no parsing tag </noparse> </NOPARSE> tag
            if (tag_NoParsing && (m_xmlAttribute[0].nameHashCode != 53822163 && m_xmlAttribute[0].nameHashCode != 49429939))
                return false;
            else if (m_xmlAttribute[0].nameHashCode == 53822163 || m_xmlAttribute[0].nameHashCode == 49429939)
            {
                tag_NoParsing = false;
                return true;
            }

            // Color <#FFF> 3 Hex values (short form)
            if (m_htmlTag[0] == 35 && tagCharCount == 4)
            {
                m_htmlColor = HexCharsToColor(m_htmlTag, tagCharCount);
                m_colorStack.Add(m_htmlColor);
                return true;
            }
            // Color <#FFF7> 4 Hex values with alpha (short form)
            else if (m_htmlTag[0] == 35 && tagCharCount == 5)
            {
                m_htmlColor = HexCharsToColor(m_htmlTag, tagCharCount);
                m_colorStack.Add(m_htmlColor);
                return true;
            }
            // Color <#FF00FF>
            else if (m_htmlTag[0] == 35 && tagCharCount == 7) // if Tag begins with # and contains 7 characters.
            {
                m_htmlColor = HexCharsToColor(m_htmlTag, tagCharCount);
                m_colorStack.Add(m_htmlColor);
                return true;
            }
            // Color <#FF00FF00> with alpha
            else if (m_htmlTag[0] == 35 && tagCharCount == 9) // if Tag begins with # and contains 9 characters.
            {
                m_htmlColor = HexCharsToColor(m_htmlTag, tagCharCount);
                m_colorStack.Add(m_htmlColor);
                return true;
            }
            else
            {
                float value = 0;

                switch (m_xmlAttribute[0].nameHashCode)
                {
                    case 98: // <b>
                    case 66: // <B>
                        m_FontStyleInternal |= FontStyles.Bold;
                        m_fontStyleStack.Add(FontStyles.Bold);

                        m_FontWeightInternal = FontWeight.Bold;
                        return true;
                    case 427: // </b>
                    case 395: // </B>
                        if ((m_fontStyle & FontStyles.Bold) != FontStyles.Bold)
                        {
                            if (m_fontStyleStack.Remove(FontStyles.Bold) == 0)
                            {
                                m_FontStyleInternal &= ~FontStyles.Bold;
                                m_FontWeightInternal = m_FontWeightStack.Peek();
                            }
                        }
                        return true;
                    case 105: // <i>
                    case 73: // <I>
                        m_FontStyleInternal |= FontStyles.Italic;
                        m_fontStyleStack.Add(FontStyles.Italic);

                        if (m_xmlAttribute[1].nameHashCode == 276531 || m_xmlAttribute[1].nameHashCode == 186899)
                        {
                            m_ItalicAngle = (int)ConvertToFloat(m_htmlTag, m_xmlAttribute[1].valueStartIndex, m_xmlAttribute[1].valueLength);

                            // Make sure angle is within valid range.
                            if (m_ItalicAngle < -180 || m_ItalicAngle > 180) return false;
                        }
                        else
                            m_ItalicAngle = m_currentFontAsset.italicStyle;

                        m_ItalicAngleStack.Add(m_ItalicAngle);

                        return true;
                    case 434: // </i>
                    case 402: // </I>
                        if ((m_fontStyle & FontStyles.Italic) != FontStyles.Italic)
                        {
                            m_ItalicAngle = m_ItalicAngleStack.Remove();

                            if (m_fontStyleStack.Remove(FontStyles.Italic) == 0)
                                m_FontStyleInternal &= ~FontStyles.Italic;
                        }
                        return true;
                    case 115: // <s>
                    case 83: // <S>
                        m_FontStyleInternal |= FontStyles.Strikethrough;
                        m_fontStyleStack.Add(FontStyles.Strikethrough);

                        if (m_xmlAttribute[1].nameHashCode == 281955 || m_xmlAttribute[1].nameHashCode == 192323)
                        {
                            m_strikethroughColor = HexCharsToColor(m_htmlTag, m_xmlAttribute[1].valueStartIndex, m_xmlAttribute[1].valueLength);
                            m_strikethroughColor.a = m_htmlColor.a < m_strikethroughColor.a ? (byte)(m_htmlColor.a) : (byte)(m_strikethroughColor .a);
                        }
                        else
                            m_strikethroughColor = m_htmlColor;

                        m_strikethroughColorStack.Add(m_strikethroughColor);

                        return true;
                    case 444: // </s>
                    case 412: // </S>
                        if ((m_fontStyle & FontStyles.Strikethrough) != FontStyles.Strikethrough)
                        {
                            if (m_fontStyleStack.Remove(FontStyles.Strikethrough) == 0)
                                m_FontStyleInternal &= ~FontStyles.Strikethrough;
                        }

                        m_strikethroughColor = m_strikethroughColorStack.Remove();
                        return true;
                    case 117: // <u>
                    case 85: // <U>
                        m_FontStyleInternal |= FontStyles.Underline;
                        m_fontStyleStack.Add(FontStyles.Underline);

                        if (m_xmlAttribute[1].nameHashCode == 281955 || m_xmlAttribute[1].nameHashCode == 192323)
                        {
                            m_underlineColor = HexCharsToColor(m_htmlTag, m_xmlAttribute[1].valueStartIndex, m_xmlAttribute[1].valueLength);
                            m_underlineColor.a = m_htmlColor.a < m_underlineColor.a ? (byte)(m_htmlColor.a) : (byte)(m_underlineColor.a);
                        }
                        else
                            m_underlineColor = m_htmlColor;

                        m_underlineColorStack.Add(m_underlineColor);

                        return true;
                    case 446: // </u>
                    case 414: // </U>
                        if ((m_fontStyle & FontStyles.Underline) != FontStyles.Underline)
                        {
                            m_underlineColor = m_underlineColorStack.Remove();

                            if (m_fontStyleStack.Remove(FontStyles.Underline) == 0)
                                m_FontStyleInternal &= ~FontStyles.Underline;
                        }

                        m_underlineColor = m_underlineColorStack.Remove();
                        return true;
                    case 43045: // <mark=#FF00FF80>
                    case 30245: // <MARK>
                        m_FontStyleInternal |= FontStyles.Highlight;
                        m_fontStyleStack.Add(FontStyles.Highlight);

                        Color32 highlightColor = new Color32(255, 255, 0, 64);
                        TMP_Offset highlightPadding = TMP_Offset.zero;

                        // Handle Mark Tag and potential attributes
                        for (int i = 0; i < m_xmlAttribute.Length && m_xmlAttribute[i].nameHashCode != 0; i++)
                        {
                            int nameHashCode = m_xmlAttribute[i].nameHashCode;

                            switch (nameHashCode)
                            {
                                // Mark tag
                                case 43045:
                                case 30245:
                                    if (m_xmlAttribute[i].valueType == TagValueType.ColorValue)
                                        highlightColor = HexCharsToColor(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);
                                    break;

                                // Color attribute
                                case 281955:
                                    highlightColor = HexCharsToColor(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength);
                                    break;

                                // Padding attribute
                                case 15087385:
                                    int paramCount = GetAttributeParameters(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength, ref m_attributeParameterValues);
                                    if (paramCount != 4) return false;

                                    highlightPadding = new TMP_Offset(m_attributeParameterValues[0], m_attributeParameterValues[1], m_attributeParameterValues[2], m_attributeParameterValues[3]);
                                    highlightPadding *= m_fontSize * 0.01f * (m_isOrthographic ? 1 : 0.1f);
                                    break;
                            }
                        }

                        highlightColor.a = m_htmlColor.a < highlightColor.a ? (byte)(m_htmlColor.a) : (byte)(highlightColor.a);

                        HighlightState state = new HighlightState(highlightColor, highlightPadding);
                        m_HighlightStateStack.Push(state);

                        return true;
                    case 155892: // </mark>
                    case 143092: // </MARK>
                        if ((m_fontStyle & FontStyles.Highlight) != FontStyles.Highlight)
                        {
                            m_HighlightStateStack.Remove();

                            if (m_fontStyleStack.Remove(FontStyles.Highlight) == 0)
                                m_FontStyleInternal &= ~FontStyles.Highlight;
                        }
                        return true;
                    case 6552: // <sub>
                    case 4728: // <SUB>
                        m_fontScaleMultiplier *= m_currentFontAsset.faceInfo.subscriptSize > 0 ? m_currentFontAsset.faceInfo.subscriptSize : 1;
                        m_baselineOffsetStack.Push(m_baselineOffset);
                        m_baselineOffset += m_currentFontAsset.faceInfo.subscriptOffset * m_fontScale * m_fontScaleMultiplier;

                        m_fontStyleStack.Add(FontStyles.Subscript);
                        m_FontStyleInternal |= FontStyles.Subscript;
                        return true;
                    case 22673: // </sub>
                    case 20849: // </SUB>
                        if ((m_FontStyleInternal & FontStyles.Subscript) == FontStyles.Subscript)
                        {
                            if (m_fontScaleMultiplier < 1)
                            {
                                //m_baselineOffset -= m_currentFontAsset.fontInfo.SubscriptOffset * m_fontScale * m_fontScaleMultiplier;
                                m_baselineOffset = m_baselineOffsetStack.Pop();
                                m_fontScaleMultiplier /= m_currentFontAsset.faceInfo.subscriptSize > 0 ? m_currentFontAsset.faceInfo.subscriptSize : 1;
                            }

                            if (m_fontStyleStack.Remove(FontStyles.Subscript) == 0)
                                m_FontStyleInternal &= ~FontStyles.Subscript;
                        }
                        return true;
                    case 6566: // <sup>
                    case 4742: // <SUP>
                        m_fontScaleMultiplier *= m_currentFontAsset.faceInfo.superscriptSize > 0 ? m_currentFontAsset.faceInfo.superscriptSize : 1;
                        m_baselineOffsetStack.Push(m_baselineOffset);
                        m_baselineOffset += m_currentFontAsset.faceInfo.superscriptOffset * m_fontScale * m_fontScaleMultiplier;

                        m_fontStyleStack.Add(FontStyles.Superscript);
                        m_FontStyleInternal |= FontStyles.Superscript;
                        return true;
                    case 22687: // </sup>
                    case 20863: // </SUP>
                        if ((m_FontStyleInternal & FontStyles.Superscript) == FontStyles.Superscript)
                        {
                            if (m_fontScaleMultiplier < 1)
                            {
                                //m_baselineOffset -= m_currentFontAsset.fontInfo.SuperscriptOffset * m_fontScale * m_fontScaleMultiplier;
                                m_baselineOffset = m_baselineOffsetStack.Pop();
                                m_fontScaleMultiplier /= m_currentFontAsset.faceInfo.superscriptSize > 0 ? m_currentFontAsset.faceInfo.superscriptSize : 1;
                            }

                            if (m_fontStyleStack.Remove(FontStyles.Superscript) == 0)
                                m_FontStyleInternal &= ~FontStyles.Superscript;
                        }
                        return true;
                    case -330774850: // <font-weight>
                    case 2012149182: // <FONT-WEIGHT>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch ((int)value)
                        {
                            case 100:
                                m_FontWeightInternal = FontWeight.Thin;
                                break;
                            case 200:
                                m_FontWeightInternal = FontWeight.ExtraLight;
                                break;
                            case 300:
                                m_FontWeightInternal = FontWeight.Light;
                                break;
                            case 400:
                                m_FontWeightInternal = FontWeight.Regular;
                                break;
                            case 500:
                                m_FontWeightInternal = FontWeight.Medium;
                                break;
                            case 600:
                                m_FontWeightInternal = FontWeight.SemiBold;
                                break;
                            case 700:
                                m_FontWeightInternal = FontWeight.Bold;
                                break;
                            case 800:
                                m_FontWeightInternal = FontWeight.Heavy;
                                break;
                            case 900:
                                m_FontWeightInternal = FontWeight.Black;
                                break;
                        }

                        m_FontWeightStack.Add(m_FontWeightInternal);

                        return true;
                    case -1885698441: // </font-weight>
                    case 457225591: // </FONT-WEIGHT>
                        m_FontWeightStack.Remove();

                        if (m_FontStyleInternal == FontStyles.Bold)
                            m_FontWeightInternal = FontWeight.Bold;
                        else
                            m_FontWeightInternal = m_FontWeightStack.Peek();

                        return true;
                    case 6380: // <pos=000.00px> <pos=0em> <pos=50%>
                    case 4556: // <POS>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                m_xAdvance = value * (m_isOrthographic ? 1.0f : 0.1f);
                                //m_isIgnoringAlignment = true;
                                return true;
                            case TagUnitType.FontUnits:
                                m_xAdvance = value * m_currentFontSize * (m_isOrthographic ? 1.0f : 0.1f);
                                //m_isIgnoringAlignment = true;
                                return true;
                            case TagUnitType.Percentage:
                                m_xAdvance = m_marginWidth * value / 100;
                                //m_isIgnoringAlignment = true;
                                return true;
                        }
                        return false;
                    case 22501: // </pos>
                    case 20677: // </POS>
                        m_isIgnoringAlignment = false;
                        return true;
                    case 16034505: // <voffset>
                    case 11642281: // <VOFFSET>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                m_baselineOffset = value * (m_isOrthographic ? 1 : 0.1f);
                                return true;
                            case TagUnitType.FontUnits:
                                m_baselineOffset = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                return true;
                            case TagUnitType.Percentage:
                                //m_baselineOffset = m_marginHeight * val / 100;
                                return false;
                        }
                        return false;
                    case 54741026: // </voffset>
                    case 50348802: // </VOFFSET>
                        m_baselineOffset = 0;
                        return true;
                    case 43991: // <page>
                    case 31191: // <PAGE>
                        // This tag only works when Overflow - Page mode is used.
                        if (m_overflowMode == TextOverflowModes.Page)
                        {
                            m_xAdvance = 0 + tag_LineIndent + tag_Indent;
                            m_lineOffset = 0;
                            m_pageNumber += 1;
                            m_isNewPage = true;
                        }
                        return true;
                    // <BR> tag is now handled inline where it is replaced by a linefeed or \n.
                    //case 544: // <BR>
                    //case 800: // <br>
                    //    m_forceLineBreak = true;
                    //    return true;
                    case 43969: // <nobr>
                    case 31169: // <NOBR>
                        m_isNonBreakingSpace = true;
                        return true;
                    case 156816: // </nobr>
                    case 144016: // </NOBR>
                        m_isNonBreakingSpace = false;
                        return true;
                    case 45545: // <size=>
                    case 32745: // <SIZE>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                if (m_htmlTag[5] == 43) // <size=+00>
                                {
                                    m_currentFontSize = m_fontSize + value;
                                    m_sizeStack.Add(m_currentFontSize);
                                    m_fontScale = (m_currentFontSize / m_currentFontAsset.faceInfo.pointSize * m_currentFontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));
                                    return true;
                                }
                                else if (m_htmlTag[5] == 45) // <size=-00>
                                {
                                    m_currentFontSize = m_fontSize + value;
                                    m_sizeStack.Add(m_currentFontSize);
                                    m_fontScale = (m_currentFontSize / m_currentFontAsset.faceInfo.pointSize * m_currentFontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));
                                    return true;
                                }
                                else // <size=00.0>
                                {
                                    m_currentFontSize = value;
                                    m_sizeStack.Add(m_currentFontSize);
                                    m_fontScale = (m_currentFontSize / m_currentFontAsset.faceInfo.pointSize * m_currentFontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));
                                    return true;
                                }
                            case TagUnitType.FontUnits:
                                m_currentFontSize = m_fontSize * value;
                                m_sizeStack.Add(m_currentFontSize);
                                m_fontScale = (m_currentFontSize / m_currentFontAsset.faceInfo.pointSize * m_currentFontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));
                                return true;
                            case TagUnitType.Percentage:
                                m_currentFontSize = m_fontSize * value / 100;
                                m_sizeStack.Add(m_currentFontSize);
                                m_fontScale = (m_currentFontSize / m_currentFontAsset.faceInfo.pointSize * m_currentFontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));
                                return true;
                        }
                        return false;
                    case 158392: // </size>
                    case 145592: // </SIZE>
                        m_currentFontSize = m_sizeStack.Remove();
                        m_fontScale = (m_currentFontSize / m_currentFontAsset.faceInfo.pointSize * m_currentFontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));
                        return true;
                    case 41311: // <font=xx>
                    case 28511: // <FONT>
                        int fontHashCode = m_xmlAttribute[0].valueHashCode;
                        int materialAttributeHashCode = m_xmlAttribute[1].nameHashCode;
                        int materialHashCode = m_xmlAttribute[1].valueHashCode;

                        // Special handling for <font=default> or <font=Default>
                        if (fontHashCode == 764638571 || fontHashCode == 523367755)
                        {
                            m_currentFontAsset = m_materialReferences[0].fontAsset;
                            m_currentMaterial = m_materialReferences[0].material;
                            m_currentMaterialIndex = 0;
                            //Debug.Log("<font=Default> assigning Font Asset [" + m_currentFontAsset.name + "] with Material [" + m_currentMaterial.name + "].");

                            m_fontScale = (m_currentFontSize / m_currentFontAsset.faceInfo.pointSize * m_currentFontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));

                            m_materialReferenceStack.Add(m_materialReferences[0]);

                            return true;
                        }

                        TMP_FontAsset tempFont;
                        Material tempMaterial;

                        // HANDLE NEW FONT ASSET
                        //TMP_ResourceManager.TryGetFontAsset(fontHashCode, out tempFont);

                        // Check if we already have a reference to this font asset.
                        MaterialReferenceManager.TryGetFontAsset(fontHashCode, out tempFont);

                        // Try loading font asset from potential delegate or resources.
                        if (tempFont == null)
                        {
                            // Check for anyone registered to this callback
                            tempFont = OnFontAssetRequest?.Invoke(fontHashCode, new string(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength));

                            if (tempFont == null)
                            {
                                // Load Font Asset
                                tempFont = Resources.Load<TMP_FontAsset>(TMP_Settings.defaultFontAssetPath + new string(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength));
                            }

                            if (tempFont == null)
                                return false;

                            // Add new reference to the font asset as well as default material to the MaterialReferenceManager
                            MaterialReferenceManager.AddFontAsset(tempFont);
                        }

                        // HANDLE NEW MATERIAL
                        if (materialAttributeHashCode == 0 && materialHashCode == 0)
                        {
                            // No material specified then use default font asset material.
                            m_currentMaterial = tempFont.material;

                            m_currentMaterialIndex = MaterialReference.AddMaterialReference(m_currentMaterial, tempFont, m_materialReferences, m_materialReferenceIndexLookup);

                            m_materialReferenceStack.Add(m_materialReferences[m_currentMaterialIndex]);
                        }
                        else if (materialAttributeHashCode == 103415287 || materialAttributeHashCode == 72669687) // using material attribute
                        {
                            if (MaterialReferenceManager.TryGetMaterial(materialHashCode, out tempMaterial))
                            {
                                m_currentMaterial = tempMaterial;

                                m_currentMaterialIndex = MaterialReference.AddMaterialReference(m_currentMaterial, tempFont, m_materialReferences, m_materialReferenceIndexLookup);

                                m_materialReferenceStack.Add(m_materialReferences[m_currentMaterialIndex]);
                            }
                            else
                            {
                                // Load new material
                                tempMaterial = Resources.Load<Material>(TMP_Settings.defaultFontAssetPath + new string(m_htmlTag, m_xmlAttribute[1].valueStartIndex, m_xmlAttribute[1].valueLength));

                                if (tempMaterial == null)
                                    return false;

                                // Add new reference to this material in the MaterialReferenceManager
                                MaterialReferenceManager.AddFontMaterial(materialHashCode, tempMaterial);

                                m_currentMaterial = tempMaterial;

                                m_currentMaterialIndex = MaterialReference.AddMaterialReference(m_currentMaterial, tempFont, m_materialReferences, m_materialReferenceIndexLookup);

                                m_materialReferenceStack.Add(m_materialReferences[m_currentMaterialIndex]);
                            }
                        }
                        else
                            return false;

                        m_currentFontAsset = tempFont;
                        m_fontScale = (m_currentFontSize / m_currentFontAsset.faceInfo.pointSize * m_currentFontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));

                        return true;
                    case 154158: // </font>
                    case 141358: // </FONT>
                        {
                            MaterialReference materialReference = m_materialReferenceStack.Remove();

                            m_currentFontAsset = materialReference.fontAsset;
                            m_currentMaterial = materialReference.material;
                            m_currentMaterialIndex = materialReference.index;

                            m_fontScale = (m_currentFontSize / m_currentFontAsset.faceInfo.pointSize * m_currentFontAsset.faceInfo.scale * (m_isOrthographic ? 1 : 0.1f));

                            return true;
                        }
                    case 103415287: // <material="material name">
                    case 72669687: // <MATERIAL>
                        materialHashCode = m_xmlAttribute[0].valueHashCode;

                        // Special handling for <material=default> or <material=Default>
                        if (materialHashCode == 764638571 || materialHashCode == 523367755)
                        {
                            // Check if material font atlas texture matches that of the current font asset.
                            //if (m_currentFontAsset.atlas.GetInstanceID() != m_currentMaterial.GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID()) return false;

                            m_currentMaterial = m_materialReferences[0].material;
                            m_currentMaterialIndex = 0;

                            m_materialReferenceStack.Add(m_materialReferences[0]);

                            return true;
                        }


                        // Check if material
                        if (MaterialReferenceManager.TryGetMaterial(materialHashCode, out tempMaterial))
                        {
                            // Check if material font atlas texture matches that of the current font asset.
                            //if (m_currentFontAsset.atlas.GetInstanceID() != tempMaterial.GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID()) return false;

                            m_currentMaterial = tempMaterial;

                            m_currentMaterialIndex = MaterialReference.AddMaterialReference(m_currentMaterial, m_currentFontAsset, m_materialReferences, m_materialReferenceIndexLookup);

                            m_materialReferenceStack.Add(m_materialReferences[m_currentMaterialIndex]);
                        }
                        else
                        {
                            // Load new material
                            tempMaterial = Resources.Load<Material>(TMP_Settings.defaultFontAssetPath + new string(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength));

                            if (tempMaterial == null)
                                return false;

                            // Check if material font atlas texture matches that of the current font asset.
                            //if (m_currentFontAsset.atlas.GetInstanceID() != tempMaterial.GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID()) return false;

                            // Add new reference to this material in the MaterialReferenceManager
                            MaterialReferenceManager.AddFontMaterial(materialHashCode, tempMaterial);

                            m_currentMaterial = tempMaterial;

                            m_currentMaterialIndex = MaterialReference.AddMaterialReference(m_currentMaterial, m_currentFontAsset , m_materialReferences, m_materialReferenceIndexLookup);

                            m_materialReferenceStack.Add(m_materialReferences[m_currentMaterialIndex]);
                        }
                        return true;
                    case 374360934: // </material>
                    case 343615334: // </MATERIAL>
                        {
                            //if (m_currentMaterial.GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID() != m_materialReferenceStack.PreviousItem().material.GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID())
                            //    return false;

                            MaterialReference materialReference = m_materialReferenceStack.Remove();

                            m_currentMaterial = materialReference.material;
                            m_currentMaterialIndex = materialReference.index;

                            return true;
                        }
                    case 320078: // <space=000.00>
                    case 230446: // <SPACE>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                m_xAdvance += value * (m_isOrthographic ? 1 : 0.1f);
                                return true;
                            case TagUnitType.FontUnits:
                                m_xAdvance += value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                return true;
                            case TagUnitType.Percentage:
                                // Not applicable
                                return false;
                        }
                        return false;
                    case 276254: // <alpha=#FF>
                    case 186622: // <ALPHA>
                        if (m_xmlAttribute[0].valueLength != 3) return false;

                        m_htmlColor.a = (byte)(HexToInt(m_htmlTag[7]) * 16 + HexToInt(m_htmlTag[8]));
                        return true;

                    case 1750458: // <a name=" ">
                        return false;
                    case 426: // </a>
                        return true;
                    case 43066: // <link="name">
                    case 30266: // <LINK>
                        if (m_isParsingText && !m_isCalculatingPreferredValues)
                        {
                            int index = m_textInfo.linkCount;

                            if (index + 1 > m_textInfo.linkInfo.Length)
                                TMP_TextInfo.Resize(ref m_textInfo.linkInfo, index + 1);

                            m_textInfo.linkInfo[index].textComponent = this;
                            m_textInfo.linkInfo[index].hashCode = m_xmlAttribute[0].valueHashCode;
                            m_textInfo.linkInfo[index].linkTextfirstCharacterIndex = m_characterCount;

                            m_textInfo.linkInfo[index].linkIdFirstCharacterIndex = startIndex + m_xmlAttribute[0].valueStartIndex;
                            m_textInfo.linkInfo[index].linkIdLength = m_xmlAttribute[0].valueLength;
                            m_textInfo.linkInfo[index].SetLinkID(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);
                        }
                        return true;
                    case 155913: // </link>
                    case 143113: // </LINK>
                        if (m_isParsingText && !m_isCalculatingPreferredValues)
                        {
                            if (m_textInfo.linkCount < m_textInfo.linkInfo.Length)
                            {
                                m_textInfo.linkInfo[m_textInfo.linkCount].linkTextLength = m_characterCount - m_textInfo.linkInfo[m_textInfo.linkCount].linkTextfirstCharacterIndex;

                                m_textInfo.linkCount += 1;
                            }
                        }
                        return true;
                    case 275917: // <align=>
                    case 186285: // <ALIGN>
                        switch (m_xmlAttribute[0].valueHashCode)
                        {
                            case 3774683: // <align=left>
                                m_lineJustification = HorizontalAlignmentOptions.Left;
                                m_lineJustificationStack.Add(m_lineJustification);
                                return true;
                            case 136703040: // <align=right>
                                m_lineJustification = HorizontalAlignmentOptions.Right;
                                m_lineJustificationStack.Add(m_lineJustification);
                                return true;
                            case -458210101: // <align=center>
                                m_lineJustification = HorizontalAlignmentOptions.Center;
                                m_lineJustificationStack.Add(m_lineJustification);
                                return true;
                            case -523808257: // <align=justified>
                                m_lineJustification = HorizontalAlignmentOptions.Justified;
                                m_lineJustificationStack.Add(m_lineJustification);
                                return true;
                            case 122383428: // <align=flush>
                                m_lineJustification = HorizontalAlignmentOptions.Flush;
                                m_lineJustificationStack.Add(m_lineJustification);
                                return true;
                        }
                        return false;
                    case 1065846: // </align>
                    case 976214: // </ALIGN>
                        m_lineJustification = m_lineJustificationStack.Remove();
                        return true;
                    case 327550: // <width=xx>
                    case 237918: // <WIDTH>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                m_width = value * (m_isOrthographic ? 1 : 0.1f);
                                break;
                            case TagUnitType.FontUnits:
                                return false;
                            //break;
                            case TagUnitType.Percentage:
                                m_width = m_marginWidth * value / 100;
                                break;
                        }
                        return true;
                    case 1117479: // </width>
                    case 1027847: // </WIDTH>
                        m_width = -1;
                        return true;
                    // STYLE tag is now handled inline and replaced by its definition.
                    //case 322689: // <style="name">
                    //case 233057: // <STYLE>
                    //    TMP_Style style = TMP_StyleSheet.GetStyle(m_xmlAttribute[0].valueHashCode);

                    //    if (style == null) return false;

                    //    m_styleStack.Add(style.hashCode);

                    //    // Parse Style Macro
                    //    for (int i = 0; i < style.styleOpeningTagArray.Length; i++)
                    //    {
                    //        if (style.styleOpeningTagArray[i] == 60)
                    //        {
                    //            if (ValidateHtmlTag(style.styleOpeningTagArray, i + 1, out i) == false) return false;
                    //        }
                    //    }
                    //    return true;
                    //case 1112618: // </style>
                    //case 1022986: // </STYLE>
                    //    style = TMP_StyleSheet.GetStyle(m_xmlAttribute[0].valueHashCode);

                    //    if (style == null)
                    //    {
                    //        // Get style from the Style Stack
                    //        int styleHashCode = m_styleStack.CurrentItem();
                    //        style = TMP_StyleSheet.GetStyle(styleHashCode);

                    //        m_styleStack.Remove();
                    //    }

                    //    if (style == null) return false;
                    //    //// Parse Style Macro
                    //    for (int i = 0; i < style.styleClosingTagArray.Length; i++)
                    //    {
                    //        if (style.styleClosingTagArray[i] == 60)
                    //            ValidateHtmlTag(style.styleClosingTagArray, i + 1, out i);
                    //    }
                    //    return true;
                    case 281955: // <color> <color=#FF00FF> or <color=#FF00FF00>
                    case 192323: // <COLOR=#FF00FF>
                        // <color=#FFF> 3 Hex (short hand)
                        if (m_htmlTag[6] == 35 && tagCharCount == 10)
                        {
                            m_htmlColor = HexCharsToColor(m_htmlTag, tagCharCount);
                            m_colorStack.Add(m_htmlColor);
                            return true;
                        }
                        // <color=#FFF7> 4 Hex (short hand)
                        else if (m_htmlTag[6] == 35 && tagCharCount == 11)
                        {
                            m_htmlColor = HexCharsToColor(m_htmlTag, tagCharCount);
                            m_colorStack.Add(m_htmlColor);
                            return true;
                        }
                        // <color=#FF00FF> 3 Hex pairs
                        if (m_htmlTag[6] == 35 && tagCharCount == 13)
                        {
                            m_htmlColor = HexCharsToColor(m_htmlTag, tagCharCount);
                            m_colorStack.Add(m_htmlColor);
                            return true;
                        }
                        // <color=#FF00FF00> 4 Hex pairs
                        else if (m_htmlTag[6] == 35 && tagCharCount == 15)
                        {
                            m_htmlColor = HexCharsToColor(m_htmlTag, tagCharCount);
                            m_colorStack.Add(m_htmlColor);
                            return true;
                        }

                        // <color=name>
                        switch (m_xmlAttribute[0].valueHashCode)
                        {
                            case 125395: // <color=red>
                                m_htmlColor = Color.red;
                                m_colorStack.Add(m_htmlColor);
                                return true;
                            case -992792864: // <color=lightblue>
                                m_htmlColor = new Color32(173, 216, 230, 255);
                                m_colorStack.Add(m_htmlColor);
                                return true;
                            case 3573310: // <color=blue>
                                m_htmlColor = Color.blue;
                                m_colorStack.Add(m_htmlColor);
                                return true;
                            case 3680713: // <color=grey>
                                m_htmlColor = new Color32(128, 128, 128, 255);
                                m_colorStack.Add(m_htmlColor);
                                return true;
                            case 117905991: // <color=black>
                                m_htmlColor = Color.black;
                                m_colorStack.Add(m_htmlColor);
                                return true;
                            case 121463835: // <color=green>
                                m_htmlColor = Color.green;
                                m_colorStack.Add(m_htmlColor);
                                return true;
                            case 140357351: // <color=white>
                                m_htmlColor = Color.white;
                                m_colorStack.Add(m_htmlColor);
                                return true;
                            case 26556144: // <color=orange>
                                m_htmlColor = new Color32(255, 128, 0, 255);
                                m_colorStack.Add(m_htmlColor);
                                return true;
                            case -36881330: // <color=purple>
                                m_htmlColor = new Color32(160, 32, 240, 255);
                                m_colorStack.Add(m_htmlColor);
                                return true;
                            case 554054276: // <color=yellow>
                                m_htmlColor = Color.yellow;
                                m_colorStack.Add(m_htmlColor);
                                return true;
                        }
                        return false;

                    case 100149144: //<gradient>
                    case 69403544:  // <GRADIENT>
                        int gradientPresetHashCode = m_xmlAttribute[0].valueHashCode;
                        TMP_ColorGradient tempColorGradientPreset;

                        // Check if Color Gradient Preset has already been loaded.
                        if (MaterialReferenceManager.TryGetColorGradientPreset(gradientPresetHashCode, out tempColorGradientPreset))
                        {
                            m_colorGradientPreset = tempColorGradientPreset;
                        }
                        else
                        {
                            // Load Color Gradient Preset
                            if (tempColorGradientPreset == null)
                            {
                                tempColorGradientPreset = Resources.Load<TMP_ColorGradient>(TMP_Settings.defaultColorGradientPresetsPath + new string(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength));
                            }

                            if (tempColorGradientPreset == null)
                                return false;

                            MaterialReferenceManager.AddColorGradientPreset(gradientPresetHashCode, tempColorGradientPreset);
                            m_colorGradientPreset = tempColorGradientPreset;
                        }

                        m_colorGradientPresetIsTinted = false;

                        // Check Attributes
                        for (int i = 1; i < m_xmlAttribute.Length && m_xmlAttribute[i].nameHashCode != 0; i++)
                        {
                            // Get attribute name
                            int nameHashCode = m_xmlAttribute[i].nameHashCode;

                            switch (nameHashCode)
                            {
                                case 45819: // tint
                                case 33019: // TINT
                                    m_colorGradientPresetIsTinted = ConvertToFloat(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength) != 0;
                                    break;
                            }
                        }

                        m_colorGradientStack.Add(m_colorGradientPreset);

                        // TODO : Add support for defining preset in the tag itself

                        return true;

                    case 371094791: // </gradient>
                    case 340349191: // </GRADIENT>
                        m_colorGradientPreset = m_colorGradientStack.Remove();
                        return true;

                    case 1983971: // <cspace=xx.x>
                    case 1356515: // <CSPACE>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                m_cSpacing = value * (m_isOrthographic ? 1 : 0.1f);
                                break;
                            case TagUnitType.FontUnits:
                                m_cSpacing = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                break;
                            case TagUnitType.Percentage:
                                return false;
                        }
                        return true;
                    case 7513474: // </cspace>
                    case 6886018: // </CSPACE>
                        if (!m_isParsingText) return true;

                        // Adjust xAdvance to remove extra space from last character.
                        if (m_characterCount > 0)
                        {
                            m_xAdvance -= m_cSpacing;
                            m_textInfo.characterInfo[m_characterCount - 1].xAdvance = m_xAdvance;
                        }
                        m_cSpacing = 0;
                        return true;
                    case 2152041: // <mspace=xx.x>
                    case 1524585: // <MSPACE>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                m_monoSpacing = value * (m_isOrthographic ? 1 : 0.1f);
                                break;
                            case TagUnitType.FontUnits:
                                m_monoSpacing = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                break;
                            case TagUnitType.Percentage:
                                return false;
                        }
                        return true;
                    case 7681544: // </mspace>
                    case 7054088: // </MSPACE>
                        m_monoSpacing = 0;
                        return true;
                    case 280416: // <class="name">
                        return false;
                    case 1071884: // </color>
                    case 982252: // </COLOR>
                        m_htmlColor = m_colorStack.Remove();
                        return true;
                    case 2068980: // <indent=10px> <indent=10em> <indent=50%>
                    case 1441524: // <INDENT>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                tag_Indent = value * (m_isOrthographic ? 1 : 0.1f);
                                break;
                            case TagUnitType.FontUnits:
                                tag_Indent = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                break;
                            case TagUnitType.Percentage:
                                tag_Indent = m_marginWidth * value / 100;
                                break;
                        }
                        m_indentStack.Add(tag_Indent);

                        m_xAdvance = tag_Indent;
                        return true;
                    case 7598483: // </indent>
                    case 6971027: // </INDENT>
                        tag_Indent = m_indentStack.Remove();
                        //m_xAdvance = tag_Indent;
                        return true;
                    case 1109386397: // <line-indent>
                    case -842656867: // <LINE-INDENT>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                tag_LineIndent = value * (m_isOrthographic ? 1 : 0.1f);
                                break;
                            case TagUnitType.FontUnits:
                                tag_LineIndent = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                break;
                            case TagUnitType.Percentage:
                                tag_LineIndent = m_marginWidth * value / 100;
                                break;
                        }

                        m_xAdvance += tag_LineIndent;
                        return true;
                    case -445537194: // </line-indent>
                    case 1897386838: // </LINE-INDENT>
                        tag_LineIndent = 0;
                        return true;
                    case 2246877: // <sprite=x>
                    case 1619421: // <SPRITE>
                        int spriteAssetHashCode = m_xmlAttribute[0].valueHashCode;
                        TMP_SpriteAsset tempSpriteAsset;
                        m_spriteIndex = -1;

                        // CHECK TAG FORMAT
                        if (m_xmlAttribute[0].valueType == TagValueType.None || m_xmlAttribute[0].valueType == TagValueType.NumericalValue)
                        {
                            // No Sprite Asset is assigned to the text object
                            if (m_spriteAsset != null)
                            {
                                m_currentSpriteAsset = m_spriteAsset;
                            }
                            else if (m_defaultSpriteAsset != null)
                            {
                                m_currentSpriteAsset = m_defaultSpriteAsset;
                            }
                            else if (m_defaultSpriteAsset == null)
                            {
                                if (TMP_Settings.defaultSpriteAsset != null)
                                    m_defaultSpriteAsset = TMP_Settings.defaultSpriteAsset;
                                else
                                    m_defaultSpriteAsset = Resources.Load<TMP_SpriteAsset>("Sprite Assets/Default Sprite Asset");

                                m_currentSpriteAsset = m_defaultSpriteAsset;
                            }

                            // No valid sprite asset available
                            if (m_currentSpriteAsset == null)
                                return false;
                        }
                        else
                        {
                            // A Sprite Asset has been specified
                            if (MaterialReferenceManager.TryGetSpriteAsset(spriteAssetHashCode, out tempSpriteAsset))
                            {
                                m_currentSpriteAsset = tempSpriteAsset;
                            }
                            else
                            {
                                // Load Sprite Asset
                                if (tempSpriteAsset == null)
                                {
                                    //
                                    tempSpriteAsset = OnSpriteAssetRequest?.Invoke(spriteAssetHashCode, new string(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength));

                                    if (tempSpriteAsset == null)
                                        tempSpriteAsset = Resources.Load<TMP_SpriteAsset>(TMP_Settings.defaultSpriteAssetPath + new string(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength));
                                }

                                if (tempSpriteAsset == null)
                                    return false;

                                //Debug.Log("Loading & assigning new Sprite Asset: " + tempSpriteAsset.name);
                                MaterialReferenceManager.AddSpriteAsset(spriteAssetHashCode, tempSpriteAsset);
                                m_currentSpriteAsset = tempSpriteAsset;
                            }
                        }

                        // Handling of <sprite=index> legacy tag format.
                        if (m_xmlAttribute[0].valueType == TagValueType.NumericalValue) // <sprite=index>
                        {
                            int index = (int)ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                            // Reject tag if value is invalid.
                            if (index == Int16.MinValue) return false;

                            // Check to make sure sprite index is valid
                            if (index > m_currentSpriteAsset.spriteCharacterTable.Count - 1) return false;

                            m_spriteIndex = index;
                        }

                        m_spriteColor = s_colorWhite;
                        m_tintSprite = false;

                        // Handle Sprite Tag Attributes
                        for (int i = 0; i < m_xmlAttribute.Length && m_xmlAttribute[i].nameHashCode != 0; i++)
                        {
                            //Debug.Log("Attribute[" + i + "].nameHashCode=" + m_xmlAttribute[i].nameHashCode + "   Value:" + ConvertToFloat(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength));
                            int nameHashCode = m_xmlAttribute[i].nameHashCode;
                            int index = 0;

                            switch (nameHashCode)
                            {
                                case 43347: // <sprite name="">
                                case 30547: // <SPRITE NAME="">
                                    m_currentSpriteAsset = TMP_SpriteAsset.SearchForSpriteByHashCode(m_currentSpriteAsset, m_xmlAttribute[i].valueHashCode, true, out index);
                                    if (index == -1) return false;

                                    m_spriteIndex = index;
                                    break;
                                case 295562: // <sprite index=>
                                case 205930: // <SPRITE INDEX=>
                                    index = (int)ConvertToFloat(m_htmlTag, m_xmlAttribute[1].valueStartIndex, m_xmlAttribute[1].valueLength);

                                    // Reject tag if value is invalid.
                                    if (index == Int16.MinValue) return false;

                                    // Check to make sure sprite index is valid
                                    if (index > m_currentSpriteAsset.spriteCharacterTable.Count - 1) return false;

                                    m_spriteIndex = index;
                                    break;
                                case 45819: // tint
                                case 33019: // TINT
                                    m_tintSprite = ConvertToFloat(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength) != 0;
                                    break;
                                case 281955: // color=#FF00FF80
                                case 192323: // COLOR
                                    m_spriteColor = HexCharsToColor(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength);
                                    break;
                                case 39505: // anim="0,16,12"  start, end, fps
                                case 26705: // ANIM
                                    //Debug.Log("Start: " + m_xmlAttribute[i].valueStartIndex + "  Length: " + m_xmlAttribute[i].valueLength);
                                    int paramCount = GetAttributeParameters(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength, ref m_attributeParameterValues);
                                    if (paramCount != 3) return false;

                                    m_spriteIndex = (int)m_attributeParameterValues[0];

                                    if (m_isParsingText)
                                    {
                                        // TODO : fix this!
                                        //if (m_attributeParameterValues[0] > m_currentSpriteAsset.spriteInfoList.Count - 1 || m_attributeParameterValues[1] > m_currentSpriteAsset.spriteInfoList.Count - 1)
                                        //    return false;

                                        spriteAnimator.DoSpriteAnimation(m_characterCount, m_currentSpriteAsset, m_spriteIndex, (int)m_attributeParameterValues[1], (int)m_attributeParameterValues[2]);
                                    }

                                    break;
                                //case 45545: // size
                                //case 32745: // SIZE

                                //    break;
                                default:
                                    if (nameHashCode != 2246877 && nameHashCode != 1619421)
                                        return false;
                                    break;
                            }
                        }

                        if (m_spriteIndex == -1) return false;

                        // Material HashCode for the Sprite Asset is the Sprite Asset Hash Code
                        m_currentMaterialIndex = MaterialReference.AddMaterialReference(m_currentSpriteAsset.material, m_currentSpriteAsset, m_materialReferences, m_materialReferenceIndexLookup);

                        m_textElementType = TMP_TextElementType.Sprite;
                        return true;
                    case 730022849: // <lowercase>
                    case 514803617: // <LOWERCASE>
                        m_FontStyleInternal |= FontStyles.LowerCase;
                        m_fontStyleStack.Add(FontStyles.LowerCase);
                        return true;
                    case -1668324918: // </lowercase>
                    case -1883544150: // </LOWERCASE>
                        if ((m_fontStyle & FontStyles.LowerCase) != FontStyles.LowerCase)
                        {
                            if (m_fontStyleStack.Remove(FontStyles.LowerCase) == 0)
                                m_FontStyleInternal &= ~FontStyles.LowerCase;
                        }
                        return true;
                    case 13526026: // <allcaps>
                    case 9133802: // <ALLCAPS>
                    case 781906058: // <uppercase>
                    case 566686826: // <UPPERCASE>
                        m_FontStyleInternal |= FontStyles.UpperCase;
                        m_fontStyleStack.Add(FontStyles.UpperCase);
                        return true;
                    case 52232547: // </allcaps>
                    case 47840323: // </ALLCAPS>
                    case -1616441709: // </uppercase>
                    case -1831660941: // </UPPERCASE>
                        if ((m_fontStyle & FontStyles.UpperCase) != FontStyles.UpperCase)
                        {
                            if (m_fontStyleStack.Remove(FontStyles.UpperCase) == 0)
                                m_FontStyleInternal &= ~FontStyles.UpperCase;
                        }
                        return true;
                    case 766244328: // <smallcaps>
                    case 551025096: // <SMALLCAPS>
                        m_FontStyleInternal |= FontStyles.SmallCaps;
                        m_fontStyleStack.Add(FontStyles.SmallCaps);
                        return true;
                    case -1632103439: // </smallcaps>
                    case -1847322671: // </SMALLCAPS>
                        if ((m_fontStyle & FontStyles.SmallCaps) != FontStyles.SmallCaps)
                        {
                            if (m_fontStyleStack.Remove(FontStyles.SmallCaps) == 0)
                                m_FontStyleInternal &= ~FontStyles.SmallCaps;
                        }
                        return true;
                    case 2109854: // <margin=00.0> <margin=00em> <margin=50%>
                    case 1482398: // <MARGIN>
                        // Check value type
                        switch (m_xmlAttribute[0].valueType)
                        {
                            case TagValueType.NumericalValue:
                                value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength); // px

                                // Reject tag if value is invalid.
                                if (value == Int16.MinValue) return false;

                                // Determine tag unit type
                                switch (tagUnitType)
                                {
                                    case TagUnitType.Pixels:
                                        m_marginLeft = value * (m_isOrthographic ? 1 : 0.1f);
                                        break;
                                    case TagUnitType.FontUnits:
                                        m_marginLeft = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                        break;
                                    case TagUnitType.Percentage:
                                        m_marginLeft = (m_marginWidth - (m_width != -1 ? m_width : 0)) * value / 100;
                                        break;
                                }
                                m_marginLeft = m_marginLeft >= 0 ? m_marginLeft : 0;
                                m_marginRight = m_marginLeft;
                                return true;

                            case TagValueType.None:
                                for (int i = 1; i < m_xmlAttribute.Length && m_xmlAttribute[i].nameHashCode != 0; i++)
                                {
                                    // Get attribute name
                                    int nameHashCode = m_xmlAttribute[i].nameHashCode;

                                    switch (nameHashCode)
                                    {
                                        case 42823:  // <margin left=value>
                                            value = ConvertToFloat(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength); // px

                                            // Reject tag if value is invalid.
                                            if (value == Int16.MinValue) return false;

                                            switch (m_xmlAttribute[i].unitType)
                                            {
                                                case TagUnitType.Pixels:
                                                    m_marginLeft = value * (m_isOrthographic ? 1 : 0.1f);
                                                    break;
                                                case TagUnitType.FontUnits:
                                                    m_marginLeft = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                                    break;
                                                case TagUnitType.Percentage:
                                                    m_marginLeft = (m_marginWidth - (m_width != -1 ? m_width : 0)) * value / 100;
                                                    break;
                                            }
                                            m_marginLeft = m_marginLeft >= 0 ? m_marginLeft : 0;
                                            break;

                                        case 315620: // <margin right=value>
                                            value = ConvertToFloat(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength); // px

                                            // Reject tag if value is invalid.
                                            if (value == Int16.MinValue) return false;

                                            switch (m_xmlAttribute[i].unitType)
                                            {
                                                case TagUnitType.Pixels:
                                                    m_marginRight = value * (m_isOrthographic ? 1 : 0.1f);
                                                    break;
                                                case TagUnitType.FontUnits:
                                                    m_marginRight = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                                    break;
                                                case TagUnitType.Percentage:
                                                    m_marginRight = (m_marginWidth - (m_width != -1 ? m_width : 0)) * value / 100;
                                                    break;
                                            }
                                            m_marginRight = m_marginRight >= 0 ? m_marginRight : 0;
                                            break;
                                    }
                                }
                                return true;
                        }

                        return false;
                    case 7639357: // </margin>
                    case 7011901: // </MARGIN>
                        m_marginLeft = 0;
                        m_marginRight = 0;
                        return true;
                    case 1100728678: // <margin-left=xx.x>
                    case -855002522: // <MARGIN-LEFT>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength); // px

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                m_marginLeft = value * (m_isOrthographic ? 1 : 0.1f);
                                break;
                            case TagUnitType.FontUnits:
                                m_marginLeft = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                break;
                            case TagUnitType.Percentage:
                                m_marginLeft = (m_marginWidth - (m_width != -1 ? m_width : 0)) * value / 100;
                                break;
                        }
                        m_marginLeft = m_marginLeft >= 0 ? m_marginLeft : 0;
                        return true;
                    case -884817987: // <margin-right=xx.x>
                    case -1690034531: // <MARGIN-RIGHT>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength); // px

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                m_marginRight = value * (m_isOrthographic ? 1 : 0.1f);
                                break;
                            case TagUnitType.FontUnits:
                                m_marginRight = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                break;
                            case TagUnitType.Percentage:
                                m_marginRight = (m_marginWidth - (m_width != -1 ? m_width : 0)) * value / 100;
                                break;
                        }
                        m_marginRight = m_marginRight >= 0 ? m_marginRight : 0;
                        return true;
                    case 1109349752: // <line-height=xx.x>
                    case -842693512: // <LINE-HEIGHT>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        switch (tagUnitType)
                        {
                            case TagUnitType.Pixels:
                                m_lineHeight = value * (m_isOrthographic ? 1 : 0.1f);
                                break;
                            case TagUnitType.FontUnits:
                                m_lineHeight = value * (m_isOrthographic ? 1 : 0.1f) * m_currentFontSize;
                                break;
                            case TagUnitType.Percentage:
                                m_lineHeight = m_fontAsset.faceInfo.lineHeight * value / 100 * m_fontScale;
                                break;
                        }
                        return true;
                    case -445573839: // </line-height>
                    case 1897350193: // </LINE-HEIGHT>
                        m_lineHeight = TMP_Math.FLOAT_UNSET;
                        return true;
                    case 15115642: // <noparse>
                    case 10723418: // <NOPARSE>
                        tag_NoParsing = true;
                        return true;
                    case 1913798: // <action>
                    case 1286342: // <ACTION>
                        int actionID = m_xmlAttribute[0].valueHashCode;

                        if (m_isParsingText)
                        {
                            m_actionStack.Add(actionID);

                            Debug.Log("Action ID: [" + actionID + "] First character index: " + m_characterCount);


                        }
                        //if (m_isParsingText)
                        //{
                        // TMP_Action action = TMP_Action.GetAction(m_xmlAttribute[0].valueHashCode);
                        //}
                        return true;
                    case 7443301: // </action>
                    case 6815845: // </ACTION>
                        if (m_isParsingText)
                        {
                            Debug.Log("Action ID: [" + m_actionStack.CurrentItem() + "] Last character index: " + (m_characterCount - 1));
                        }

                        m_actionStack.Remove();
                        return true;
                    case 315682: // <scale=xx.x>
                    case 226050: // <SCALE=xx.x>
                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        m_FXMatrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, new Vector3(value, 1, 1));
                        m_isFXMatrixSet = true;

                        return true;
                    case 1105611: // </scale>
                    case 1015979: // </SCALE>
                        m_isFXMatrixSet = false;
                        return true;
                    case 2227963: // <rotate=xx.x>
                    case 1600507: // <ROTATE=xx.x>
                        // TODO: Add ability to use Random Rotation

                        value = ConvertToFloat(m_htmlTag, m_xmlAttribute[0].valueStartIndex, m_xmlAttribute[0].valueLength);

                        // Reject tag if value is invalid.
                        if (value == Int16.MinValue) return false;

                        m_FXMatrix = Matrix4x4.TRS(Vector3.zero, Quaternion.Euler(0, 0, value), Vector3.one);
                        m_isFXMatrixSet = true;

                        return true;
                    case 7757466: // </rotate>
                    case 7130010: // </ROTATE>
                        m_isFXMatrixSet = false;
                        return true;
                    case 317446: // <table>
                    case 227814: // <TABLE>
                        //switch (m_xmlAttribute[1].nameHashCode)
                        //{
                        //    case 327550: // width
                        //        float tableWidth = ConvertToFloat(m_htmlTag, m_xmlAttribute[1].valueStartIndex, m_xmlAttribute[1].valueLength);

                        //        // Reject tag if value is invalid.
                        //        if (tableWidth == Int16.MinValue) return false;

                        //        switch (tagUnitType)
                        //        {
                        //            case TagUnitType.Pixels:
                        //                Debug.Log("Table width = " + tableWidth + "px.");
                        //                break;
                        //            case TagUnitType.FontUnits:
                        //                Debug.Log("Table width = " + tableWidth + "em.");
                        //                break;
                        //            case TagUnitType.Percentage:
                        //                Debug.Log("Table width = " + tableWidth + "%.");
                        //                break;
                        //        }
                        //        break;
                        //}
                        return false;
                    case 1107375: // </table>
                    case 1017743: // </TABLE>
                        return true;
                    case 926: // <tr>
                    case 670: // <TR>
                        return true;
                    case 3229: // </tr>
                    case 2973: // </TR>
                        return true;
                    case 916: // <th>
                    case 660: // <TH>
                        // Set style to bold and center alignment
                        return true;
                    case 3219: // </th>
                    case 2963: // </TH>
                        return true;
                    case 912: // <td>
                    case 656: // <TD>
                              // Style options
                        //for (int i = 1; i < m_xmlAttribute.Length && m_xmlAttribute[i].nameHashCode != 0; i++)
                        //{
                        //    switch (m_xmlAttribute[i].nameHashCode)
                        //    {
                        //        case 327550: // width
                        //            float tableWidth = ConvertToFloat(m_htmlTag, m_xmlAttribute[i].valueStartIndex, m_xmlAttribute[i].valueLength);

                        //            switch (tagUnitType)
                        //            {
                        //                case TagUnitType.Pixels:
                        //                    Debug.Log("Table width = " + tableWidth + "px.");
                        //                    break;
                        //                case TagUnitType.FontUnits:
                        //                    Debug.Log("Table width = " + tableWidth + "em.");
                        //                    break;
                        //                case TagUnitType.Percentage:
                        //                    Debug.Log("Table width = " + tableWidth + "%.");
                        //                    break;
                        //            }
                        //            break;
                        //        case 275917: // align
                        //            switch (m_xmlAttribute[i].valueHashCode)
                        //            {
                        //                case 3774683: // left
                        //                    Debug.Log("TD align=\"left\".");
                        //                    break;
                        //                case 136703040: // right
                        //                    Debug.Log("TD align=\"right\".");
                        //                    break;
                        //                case -458210101: // center
                        //                    Debug.Log("TD align=\"center\".");
                        //                    break;
                        //                case -523808257: // justified
                        //                    Debug.Log("TD align=\"justified\".");
                        //                    break;
                        //            }
                        //            break;
                        //    }
                        //}

                        return false;
                    case 3215: // </td>
                    case 2959: // </TD>
                        return false;
                }
            }
            #endif
            #endregion

            return false;
        }
    }
}
