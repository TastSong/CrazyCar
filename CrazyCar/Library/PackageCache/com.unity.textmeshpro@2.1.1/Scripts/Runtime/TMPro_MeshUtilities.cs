using UnityEngine;
using UnityEngine.TextCore;
using System;


namespace TMPro
{
    /// <summary>
    /// Flags to control what vertex data is pushed to the mesh and renderer.
    /// </summary>
    public enum TMP_VertexDataUpdateFlags
    {
        None = 0x0,
        Vertices = 0x1,
        Uv0 = 0x2,
        Uv2 = 0x4,
        Uv4 = 0x8,
        Colors32 = 0x10,
        All = 0xFF
    };


    /// <summary>
    /// TMP custom data type to represent 32 bit characters.
    /// </summary>
    //public struct TMP_Char
    //{
    //    private int m_value;

    //    private TMP_Char(int value)
    //    {
    //        this.m_value = value;
    //    }

    //    private TMP_Char(TMP_Char value)
    //    {
    //        this.m_value = (int)value;
    //    }

    //    public static implicit operator TMP_Char(int value)
    //    {
    //        return new TMP_Char(value);
    //    }

    //    public static implicit operator TMP_Char(char c)
    //    {
    //        return new TMP_Char(c);
    //    }

    //    public static explicit operator int(TMP_Char value)
    //    {
    //        return value.m_value;
    //    }

    //    public override string ToString()
    //    {
    //        return m_value.ToString();
    //    }
    //}


    //public struct TMP_VertexInfo
    //{
    //    public TMP_Vertex topLeft;
    //    public TMP_Vertex bottomLeft;
    //    public TMP_Vertex topRight;
    //    public TMP_Vertex bottomRight;
    //}


    [Serializable]
    public struct VertexGradient
    {
        public Color topLeft;
        public Color topRight;
        public Color bottomLeft;
        public Color bottomRight;

        public VertexGradient (Color color)
        {
            this.topLeft = color;
            this.topRight = color;
            this.bottomLeft = color;
            this.bottomRight = color;
        }

        /// <summary>
        /// The vertex colors at the corners of the characters.
        /// </summary>
        /// <param name="color0">Top left color.</param>
        /// <param name="color1">Top right color.</param>
        /// <param name="color2">Bottom left color.</param>
        /// <param name="color3">Bottom right color.</param>
        public VertexGradient(Color color0, Color color1, Color color2, Color color3)
        {
            this.topLeft = color0;
            this.topRight = color1;
            this.bottomLeft = color2;
            this.bottomRight = color3;
        }
    }


    public struct TMP_PageInfo
    {
        public int firstCharacterIndex;
        public int lastCharacterIndex;
        public float ascender;
        public float baseLine;
        public float descender;
        // public float extents;
    }


    /// <summary>
    /// Structure containing information about individual links contained in the text object.
    /// </summary>
    public struct TMP_LinkInfo
    {
        public TMP_Text textComponent;

        public int hashCode;

        public int linkIdFirstCharacterIndex;
        public int linkIdLength;
        public int linkTextfirstCharacterIndex;
        public int linkTextLength;

        internal char[] linkID;


        internal void SetLinkID(char[] text, int startIndex, int length)
        {
            if (linkID == null || linkID.Length < length) linkID = new char[length];

            for (int i = 0; i < length; i++)
                linkID[i] = text[startIndex + i];
        }

        /// <summary>
        /// Function which returns the text contained in a link.
        /// </summary>
        /// <param name="textInfo"></param>
        /// <returns></returns>
        public string GetLinkText()
        {
            string text = string.Empty;
            TMP_TextInfo textInfo = textComponent.textInfo;

            for (int i = linkTextfirstCharacterIndex; i < linkTextfirstCharacterIndex + linkTextLength; i++)
                text += textInfo.characterInfo[i].character;

            return text;
        }


        /// <summary>
        /// Function which returns the link ID as a string.
        /// </summary>
        /// <param name="text">The source input text.</param>
        /// <returns></returns>
        public string GetLinkID()
        {
            if (textComponent == null)
                return string.Empty;

            return new string(linkID, 0, linkIdLength);
            //return textComponent.text.Substring(linkIdFirstCharacterIndex, linkIdLength);

        }
    }


    /// <summary>
    /// Structure containing information about the individual words contained in the text object.
    /// </summary>
    public struct TMP_WordInfo
    {
        // NOTE: Structure could be simplified by only including the firstCharacterIndex and length.

        public TMP_Text textComponent;

        public int firstCharacterIndex;
        public int lastCharacterIndex;
        public int characterCount;
        //public float length;

        /// <summary>
        /// Returns the word as a string.
        /// </summary>
        /// <returns></returns>
        public string GetWord()
        {
            string word = string.Empty;
            TMP_CharacterInfo[] charInfo = textComponent.textInfo.characterInfo;

            for (int i = firstCharacterIndex; i < lastCharacterIndex + 1; i++)
            {
                word += charInfo[i].character;
            }

            return word;
        }
    }


    public struct TMP_SpriteInfo
    {
        public int spriteIndex; // Index of the sprite in the sprite atlas.
        public int characterIndex; // The characterInfo index which holds the key information about this sprite.
        public int vertexIndex;
    }


    //public struct SpriteInfo
    //{
    //
    //}


    public struct Extents
    {
        internal static Extents zero = new Extents(Vector2.zero, Vector2.zero);
        internal static Extents uninitialized = new Extents(new Vector2(32767, 32767), new Vector2(-32767, -32767));

        public Vector2 min;
        public Vector2 max;

        public Extents(Vector2 min, Vector2 max)
        {
            this.min = min;
            this.max = max;
        }

        public override string ToString()
        {
            string s = "Min (" + min.x.ToString("f2") + ", " + min.y.ToString("f2") + ")   Max (" + max.x.ToString("f2") + ", " + max.y.ToString("f2") + ")";
            return s;
        }
    }


    [Serializable]
    public struct Mesh_Extents
    {
        public Vector2 min;
        public Vector2 max;


        public Mesh_Extents(Vector2 min, Vector2 max)
        {
            this.min = min;
            this.max = max;
        }

        public override string ToString()
        {
            string s = "Min (" + min.x.ToString("f2") + ", " + min.y.ToString("f2") + ")   Max (" + max.x.ToString("f2") + ", " + max.y.ToString("f2") + ")";
            //string s = "Center: (" + ")" + "  Extents: (" + ((max.x - min.x) / 2).ToString("f2") + "," + ((max.y - min.y) / 2).ToString("f2") + ").";
            return s;
        }
    }

    // internal struct TMP_TextProcessingState
    // {
    //         // Multi Font & Material support related
    //         public TMP_FontAsset CurrentFontAsset;
    //         public TMP_SpriteAsset CurrentSpriteAsset;
    //         public Material CurrentMaterial;
    //         public int CurrentMaterialIndex;
    //
    //         public float CurrentFontSize;
    //         public float FontScale;
    //         public float FontScaleMultiplier;
    //         public FontStyles FontStyle;
    //         public int ItalicAngle;
    //
    //         public float CharacterSpacing;
    //         public float CharacterMonoSpacing;
    //         public bool TagNoParsing;
    //
    //         public float HorizontalAdvance;
    //         public float MaxCapHeight;
    //         public float MaxTextAscender;
    //         public float MaxTextDescender;
    //         public float MaxElementAscender;
    //         public float MaxElementDescender;
    //         public float StartOfLineAscender;
    //         public float MaxLineAscender;
    //         public float MaxLineDescender;
    //         public float PageAscender;
    //
    //         public int PreviousWordBreak;
    //         public int TotalCharacterCount;
    //         //public int VisibleCharacterCount;
    //         //public int VisibleSpriteCount;
    //         public int VisibleLinkCount;
    //         public int FirstCharacterIndex;
    //         public int FirstVisibleCharacterIndex;
    //         public int LastCharacterIndex;
    //         public int LastVisibleCharIndex;
    //
    //         public int LineNumber;
    //         public float baselineOffset;
    //         public float lineOffset;
    //         public bool isDrivenLineSpacing;
    //         public bool IsNonBreakingSpace;
    //
    //         public HorizontalAlignmentOptions HorizontalAlignment;
    //         public float MarginLeft;
    //         public float MarginRight;
    //
    //         public float PreferredWidth;
    //         public float PreferredHeight;
    //
    //         public Color32 VertexColor;
    //         public Color32 UnderlineColor;
    //         public Color32 StrikethroughColor;
    //         //public Color32 HighlightColor;
    //
    //         public Extents MeshExtents;
    //         public TMP_LineInfo lineInfo;
    //
    //         public int spriteAnimationID;
    //
    //         public TMP_FontStyleStack BasicStyleStack;
    //         public TMP_RichTextTagStack<int> ItalicAngleStack;
    //         public TMP_RichTextTagStack<Color32> ColorStack;
    //         public TMP_RichTextTagStack<Color32> UnderlineColorStack;
    //         public TMP_RichTextTagStack<Color32> StrikethroughColorStack;
    //         public TMP_RichTextTagStack<Color32> HighlightColorStack;
    //         public TMP_RichTextTagStack<HighlightState> HighlightStateStack;
    //         public TMP_RichTextTagStack<TMP_ColorGradient> ColorGradientStack;
    //         public TMP_RichTextTagStack<float> SizeStack;
    //         public TMP_RichTextTagStack<float> IndentStack;
    //         public TMP_RichTextTagStack<FontWeight> FontWeightStack;
    //
    //         public TMP_RichTextTagStack<float> BaselineStack;
    //         //public TMP_RichTextTagStack<int> ActionStack;
    //         public TMP_RichTextTagStack<MaterialReference> MaterialReferenceStack;
    //         public TMP_RichTextTagStack<HorizontalAlignmentOptions> LineJustificationStack;
    // }


    // Structure used for Word Wrapping which tracks the state of execution when the last space or carriage return character was encountered.
    public struct WordWrapState
    {
        public int previous_WordBreak;
        public int total_CharacterCount;
        public int visible_CharacterCount;
        public int visible_SpriteCount;
        public int visible_LinkCount;
        public int firstCharacterIndex;
        public int firstVisibleCharacterIndex;
        public int lastCharacterIndex;
        public int lastVisibleCharIndex;
        public int lineNumber;

        public float maxCapHeight;
        public float maxAscender;
        public float maxDescender;
        public float startOfLineAscender;
        public float maxLineAscender;
        public float maxLineDescender;
        public float pageAscender;

        public HorizontalAlignmentOptions horizontalAlignment;
        public float marginLeft;
        public float marginRight;

        public float xAdvance;
        public float preferredWidth;
        public float preferredHeight;
        //public float maxFontScale;
        public float previousLineScale;

        public int wordCount;
        public FontStyles fontStyle;
        public int italicAngle;
        public float fontScale;
        public float fontScaleMultiplier;

        public float currentFontSize;
        public float baselineOffset;
        public float lineOffset;
        public bool isDrivenLineSpacing;
        public float glyphHorizontalAdvanceAdjustment;

        public float cSpace;
        public float mSpace;

        public TMP_TextInfo textInfo;
        public TMP_LineInfo lineInfo;

        public Color32 vertexColor;
        public Color32 underlineColor;
        public Color32 strikethroughColor;
        public Color32 highlightColor;
        public TMP_FontStyleStack basicStyleStack;
        public TMP_TextProcessingStack<int> italicAngleStack;
        public TMP_TextProcessingStack<Color32> colorStack;
        public TMP_TextProcessingStack<Color32> underlineColorStack;
        public TMP_TextProcessingStack<Color32> strikethroughColorStack;
        public TMP_TextProcessingStack<Color32> highlightColorStack;
        public TMP_TextProcessingStack<HighlightState> highlightStateStack;
        public TMP_TextProcessingStack<TMP_ColorGradient> colorGradientStack;
        public TMP_TextProcessingStack<float> sizeStack;
        public TMP_TextProcessingStack<float> indentStack;
        public TMP_TextProcessingStack<FontWeight> fontWeightStack;
        public TMP_TextProcessingStack<int> styleStack;
        public TMP_TextProcessingStack<float> baselineStack;
        public TMP_TextProcessingStack<int> actionStack;
        public TMP_TextProcessingStack<MaterialReference> materialReferenceStack;
        public TMP_TextProcessingStack<HorizontalAlignmentOptions> lineJustificationStack;
        public int spriteAnimationID;

        public TMP_FontAsset currentFontAsset;
        public TMP_SpriteAsset currentSpriteAsset;
        public Material currentMaterial;
        public int currentMaterialIndex;

        public Extents meshExtents;

        public bool tagNoParsing;
        public bool isNonBreakingSpace;
    }


    /// <summary>
    /// Structure used to store retrieve the name and hashcode of the font and material
    /// </summary>
    public struct TagAttribute
    {
        public int startIndex;
        public int length;
        public int hashCode;
    }


    public struct RichTextTagAttribute
    {
        public int nameHashCode;
        public int valueHashCode;
        public TagValueType valueType;
        public int valueStartIndex;
        public int valueLength;
        public TagUnitType unitType;
    }

}
