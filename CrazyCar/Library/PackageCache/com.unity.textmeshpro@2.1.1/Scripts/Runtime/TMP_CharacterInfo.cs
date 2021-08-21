using System.Diagnostics;
using UnityEngine;


namespace TMPro
{
    public struct TMP_Vertex
    {
        public Vector3 position;
        public Vector2 uv;
        public Vector2 uv2;
        public Vector2 uv4;
        public Color32 color;

        public static TMP_Vertex zero { get { return k_Zero; } }

        //public Vector3 normal;
        //public Vector4 tangent;

        static readonly TMP_Vertex k_Zero = new TMP_Vertex();
    }

    /// <summary>
    ///
    /// </summary>
    public struct TMP_Offset
    {
        public float left { get { return m_Left; } set { m_Left = value; } }

        public float right { get { return m_Right; } set { m_Right = value; } }

        public float top { get { return m_Top; } set { m_Top = value; } }

        public float bottom { get { return m_Bottom; } set { m_Bottom = value; } }

        public float horizontal { get { return m_Left; } set { m_Left = value; m_Right = value; } }

        public float vertical { get { return m_Top; } set { m_Top = value; m_Bottom = value; } }

        /// <summary>
        ///
        /// </summary>
        public static TMP_Offset zero { get { return k_ZeroOffset; } }

        // =============================================
        // Private backing fields for public properties.
        // =============================================

        float m_Left;
        float m_Right;
        float m_Top;
        float m_Bottom;

        static readonly TMP_Offset k_ZeroOffset = new TMP_Offset(0F, 0F, 0F, 0F);

        /// <summary>
        ///
        /// </summary>
        /// <param name="left"></param>
        /// <param name="right"></param>
        /// <param name="top"></param>
        /// <param name="bottom"></param>
        public TMP_Offset(float left, float right, float top, float bottom)
        {
            m_Left = left;
            m_Right = right;
            m_Top = top;
            m_Bottom = bottom;
        }

        /// <summary>
        ///
        /// </summary>
        /// <param name="horizontal"></param>
        /// <param name="vertical"></param>
        public TMP_Offset(float horizontal, float vertical)
        {
            m_Left = horizontal;
            m_Right = horizontal;
            m_Top = vertical;
            m_Bottom = vertical;
        }

        public static bool operator ==(TMP_Offset lhs, TMP_Offset rhs)
        {
            return lhs.m_Left == rhs.m_Left &&
                    lhs.m_Right == rhs.m_Right &&
                    lhs.m_Top == rhs.m_Top &&
                    lhs.m_Bottom == rhs.m_Bottom;
        }

        public static bool operator !=(TMP_Offset lhs, TMP_Offset rhs)
        {
            return !(lhs == rhs);
        }

        public static TMP_Offset operator *(TMP_Offset a, float b)
        {
            return new TMP_Offset(a.m_Left * b, a.m_Right * b, a.m_Top * b, a.m_Bottom * b);
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override bool Equals(object obj)
        {
            return base.Equals(obj);
        }

        public bool Equals(TMP_Offset other)
        {
            return base.Equals(other);
        }
    }


    /// <summary>
    ///
    /// </summary>
    public struct HighlightState
    {
        public Color32 color;
        public TMP_Offset padding;

        public HighlightState(Color32 color, TMP_Offset padding)
        {
            this.color = color;
            this.padding = padding;
        }

        public static bool operator ==(HighlightState lhs, HighlightState rhs)
        {
            return lhs.color.Compare(rhs.color) && lhs.padding == rhs.padding;
        }

        public static bool operator !=(HighlightState lhs, HighlightState rhs)
        {
            return !(lhs == rhs);
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override bool Equals(object obj)
        {
            return base.Equals(obj);
        }

        public bool Equals(HighlightState other)
        {
            return base.Equals(other);
        }
    }
    /// <summary>
    /// Structure containing information about individual text elements (character or sprites).
    /// </summary>
    [DebuggerDisplay("Unicode '{character}'  ({((uint)character).ToString(\"X\")})")]
    public struct TMP_CharacterInfo
    {
        public char character; // Should be changed to an uint to handle UTF32
        /// <summary>
        /// Index of the character in the raw string.
        /// </summary>
        public int index; // Index of the character in the input string.
        public int stringLength;
        public TMP_TextElementType elementType;

        public TMP_TextElement textElement;
        public TMP_FontAsset fontAsset;
        public TMP_SpriteAsset spriteAsset;
        public int spriteIndex;
        public Material material;
        public int materialReferenceIndex;
        public bool isUsingAlternateTypeface;

        public float pointSize;

        //public short wordNumber;
        public int lineNumber;
        //public short charNumber;
        public int pageNumber;


        public int vertexIndex;
        public TMP_Vertex vertex_BL;
        public TMP_Vertex vertex_TL;
        public TMP_Vertex vertex_TR;
        public TMP_Vertex vertex_BR;

        public Vector3 topLeft;
        public Vector3 bottomLeft;
        public Vector3 topRight;
        public Vector3 bottomRight;

        public float origin;
        public float xAdvance;
        public float ascender;
        public float baseLine;
        public float descender;
        internal float adjustedAscender;
        internal float adjustedDescender;

        public float aspectRatio;
        public float scale;
        public Color32 color;
        public Color32 underlineColor;
        public int underlineVertexIndex;
        public Color32 strikethroughColor;
        public int strikethroughVertexIndex;
        public Color32 highlightColor;
        public HighlightState highlightState;
        public FontStyles style;
        public bool isVisible;
        //public bool isIgnoringAlignment;
    }
}
