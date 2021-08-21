using System;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.TextCore;
using UnityEngine.TextCore.LowLevel;
using UnityEngine.Profiling;
using System.Collections.Generic;
using System.Linq;

#if UNITY_EDITOR
using UnityEditor.TextCore.LowLevel;
#endif


namespace TMPro
{
    public enum AtlasPopulationMode
    {
        Static = 0x0,
        Dynamic = 0x1,
    }


    [Serializable][ExcludeFromPresetAttribute]
    public class TMP_FontAsset : TMP_Asset
    {
        /// <summary>
        /// The version of the font asset class.
        /// Version 1.1.0 adds support for the new TextCore.FontEngine and Dynamic SDF system.
        /// </summary>
        public string version
        {
            get { return m_Version; }
            internal set { m_Version = value; }
        }
        [SerializeField]
        private string m_Version;

        /// <summary>
        /// This field is set when the font asset is first created.
        /// </summary>
        [SerializeField]
        internal string m_SourceFontFileGUID;

        #if UNITY_EDITOR
        /// <summary>
        /// Persistent reference to the source font file maintained in the editor.
        /// </summary>
        [SerializeField]
        internal Font m_SourceFontFile_EditorRef;
        #endif

        /// <summary>
        /// Source font file when atlas population mode is set to dynamic. Null when the atlas population mode is set to static.
        /// </summary>
        public Font sourceFontFile
        {
            get { return m_SourceFontFile; }
            internal set { m_SourceFontFile = value; }
        }
        [SerializeField]
        private Font m_SourceFontFile;

        public AtlasPopulationMode atlasPopulationMode
        {
            get { return m_AtlasPopulationMode; }

            set
            {
                m_AtlasPopulationMode = value;

                #if UNITY_EDITOR
                if (m_AtlasPopulationMode == AtlasPopulationMode.Static)
                    m_SourceFontFile = null;
                else if (m_AtlasPopulationMode == AtlasPopulationMode.Dynamic)
                    m_SourceFontFile = m_SourceFontFile_EditorRef;
                #endif
            }
        }
        [SerializeField]
        private AtlasPopulationMode m_AtlasPopulationMode;


        /// <summary>
        /// Information about the font's face.
        /// </summary>
        public FaceInfo faceInfo
        {
            get { return m_FaceInfo; }
            set { m_FaceInfo = value; }
        }
        [SerializeField]
        internal FaceInfo m_FaceInfo;


        /// <summary>
        /// List of glyphs contained in the font asset.
        /// </summary>
        public List<Glyph> glyphTable
        {
            get { return m_GlyphTable; }
            internal set { m_GlyphTable = value; }
        }
        [SerializeField]
        internal List<Glyph> m_GlyphTable = new List<Glyph>();

        /// <summary>
        /// Dictionary used to lookup glyphs contained in the font asset by their index.
        /// </summary>
        public Dictionary<uint, Glyph> glyphLookupTable
        {
            get
            {
                if (m_GlyphLookupDictionary == null)
                    ReadFontAssetDefinition();

                return m_GlyphLookupDictionary;
            }
        }
        internal Dictionary<uint, Glyph> m_GlyphLookupDictionary;


        /// <summary>
        /// List containing the characters of the given font asset.
        /// </summary>
        public List<TMP_Character> characterTable
        {
            get { return m_CharacterTable; }
            internal set { m_CharacterTable = value; }
        }
        [SerializeField]
        internal List<TMP_Character> m_CharacterTable = new List<TMP_Character>();

        /// <summary>
        /// Dictionary used to lookup characters contained in the font asset by their unicode values.
        /// </summary>
        public Dictionary<uint, TMP_Character> characterLookupTable
        {
            get
            {
                if (m_CharacterLookupDictionary == null)
                    ReadFontAssetDefinition();


                return m_CharacterLookupDictionary;
            }
        }
        internal Dictionary<uint, TMP_Character> m_CharacterLookupDictionary;


        /// <summary>
        /// Determines if the font asset is using a shared atlas texture(s)
        /// </summary>
        //public bool isUsingDynamicTextures
        //{
        //    get { return m_IsUsingDynamicTextures; }
        //    set { m_IsUsingDynamicTextures = value; }
        //}
        //[SerializeField]
        //private bool m_IsUsingDynamicTextures;

        /// <summary>
        /// The font atlas used by this font asset.
        /// This is always the texture at index [0] of the fontAtlasTextures.
        /// </summary>
        public Texture2D atlasTexture
        {
            get
            {
                if (m_AtlasTexture == null)
                {
                    m_AtlasTexture = atlasTextures[0];
                }

                return m_AtlasTexture;
            }
        }
        internal Texture2D m_AtlasTexture;

        /// <summary>
        /// Array of atlas textures that contain the glyphs used by this font asset.
        /// </summary>
        public Texture2D[] atlasTextures
        {
            get
            {
                if (m_AtlasTextures == null)
                {
                    //
                }

                //if (m_IsUsingDynamicTextures)
                //    return TMP_DynamicAtlasTextureGroup.managedDynamicTextures;

                return m_AtlasTextures;
            }

            set
            {
                m_AtlasTextures = value;
            }
        }
        [SerializeField]
        internal Texture2D[] m_AtlasTextures;

        /// <summary>
        /// Index of the font atlas texture that still has available space to add new glyphs.
        /// </summary>
        [SerializeField]
        internal int m_AtlasTextureIndex;

        /// <summary>
        /// Number of atlas textures used by this font asset.
        /// </summary>
        public int atlasTextureCount { get { return m_AtlasTextureIndex + 1; } }

        /// <summary>
        ///
        /// </summary>
        public bool isMultiAtlasTexturesEnabled
        {
            get { return m_IsMultiAtlasTexturesEnabled; }
            set { m_IsMultiAtlasTexturesEnabled = value; }
        }

        [SerializeField]
        private bool m_IsMultiAtlasTexturesEnabled;

        /// <summary>
        /// List of spaces occupied by glyphs in a given texture.
        /// </summary>
        internal List<GlyphRect> usedGlyphRects
        {
            get { return m_UsedGlyphRects; }
            set { m_UsedGlyphRects = value; }
        }
        [SerializeField]
        private List<GlyphRect> m_UsedGlyphRects;

        /// <summary>
        /// List of spaces available in a given texture to add new glyphs.
        /// </summary>
        internal List<GlyphRect> freeGlyphRects
        {
            get { return m_FreeGlyphRects; }
            set { m_FreeGlyphRects = value; }
        }
        [SerializeField]
        private List<GlyphRect> m_FreeGlyphRects;

        /// <summary>
        /// The general information about the font.
        /// This property and FaceInfo_Legacy type are no longer used in version 1.1.0 of the font asset.
        /// </summary>
		[Obsolete("The fontInfo property and underlying type is now obsolete. Please use the faceInfo property and FaceInfo type instead.")]
        public FaceInfo_Legacy fontInfo
        {
            get { return m_fontInfo; }
        }

        [SerializeField]
        private FaceInfo_Legacy m_fontInfo = null;

        /// <summary>
        ///
        /// </summary>
        [SerializeField]
        public Texture2D atlas; // Should add a property to make this read-only.

        /// <summary>
        /// The width of the atlas texture(s) used by this font asset.
        /// </summary>
        public int atlasWidth
        {
            get { return m_AtlasWidth; }
            internal set { m_AtlasWidth = value; }
        }
        [SerializeField]
        internal int m_AtlasWidth;

        /// <summary>
        /// The height of the atlas texture(s) used by this font asset.
        /// </summary>
        public int atlasHeight
        {
            get { return m_AtlasHeight; }
            internal set { m_AtlasHeight = value; }
        }
        [SerializeField]
        internal int m_AtlasHeight;

        /// <summary>
        /// The padding used between glyphs contained in the atlas texture(s) used by this font asset.
        /// </summary>
        public int atlasPadding
        {
            get { return m_AtlasPadding; }
            internal set { m_AtlasPadding = value; }
        }
        [SerializeField]
        internal int m_AtlasPadding;

        public GlyphRenderMode atlasRenderMode
        {
            get { return m_AtlasRenderMode; }
            internal set { m_AtlasRenderMode = value; }
        }
        [SerializeField]
        internal GlyphRenderMode m_AtlasRenderMode;

        // Legacy field that will eventually be removed.
        [SerializeField]
        internal List<TMP_Glyph> m_glyphInfoList;

        [SerializeField]
        [FormerlySerializedAs("m_kerningInfo")]
        internal KerningTable m_KerningTable = new KerningTable();

        /// <summary>
        /// Table containing the various font features of this font asset.
        /// </summary>
        public TMP_FontFeatureTable fontFeatureTable
        {
            get { return m_FontFeatureTable; }
            internal set { m_FontFeatureTable = value; }
        }
        [SerializeField]
        internal TMP_FontFeatureTable m_FontFeatureTable = new TMP_FontFeatureTable();

        // Legacy field that will eventually be removed
        [SerializeField]
        #pragma warning disable 0649
        private List<TMP_FontAsset> fallbackFontAssets;

        /// <summary>
        /// List containing the Fallback font assets for this font.
        /// </summary>
        public List<TMP_FontAsset> fallbackFontAssetTable
        {
            get { return m_FallbackFontAssetTable; }
            set { m_FallbackFontAssetTable = value; }
        }
        [SerializeField]
        internal List<TMP_FontAsset> m_FallbackFontAssetTable;

        /// <summary>
        /// The settings used in the Font Asset Creator when this font asset was created or edited.
        /// </summary>
        public FontAssetCreationSettings creationSettings
        {
            get { return m_CreationSettings; }
            set { m_CreationSettings = value; }
        }
        [SerializeField]
        internal FontAssetCreationSettings m_CreationSettings;

        /// <summary>
        /// Array containing font assets to be used as alternative typefaces for the various potential font weights of this font asset.
        /// </summary>
        public TMP_FontWeightPair[] fontWeightTable
        {
            get { return m_FontWeightTable; }
            internal set { m_FontWeightTable = value; }
        }
        [SerializeField]
        private TMP_FontWeightPair[] m_FontWeightTable = new TMP_FontWeightPair[10];

        // FONT WEIGHTS
        /// <summary>
        /// Font weights used by font asset prior to version 1.1.0.
        /// This is legacy and will be removed at some point in the future.
        /// </summary>
        [SerializeField]
        private TMP_FontWeightPair[] fontWeights = null;

        //private int[] m_characterSet; // Array containing all the characters in this font asset.

        /// <summary>
        /// Defines the dilation of the text when using regular style.
        /// </summary>
        public float normalStyle = 0;

        /// <summary>
        /// The spacing between characters when using regular style.
        /// </summary>
        public float normalSpacingOffset = 0;

        /// <summary>
        /// Defines the dilation of the text when using bold style.
        /// </summary>
        public float boldStyle = 0.75f;

        /// <summary>
        /// The spacing between characters when using regular style.
        /// </summary>
        public float boldSpacing = 7f;

        /// <summary>
        /// Defines the slant of the text when using italic style.
        /// </summary>
        public byte italicStyle = 35;

        public byte tabSize = 10;

        internal bool IsFontAssetLookupTablesDirty;

        /// <summary>
        /// Create new instance of a font asset using default settings.
        /// </summary>
        /// <param name="font"></param>
        /// <returns></returns>
        public static TMP_FontAsset CreateFontAsset(Font font)
        {
            return CreateFontAsset(font, 90, 9, GlyphRenderMode.SDFAA, 1024, 1024, AtlasPopulationMode.Dynamic);
        }

        /// <summary>
        /// Create new instance of a font asset.
        /// </summary>
        /// <param name="font">The source font file.</param>
        /// <param name="samplingPointSize">The sampling point size.</param>
        /// <param name="atlasPadding">The padding / spread between individual glyphs in the font asset.</param>
        /// <param name="renderMode"></param>
        /// <param name="atlasWidth">The atlas texture width.</param>
        /// <param name="atlasHeight">The atlas texture height.</param>
        /// <param name="atlasPopulationMode"></param>
        /// <returns></returns>
        public static TMP_FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
        {
            // Initialize FontEngine
            FontEngine.InitializeFontEngine();

            // Load Font Face
            if (FontEngine.LoadFontFace(font, samplingPointSize) != FontEngineError.Success)
            {
                Debug.LogWarning("Unable to load font face for [" + font.name + "]. Make sure \"Include Font Data\" is enabled in the Font Import Settings.", font);
                return null;
            }

            // Create new font asset
            TMP_FontAsset fontAsset = ScriptableObject.CreateInstance<TMP_FontAsset>();

            fontAsset.m_Version = "1.1.0";
            fontAsset.faceInfo = FontEngine.GetFaceInfo();

            // Set font reference and GUID
            if (atlasPopulationMode == AtlasPopulationMode.Dynamic)
                fontAsset.sourceFontFile = font;

            // Set persistent reference to source font file in the Editor only.
            #if UNITY_EDITOR
            string guid;
            long localID;

            UnityEditor.AssetDatabase.TryGetGUIDAndLocalFileIdentifier(font, out guid, out localID);
            fontAsset.m_SourceFontFileGUID = guid;
            fontAsset.m_SourceFontFile_EditorRef = font;
            #endif

            fontAsset.atlasPopulationMode = atlasPopulationMode;

            fontAsset.atlasWidth = atlasWidth;
            fontAsset.atlasHeight = atlasHeight;
            fontAsset.atlasPadding = atlasPadding;
            fontAsset.atlasRenderMode = renderMode;

            // Initialize array for the font atlas textures.
            fontAsset.atlasTextures = new Texture2D[1];

            // Create and add font atlas texture.
            Texture2D texture = new Texture2D(0, 0, TextureFormat.Alpha8, false);

            //texture.name = assetName + " Atlas";
            fontAsset.atlasTextures[0] = texture;

            fontAsset.isMultiAtlasTexturesEnabled = enableMultiAtlasSupport;

            // Add free rectangle of the size of the texture.
            int packingModifier;
            if (((GlyphRasterModes)renderMode & GlyphRasterModes.RASTER_MODE_BITMAP) == GlyphRasterModes.RASTER_MODE_BITMAP)
            {
                packingModifier = 0;

                // Optimize by adding static ref to shader.
                Material tmp_material = new Material(ShaderUtilities.ShaderRef_MobileBitmap);

                //tmp_material.name = texture.name + " Material";
                tmp_material.SetTexture(ShaderUtilities.ID_MainTex, texture);
                tmp_material.SetFloat(ShaderUtilities.ID_TextureWidth, atlasWidth);
                tmp_material.SetFloat(ShaderUtilities.ID_TextureHeight, atlasHeight);

                fontAsset.material = tmp_material;
            }
            else
            {
                packingModifier = 1;

                // Optimize by adding static ref to shader.
                Material tmp_material = new Material(ShaderUtilities.ShaderRef_MobileSDF);

                //tmp_material.name = texture.name + " Material";
                tmp_material.SetTexture(ShaderUtilities.ID_MainTex, texture);
                tmp_material.SetFloat(ShaderUtilities.ID_TextureWidth, atlasWidth);
                tmp_material.SetFloat(ShaderUtilities.ID_TextureHeight, atlasHeight);

                tmp_material.SetFloat(ShaderUtilities.ID_GradientScale, atlasPadding + packingModifier);

                tmp_material.SetFloat(ShaderUtilities.ID_WeightNormal, fontAsset.normalStyle);
                tmp_material.SetFloat(ShaderUtilities.ID_WeightBold, fontAsset.boldStyle);

                fontAsset.material = tmp_material;
            }

            fontAsset.freeGlyphRects = new List<GlyphRect>(8) { new GlyphRect(0, 0, atlasWidth - packingModifier, atlasHeight - packingModifier) };
            fontAsset.usedGlyphRects = new List<GlyphRect>(8);

            // TODO: Consider adding support for extracting glyph positioning data

            fontAsset.ReadFontAssetDefinition();

            return fontAsset;
        }


        void Awake()
        {
            // Check version number of font asset to see if it needs to be upgraded.
            if (this.material != null && string.IsNullOrEmpty(m_Version))
                UpgradeFontAsset();
        }

        #if UNITY_EDITOR
        private void OnValidate()
        {
            // Make sure our lookup dictionary have been initialized.
            if (m_CharacterLookupDictionary == null || m_GlyphLookupDictionary == null)
                ReadFontAssetDefinition();
        }
        #endif

        private static string s_DefaultMaterialSuffix = " Atlas Material";

        public void ReadFontAssetDefinition()
        {
            Profiler.BeginSample("TMP.ReadFontAssetDefinition");

            //Debug.Log("Reading Font Asset Definition for " + this.name + ".");

            // Check version number of font asset to see if it needs to be upgraded.
            if (this.material != null && string.IsNullOrEmpty(m_Version))
                UpgradeFontAsset();

            // Initialize lookup tables for characters and glyphs.
            InitializeDictionaryLookupTables();

            // Add synthesized characters and adjust face metrics
            AddSynthesizedCharactersAndFaceMetrics();

            // Adjust Font Scale for compatibility reasons
            if (m_FaceInfo.scale == 0)
                m_FaceInfo.scale = 1.0f;

            // Set Strikethrough Offset (if needed)
            if (m_FaceInfo.strikethroughOffset == 0)
                m_FaceInfo.strikethroughOffset = m_FaceInfo.capLine / 2.5f;

            // Set Padding value for legacy font assets.
            if (m_AtlasPadding == 0)
            {
                if (material.HasProperty(ShaderUtilities.ID_GradientScale))
                    m_AtlasPadding = (int)material.GetFloat(ShaderUtilities.ID_GradientScale) - 1;
            }

            // Compute Hashcode for the font asset name
            hashCode = TMP_TextUtilities.GetSimpleHashCode(this.name);

            // Compute Hashcode for the material name
            materialHashCode = TMP_TextUtilities.GetSimpleHashCode(this.name + s_DefaultMaterialSuffix);

            // Add reference to font asset in TMP Resource Manager
            //TMP_ResourceManager.AddFontAsset(this);

            IsFontAssetLookupTablesDirty = false;

            Profiler.EndSample();
        }


        /// <summary>
        /// Read the various data tables of the font asset to populate its different dictionaries to allow for faster lookup of related font asset data.
        /// </summary>
        internal void InitializeDictionaryLookupTables()
        {
            // Initialize and populate glyph lookup dictionary
            InitializeGlyphLookupDictionary();

            // Initialize and populate character lookup dictionary
            InitializeCharacterLookupDictionary();

            // Initialize and populate character lookup dictionary
            InitializeGlyphPaidAdjustmentRecordsLookupDictionary();
        }

        internal void InitializeGlyphLookupDictionary()
        {
            // Create new instance of the glyph lookup dictionary or clear the existing one.
            if (m_GlyphLookupDictionary == null)
                m_GlyphLookupDictionary = new Dictionary<uint, Glyph>();
            else
                m_GlyphLookupDictionary.Clear();

            // Initialize or clear list of glyph indexes.
            if (m_GlyphIndexList == null)
                m_GlyphIndexList = new List<uint>();
            else
                m_GlyphIndexList.Clear();

            // Initialize or clear list of glyph indexes.
            if (m_GlyphIndexListNewlyAdded == null)
                m_GlyphIndexListNewlyAdded = new List<uint>();
            else
                m_GlyphIndexListNewlyAdded.Clear();

            //
            int glyphCount = m_GlyphTable.Count;

            // Add glyphs contained in the glyph table to dictionary for faster lookup.
            for (int i = 0; i < glyphCount; i++)
            {
                Glyph glyph = m_GlyphTable[i];

                uint index = glyph.index;

                // TODO: Not sure it is necessary to check here.
                if (m_GlyphLookupDictionary.ContainsKey(index) == false)
                {
                    m_GlyphLookupDictionary.Add(index, glyph);
                    m_GlyphIndexList.Add(index);
                }
            }
        }

        internal void InitializeCharacterLookupDictionary()
        {
            // Create new instance of the character lookup dictionary or clear the existing one.
            if (m_CharacterLookupDictionary == null)
                m_CharacterLookupDictionary = new Dictionary<uint, TMP_Character>();
            else
                m_CharacterLookupDictionary.Clear();

            // Add the characters contained in the character table to the dictionary for faster lookup.
            for (int i = 0; i < m_CharacterTable.Count; i++)
            {
                TMP_Character character = m_CharacterTable[i];

                uint unicode = character.unicode;
                uint glyphIndex = character.glyphIndex;

                // Add character along with reference to text asset and glyph
                if (m_CharacterLookupDictionary.ContainsKey(unicode) == false)
                {
                    m_CharacterLookupDictionary.Add(unicode, character);
                    character.textAsset = this;
                    character.glyph = m_GlyphLookupDictionary[glyphIndex];
                }
            }

            // Clear internal fallback references
            if (FallbackSearchQueryLookup == null)
                FallbackSearchQueryLookup = new HashSet<int>();
            else
                FallbackSearchQueryLookup.Clear();
        }

        internal void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
        {
            // Upgrade Glyph Adjustment Table to the new Font Feature table and Glyph Pair Adjustment Records
            if (m_KerningTable != null && m_KerningTable.kerningPairs != null && m_KerningTable.kerningPairs.Count > 0)
                UpgradeGlyphAdjustmentTableToFontFeatureTable();

            // Read Font Features which will include kerning data.
            if (m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary == null)
                m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary = new Dictionary<uint, TMP_GlyphPairAdjustmentRecord>();
            else
                m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.Clear();

            List<TMP_GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords = m_FontFeatureTable.m_GlyphPairAdjustmentRecords;
            if (glyphPairAdjustmentRecords != null)
            {
                for (int i = 0; i < glyphPairAdjustmentRecords.Count; i++)
                {
                    TMP_GlyphPairAdjustmentRecord record = glyphPairAdjustmentRecords[i];

                    uint key = new GlyphPairKey(record).key;

                    if (!m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.ContainsKey(key))
                        m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.Add(key, record);
                }
            }
        }

        internal void AddSynthesizedCharactersAndFaceMetrics()
        {
            Profiler.BeginSample("TMP.AddSynthesizedCharacters");

            if (m_AtlasPopulationMode == AtlasPopulationMode.Dynamic)
                FontEngine.LoadFontFace(sourceFontFile, m_FaceInfo.pointSize);

            // Only characters not present in the source font file will be synthesized.

            // Non visible and control characters with no metrics
            // Add End of Text \u0003
            AddSynthesizedCharacter(0x03, true);

            // Add Tab \u0009
            AddSynthesizedCharacter(0x09, true);

            // Add Line Feed (LF) \u000A
            AddSynthesizedCharacter(0x0A);

            // Add Vertical Tab (VT) \u000B
            AddSynthesizedCharacter(0x0B);

            // Add Carriage Return (CR) \u000D
            AddSynthesizedCharacter(0x0D);

            // Add Arabic Letter Mark \u061C
            AddSynthesizedCharacter(0x061C);

            // Add Zero Width Space <ZWSP> \u2000B
            AddSynthesizedCharacter(0x200B);

            // Add Left-To-Right Mark \u200E
            AddSynthesizedCharacter(0x200E);

            // Add Right-To-Left Mark \u200F
            AddSynthesizedCharacter(0x200F);

            // Add Line Separator \u2028
            AddSynthesizedCharacter(0x2028);

            // Add Paragraph Separator \u2029
            AddSynthesizedCharacter(0x2029);

            // Add Word Joiner <WJ> / Zero Width Non-Breaking Space \u2060
            AddSynthesizedCharacter(0x2060);

            // Set Cap Line using the capital letter 'X'
            if (m_FaceInfo.capLine == 0 && m_CharacterLookupDictionary.ContainsKey('X'))
            {
                uint glyphIndex = m_CharacterLookupDictionary['X'].glyphIndex;
                m_FaceInfo.capLine = m_GlyphLookupDictionary[glyphIndex].metrics.horizontalBearingY;
            }

            // Set Mean Line using the lowercase letter 'x'
            if (m_FaceInfo.meanLine == 0 && m_CharacterLookupDictionary.ContainsKey('x'))
            {
                uint glyphIndex = m_CharacterLookupDictionary['x'].glyphIndex;
                m_FaceInfo.meanLine = m_GlyphLookupDictionary[glyphIndex].metrics.horizontalBearingY;
            }

            Profiler.EndSample();
        }

        void AddSynthesizedCharacter(uint unicode, bool addImmediately = false)
        {
            // Check if unicode is already present in the font asset
            if (m_CharacterLookupDictionary.ContainsKey(unicode))
                return;

            Glyph glyph;

            if (m_AtlasPopulationMode == AtlasPopulationMode.Dynamic)
            {
                // Check if unicode is present in font file
                if (FontEngine.GetGlyphIndex(unicode) != 0)
                {
                    if (addImmediately == false)
                        return;

                    //Debug.Log("Adding Unicode [" + unicode.ToString("X4") + "].");

                    GlyphLoadFlags glyphLoadFlags = ((GlyphRasterModes)m_AtlasRenderMode & GlyphRasterModes.RASTER_MODE_NO_HINTING) == GlyphRasterModes.RASTER_MODE_NO_HINTING
                        ? GlyphLoadFlags.LOAD_NO_BITMAP | GlyphLoadFlags.LOAD_NO_HINTING
                        : GlyphLoadFlags.LOAD_NO_BITMAP;

                    if (FontEngine.TryGetGlyphWithUnicodeValue(unicode, glyphLoadFlags, out glyph))
                        m_CharacterLookupDictionary.Add(unicode, new TMP_Character(unicode, this, glyph));

                    return;
                }
            }

            //Debug.Log("Synthesizing Unicode [" + unicode.ToString("X4") + "].");

            // Synthesize and add missing glyph and character
            glyph = new Glyph(0, new GlyphMetrics(0, 0, 0, 0, 0), GlyphRect.zero, 1.0f, 0);
            m_CharacterLookupDictionary.Add(unicode, new TMP_Character(unicode, this, glyph));
        }

        internal HashSet<int> FallbackSearchQueryLookup = new HashSet<int>();

        internal void AddCharacterToLookupCache(uint unicode, TMP_Character character)
        {
            m_CharacterLookupDictionary.Add(unicode, character);

            // Add font asset to fallback references.
            FallbackSearchQueryLookup.Add(character.textAsset.instanceID);
        }

        /// <summary>
        /// Sort the Character table by Unicode values.
        /// </summary>
        internal void SortCharacterTable()
        {
            if (m_CharacterTable != null && m_CharacterTable.Count > 0)
                m_CharacterTable = m_CharacterTable.OrderBy(c => c.unicode).ToList();
        }

        /// <summary>
        /// Sort the Glyph table by index values.
        /// </summary>
        internal void SortGlyphTable()
        {
            if (m_GlyphTable != null && m_GlyphTable.Count > 0)
                m_GlyphTable = m_GlyphTable.OrderBy(c => c.index).ToList();
        }

        internal void SortFontFeatureTable()
        {
            m_FontFeatureTable.SortGlyphPairAdjustmentRecords();
        }

        /// <summary>
        /// Sort both glyph and character tables.
        /// </summary>
        internal void SortAllTables()
        {
            SortGlyphTable();
            SortCharacterTable();
            SortFontFeatureTable();
        }

        /// <summary>
        /// HashSet of font asset instance ID used in the process of searching for through fallback font assets for a given character or characters.
        /// </summary>
        private static HashSet<int> k_SearchedFontAssetLookup;

        /// <summary>
        /// Function to check if a certain character exists in the font asset.
        /// </summary>
        /// <param name="character"></param>
        /// <returns></returns>
        public bool HasCharacter(int character)
        {
            if (m_CharacterLookupDictionary == null)
                return false;

            if (m_CharacterLookupDictionary.ContainsKey((uint)character))
                return true;

            return false;
        }

        /// <summary>
        /// Function to check if a character is contained in the font asset with the option to also check through fallback font assets.
        /// </summary>
        /// <param name="character"></param>
        /// <param name="searchFallbacks"></param>
        /// <param name="tryAddCharacter"></param>
        /// <returns></returns>
        public bool HasCharacter(char character, bool searchFallbacks = false, bool tryAddCharacter = false)
        {
            // Read font asset definition if it hasn't already been done.
            if (m_CharacterLookupDictionary == null)
            {
                ReadFontAssetDefinition();

                if (m_CharacterLookupDictionary == null)
                    return false;
            }

            // Check font asset
            if (m_CharacterLookupDictionary.ContainsKey(character))
                return true;

            // Check if font asset is dynamic and if so try to add the requested character to it.
            if (tryAddCharacter && m_AtlasPopulationMode == AtlasPopulationMode.Dynamic)
            {
                TMP_Character returnedCharacter;

                if (TryAddCharacterInternal(character, out returnedCharacter))
                    return true;
            }

            if (searchFallbacks)
            {
                // Initialize or clear font asset lookup
                if (k_SearchedFontAssetLookup == null)
                    k_SearchedFontAssetLookup = new HashSet<int>();
                else
                    k_SearchedFontAssetLookup.Clear();

                // Add current font asset to lookup
                k_SearchedFontAssetLookup.Add(GetInstanceID());

                // Check font asset fallbacks
                if (fallbackFontAssetTable != null && fallbackFontAssetTable.Count > 0)
                {
                    for (int i = 0; i < fallbackFontAssetTable.Count && fallbackFontAssetTable[i] != null; i++)
                    {
                        TMP_FontAsset fallback = fallbackFontAssetTable[i];
                        int fallbackID = fallback.GetInstanceID();

                        // Search fallback if not already contained in lookup
                        if (k_SearchedFontAssetLookup.Add(fallbackID))
                        {
                            if (fallback.HasCharacter_Internal(character, true, tryAddCharacter))
                                return true;
                        }
                    }
                }

                // Check general fallback font assets.
                if (TMP_Settings.fallbackFontAssets != null && TMP_Settings.fallbackFontAssets.Count > 0)
                {
                    for (int i = 0; i < TMP_Settings.fallbackFontAssets.Count && TMP_Settings.fallbackFontAssets[i] != null; i++)
                    {
                        TMP_FontAsset fallback = TMP_Settings.fallbackFontAssets[i];
                        int fallbackID = fallback.GetInstanceID();

                        // Search fallback if not already contained in lookup
                        if (k_SearchedFontAssetLookup.Add(fallbackID))
                        {
                            if (fallback.HasCharacter_Internal(character, true, tryAddCharacter))
                                return true;
                        }
                    }
                }

                // Check TMP Settings Default Font Asset
                if (TMP_Settings.defaultFontAsset != null)
                {
                    TMP_FontAsset fallback = TMP_Settings.defaultFontAsset;
                    int fallbackID = fallback.GetInstanceID();

                    // Search fallback if it has not already been searched
                    if (k_SearchedFontAssetLookup.Add(fallbackID))
                    {
                        if (fallback.HasCharacter_Internal(character, true, tryAddCharacter))
                            return true;
                    }
                }
            }

            return false;
        }


        /// <summary>
        /// Function to check if a character is contained in a font asset with the option to also check through fallback font assets.
        /// This private implementation does not search the fallback font asset in the TMP Settings file.
        /// </summary>
        /// <param name="character"></param>
        /// <param name="searchFallbacks"></param>
        /// <param name="tryAddCharacter"></param>
        /// <returns></returns>
        bool HasCharacter_Internal(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
        {
            // Read font asset definition if it hasn't already been done.
            if (m_CharacterLookupDictionary == null)
            {
                ReadFontAssetDefinition();

                if (m_CharacterLookupDictionary == null)
                    return false;
            }

            // Check font asset
            if (m_CharacterLookupDictionary.ContainsKey(character))
                return true;

            // Check if fallback is dynamic and if so try to add the requested character to it.
            if (tryAddCharacter && atlasPopulationMode == AtlasPopulationMode.Dynamic)
            {
                TMP_Character returnedCharacter;

                if (TryAddCharacterInternal(character, out returnedCharacter))
                    return true;
            }

            if (searchFallbacks)
            {
                // Check Font Asset Fallback fonts.
                if (fallbackFontAssetTable == null || fallbackFontAssetTable.Count == 0)
                    return false;

                for (int i = 0; i < fallbackFontAssetTable.Count && fallbackFontAssetTable[i] != null; i++)
                {
                    TMP_FontAsset fallback = fallbackFontAssetTable[i];
                    int fallbackID = fallback.GetInstanceID();

                    // Search fallback if it has not already been searched
                    if (k_SearchedFontAssetLookup.Add(fallbackID))
                    {
                        if (fallback.HasCharacter_Internal(character, true, tryAddCharacter))
                            return true;
                    }
                }
            }

            return false;
        }


        /// <summary>
        /// Function to check if certain characters exists in the font asset. Function returns a list of missing characters.
        /// </summary>
        /// <param name="character"></param>
        /// <param name="missingCharacters"></param>
        /// <returns></returns>
        public bool HasCharacters(string text, out List<char> missingCharacters)
        {
            if (m_CharacterLookupDictionary == null)
            {
                missingCharacters = null;
                return false;
            }

            missingCharacters = new List<char>();

            for (int i = 0; i < text.Length; i++)
            {
                if (!m_CharacterLookupDictionary.ContainsKey(text[i]))
                    missingCharacters.Add(text[i]);
            }

            if (missingCharacters.Count == 0)
                return true;

            return false;
        }

        /// <summary>
        ///
        /// </summary>
        /// <param name="text"></param>
        /// <param name="missingCharacters"></param>
        /// <param name="searchFallbacks"></param>
        /// <param name="tryAddCharacter"></param>
        /// <returns></returns>
        public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = false, bool tryAddCharacter = false)
        {
            missingCharacters = null;

            // Read font asset definition if it hasn't already been done.
            if (m_CharacterLookupDictionary == null)
            {
                ReadFontAssetDefinition();

                if (m_CharacterLookupDictionary == null)
                    return false;
            }

            // Clear internal list of
            s_MissingCharacterList.Clear();

            for (int i = 0; i < text.Length; i++)
            {
                bool isMissingCharacter = true;
                uint character = text[i];

                if (m_CharacterLookupDictionary.ContainsKey(character))
                    continue;

                // Check if fallback is dynamic and if so try to add the requested character to it.
                if (tryAddCharacter && atlasPopulationMode == AtlasPopulationMode.Dynamic)
                {
                    TMP_Character returnedCharacter;

                    if (TryAddCharacterInternal(character, out returnedCharacter))
                        continue;
                }

                if (searchFallbacks)
                {
                    // Initialize or clear font asset lookup
                    if (k_SearchedFontAssetLookup == null)
                        k_SearchedFontAssetLookup = new HashSet<int>();
                    else
                        k_SearchedFontAssetLookup.Clear();

                    // Add current font asset to lookup
                    k_SearchedFontAssetLookup.Add(GetInstanceID());

                    // Check font asset fallbacks
                    if (fallbackFontAssetTable != null && fallbackFontAssetTable.Count > 0)
                    {
                        for (int j = 0; j < fallbackFontAssetTable.Count && fallbackFontAssetTable[j] != null; j++)
                        {
                            TMP_FontAsset fallback = fallbackFontAssetTable[j];
                            int fallbackID = fallback.GetInstanceID();

                            // Search fallback if it has not already been searched
                            if (k_SearchedFontAssetLookup.Add(fallbackID))
                            {
                                if (fallback.HasCharacter_Internal(character, true, tryAddCharacter) == false)
                                    continue;

                                isMissingCharacter = false;
                                break;
                            }
                        }
                    }

                    // Check general fallback font assets.
                    if (isMissingCharacter && TMP_Settings.fallbackFontAssets != null && TMP_Settings.fallbackFontAssets.Count > 0)
                    {
                        for (int j = 0; j < TMP_Settings.fallbackFontAssets.Count && TMP_Settings.fallbackFontAssets[j] != null; j++)
                        {
                            TMP_FontAsset fallback = TMP_Settings.fallbackFontAssets[j];
                            int fallbackID = fallback.GetInstanceID();

                            // Search fallback if it has not already been searched
                            if (k_SearchedFontAssetLookup.Add(fallbackID))
                            {
                                if (fallback.HasCharacter_Internal(character, true, tryAddCharacter) == false)
                                    continue;

                                isMissingCharacter = false;
                                break;
                            }
                        }
                    }

                    // Check TMP Settings Default Font Asset
                    if (isMissingCharacter && TMP_Settings.defaultFontAsset != null)
                    {
                        TMP_FontAsset fallback = TMP_Settings.defaultFontAsset;
                        int fallbackID = fallback.GetInstanceID();

                        // Search fallback if it has not already been searched
                        if (k_SearchedFontAssetLookup.Add(fallbackID))
                        {
                            if (fallback.HasCharacter_Internal(character, true, tryAddCharacter))
                                isMissingCharacter = false;
                        }
                    }
                }

                if (isMissingCharacter)
                    s_MissingCharacterList.Add(character);
            }

            if (s_MissingCharacterList.Count > 0)
            {
                missingCharacters = s_MissingCharacterList.ToArray();
                return false;
            }

            return true;
        }


        /// <summary>
        /// Function to check if certain characters exists in the font asset. Function returns false if any characters are missing.
        /// </summary>
        /// <param name="text">String containing the characters to check</param>
        /// <returns></returns>
        public bool HasCharacters(string text)
        {
            if (m_CharacterLookupDictionary == null)
                return false;

            for (int i = 0; i < text.Length; i++)
            {
                if (!m_CharacterLookupDictionary.ContainsKey(text[i]))
                    return false;
            }

            return true;
        }


        /// <summary>
        /// Function to extract all the characters from a font asset.
        /// </summary>
        /// <param name="fontAsset"></param>
        /// <returns></returns>
        public static string GetCharacters(TMP_FontAsset fontAsset)
        {
            string characters = string.Empty;

            for (int i = 0; i < fontAsset.characterTable.Count; i++)
            {
                characters += (char)fontAsset.characterTable[i].unicode;
            }

            return characters;
        }


        /// <summary>
        /// Function which returns an array that contains all the characters from a font asset.
        /// </summary>
        /// <param name="fontAsset"></param>
        /// <returns></returns>
        public static int[] GetCharactersArray(TMP_FontAsset fontAsset)
        {
            int[] characters = new int[fontAsset.characterTable.Count];

            for (int i = 0; i < fontAsset.characterTable.Count; i++)
            {
                characters[i] = (int)fontAsset.characterTable[i].unicode;
            }

            return characters;
        }

        /// <summary>
        /// Internal function used to get the glyph index for the given Unicode.
        /// </summary>
        /// <param name="unicode"></param>
        /// <returns></returns>
        internal uint GetGlyphIndex(uint unicode)
        {
            // Check if glyph already exists in font asset.
            if (m_CharacterLookupDictionary.ContainsKey(unicode))
                return m_CharacterLookupDictionary[unicode].glyphIndex;

            // Load font face.
            if (FontEngine.LoadFontFace(sourceFontFile, m_FaceInfo.pointSize) != FontEngineError.Success)
                return 0;

            return FontEngine.GetGlyphIndex(unicode);
        }

        // ================================================================================
        // Properties and functions related to character and glyph additions as well as
        // tacking glyphs that need to be added to various font asset atlas textures.
        // ================================================================================

        // List and HashSet used for tracking font assets whose font atlas texture and character data needs updating.
        private static List<TMP_FontAsset> k_FontAssets_FontFeaturesUpdateQueue = new List<TMP_FontAsset>();
        private static HashSet<int> k_FontAssets_FontFeaturesUpdateQueueLookup = new HashSet<int>();

        private static List<TMP_FontAsset> k_FontAssets_AtlasTexturesUpdateQueue = new List<TMP_FontAsset>();
        private static HashSet<int> k_FontAssets_AtlasTexturesUpdateQueueLookup = new HashSet<int>();

        /// <summary>
        ///
        /// </summary>
        /// <param name="fontAsset"></param>
        internal static void RegisterFontAssetForFontFeatureUpdate(TMP_FontAsset fontAsset)
        {
            int instanceID = fontAsset.instanceID;

            if (k_FontAssets_FontFeaturesUpdateQueueLookup.Add(instanceID))
                k_FontAssets_FontFeaturesUpdateQueue.Add(fontAsset);
        }

        /// <summary>
        /// Function called to update the font atlas texture and character data of font assets to which
        /// new characters were added.
        /// </summary>
        internal static void UpdateFontFeaturesForFontAssetsInQueue()
        {
            int count = k_FontAssets_FontFeaturesUpdateQueue.Count;

            for (int i = 0; i < count; i++)
                k_FontAssets_FontFeaturesUpdateQueue[i].UpdateGlyphAdjustmentRecords();

            if (count > 0)
            {
                k_FontAssets_FontFeaturesUpdateQueue.Clear();
                k_FontAssets_FontFeaturesUpdateQueueLookup.Clear();
            }
        }

        /// <summary>
        ///
        /// </summary>
        /// <param name="fontAsset"></param>
        internal static void RegisterFontAssetForAtlasTextureUpdate(TMP_FontAsset fontAsset)
        {
            int instanceID = fontAsset.instanceID;

            if (k_FontAssets_AtlasTexturesUpdateQueueLookup.Add(instanceID))
                k_FontAssets_AtlasTexturesUpdateQueue.Add(fontAsset);
        }

        /// <summary>
        ///
        /// </summary>
        internal static void UpdateAtlasTexturesForFontAssetsInQueue()
        {
            int count = k_FontAssets_AtlasTexturesUpdateQueueLookup.Count;

            for (int i = 0; i < count; i++)
                k_FontAssets_AtlasTexturesUpdateQueue[i].TryAddGlyphsToAtlasTextures();

            if (count > 0)
            {
                k_FontAssets_AtlasTexturesUpdateQueue.Clear();
                k_FontAssets_AtlasTexturesUpdateQueueLookup.Clear();
            }
        }

        /// <summary>
        ///
        /// </summary>
        //private bool m_IsAlreadyRegisteredForUpdate;

        /// <summary>
        /// List of glyphs that need to be rendered and added to an atlas texture.
        /// </summary>
        private List<Glyph> m_GlyphsToRender = new List<Glyph>();

        /// <summary>
        /// List of glyphs that we just rendered and added to an atlas texture.
        /// </summary>
        private List<Glyph> m_GlyphsRendered = new List<Glyph>();

        /// <summary>
        /// List of all the glyph indexes contained in the font asset.
        /// </summary>
        private List<uint> m_GlyphIndexList = new List<uint>();

        /// <summary>
        /// List of glyph indexes newly added to the font asset.
        /// This list is used in the process of retrieving font features.
        /// </summary>
        private List<uint> m_GlyphIndexListNewlyAdded = new List<uint>();

        /// <summary>
        ///
        /// </summary>
        internal List<uint> m_GlyphsToAdd = new List<uint>();
        internal HashSet<uint> m_GlyphsToAddLookup = new HashSet<uint>();

        internal List<TMP_Character> m_CharactersToAdd = new List<TMP_Character>();
        internal HashSet<uint> m_CharactersToAddLookup = new HashSet<uint>();

        /// <summary>
        /// Internal list used to track characters that could not be added to the font asset.
        /// </summary>
        internal List<uint> s_MissingCharacterList = new List<uint>();

        /// <summary>
        /// Hash table used to track characters that are known to be missing from the font file.
        /// </summary>
        internal HashSet<uint> m_MissingUnicodesFromFontFile = new HashSet<uint>();

        /// <summary>
        /// Internal static array used to avoid allocations when using the GetGlyphPairAdjustmentTable().
        /// </summary>
        internal static uint[] k_GlyphIndexArray;

        /// <summary>
        /// Try adding the characters from the provided string to the font asset.
        /// </summary>
        /// <param name="unicodes">Array that contains the characters to add to the font asset.</param>
        /// <param name="includeFontFeatures"></param>
        /// <returns>Returns true if all the characters were successfully added to the font asset. Return false otherwise.</returns>
        public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = false)
        {
            uint[] missingUnicodes;

            return TryAddCharacters(unicodes, out missingUnicodes, includeFontFeatures);
        }

        /// <summary>
        /// Try adding the characters from the provided string to the font asset.
        /// </summary>
        /// <param name="unicodes">Array that contains the characters to add to the font asset.</param>
        /// <param name="missingUnicodes">Array containing the characters that could not be added to the font asset.</param>
        /// <param name="includeFontFeatures"></param>
        /// <returns>Returns true if all the characters were successfully added to the font asset. Return false otherwise.</returns>
        public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = false)
        {
            Profiler.BeginSample("TMP.TryAddCharacters");

            // Make sure font asset is set to dynamic and that we have a valid list of characters.
            if (unicodes == null || unicodes.Length == 0 || m_AtlasPopulationMode == AtlasPopulationMode.Static)
            {
                if (m_AtlasPopulationMode == AtlasPopulationMode.Static)
                    Debug.LogWarning("Unable to add characters to font asset [" + this.name + "] because its AtlasPopulationMode is set to Static.", this);
                else
                    Debug.LogWarning("Unable to add characters to font asset [" + this.name + "] because the provided Unicode list is Null or Empty.", this);

                missingUnicodes = unicodes.ToArray();
                Profiler.EndSample();
                return false;
            }

            // Load font face.
            if (FontEngine.LoadFontFace(m_SourceFontFile, m_FaceInfo.pointSize) != FontEngineError.Success)
            {
                missingUnicodes = unicodes.ToArray();
                Profiler.EndSample();
                return false;
            }

            // Make sure font asset has been initialized
            if (m_CharacterLookupDictionary == null || m_GlyphLookupDictionary == null)
                ReadFontAssetDefinition();

            // Clear lists used to track which character and glyphs were added or missing.
            m_GlyphsToAdd.Clear();
            m_GlyphsToAddLookup.Clear();
            m_CharactersToAdd.Clear();
            m_CharactersToAddLookup.Clear();
            s_MissingCharacterList.Clear();

            bool isMissingCharacters = false;
            int unicodeCount = unicodes.Length;

            for (int i = 0; i < unicodeCount; i++)
            {
                uint unicode = unicodes[i];

                // Check if character is already contained in the character table.
                if (m_CharacterLookupDictionary.ContainsKey(unicode))
                    continue;

                // Get the index of the glyph for this Unicode value.
                uint glyphIndex = FontEngine.GetGlyphIndex(unicode);

                // Skip missing glyphs
                if (glyphIndex == 0)
                {
                    // Special handling for characters with potential alternative glyph representations
                    switch (unicode)
                    {
                        case 0xA0: // Non Breaking Space <NBSP>
                            // Use Space
                            glyphIndex = FontEngine.GetGlyphIndex(0x20);
                            break;
                        case 0xAD: // Soft Hyphen <SHY>
                        case 0x2011: // Non Breaking Hyphen
                            // Use Hyphen Minus
                            glyphIndex = FontEngine.GetGlyphIndex(0x2D);
                            break;
                    }

                    // Skip to next character if no potential alternative glyph representation is present in font file.
                    if (glyphIndex == 0)
                    {
                        // Add character to list of missing characters.
                        s_MissingCharacterList.Add(unicode);

                        isMissingCharacters = true;
                        continue;
                    }
                }

                TMP_Character character = new TMP_Character(unicode, glyphIndex);

                // Check if glyph is already contained in the font asset as the same glyph might be referenced by multiple characters.
                if (m_GlyphLookupDictionary.ContainsKey(glyphIndex))
                {
                    // Add a reference to the source text asset and glyph
                    character.glyph = m_GlyphLookupDictionary[glyphIndex];
                    character.textAsset = this;

                    m_CharacterTable.Add(character);
                    m_CharacterLookupDictionary.Add(unicode, character);
                    continue;
                }

                // Make sure glyph index has not already been added to list of glyphs to add.
                if (m_GlyphsToAddLookup.Add(glyphIndex))
                    m_GlyphsToAdd.Add(glyphIndex);

                // Make sure unicode / character has not already been added.
                if (m_CharactersToAddLookup.Add(unicode))
                    m_CharactersToAdd.Add(character);
            }

            if (m_GlyphsToAdd.Count == 0)
            {
                //Debug.LogWarning("No characters will be added to font asset [" + this.name + "] either because they are already present in the font asset or missing from the font file.");
                missingUnicodes = unicodes;
                Profiler.EndSample();
                return false;
            }

            // Resize the Atlas Texture to the appropriate size
            if (m_AtlasTextures[m_AtlasTextureIndex].width == 0 || m_AtlasTextures[m_AtlasTextureIndex].height == 0)
            {
                m_AtlasTextures[m_AtlasTextureIndex].Resize(m_AtlasWidth, m_AtlasHeight);
                FontEngine.ResetAtlasTexture(m_AtlasTextures[m_AtlasTextureIndex]);
            }

            Glyph[] glyphs;
            bool allGlyphsAddedToTexture = FontEngine.TryAddGlyphsToTexture(m_GlyphsToAdd, m_AtlasPadding, GlyphPackingMode.BestShortSideFit, m_FreeGlyphRects, m_UsedGlyphRects, m_AtlasRenderMode, m_AtlasTextures[m_AtlasTextureIndex], out glyphs);

            // Add new glyphs to relevant font asset data structure
            for (int i = 0; i < glyphs.Length && glyphs[i] != null; i++)
            {
                Glyph glyph = glyphs[i];
                uint glyphIndex = glyph.index;

                glyph.atlasIndex = m_AtlasTextureIndex;

                // Add new glyph to glyph table.
                m_GlyphTable.Add(glyph);
                m_GlyphLookupDictionary.Add(glyphIndex, glyph);

                m_GlyphIndexListNewlyAdded.Add(glyphIndex);
                m_GlyphIndexList.Add(glyphIndex);
            }

            // Clear glyph index list to allow
            m_GlyphsToAdd.Clear();

            // Add new characters to relevant data structures as well as track glyphs that could not be added to the current atlas texture.
            for (int i = 0; i < m_CharactersToAdd.Count; i++)
            {
                TMP_Character character = m_CharactersToAdd[i];
                Glyph glyph;

                if (m_GlyphLookupDictionary.TryGetValue(character.glyphIndex, out glyph) == false)
                {
                    m_GlyphsToAdd.Add(character.glyphIndex);
                    continue;
                }

                // Add a reference to the source text asset and glyph
                character.glyph = glyph;
                character.textAsset = this;

                m_CharacterTable.Add(character);
                m_CharacterLookupDictionary.Add(character.unicode, character);

                // Remove character from list to add
                m_CharactersToAdd.RemoveAt(i);
                i -= 1;
            }

            // Try adding missing glyphs to
            if (m_IsMultiAtlasTexturesEnabled && allGlyphsAddedToTexture == false)
            {
                while (allGlyphsAddedToTexture == false)
                    allGlyphsAddedToTexture = TryAddGlyphsToNewAtlasTexture();
            }

            // Get Font Features for the given characters
            if (includeFontFeatures)
                UpdateGlyphAdjustmentRecords();

            #if UNITY_EDITOR
            // Makes the changes to the font asset persistent.
            if (UnityEditor.EditorUtility.IsPersistent(this))
            {
                TMP_EditorResourceManager.RegisterResourceForUpdate(this);
            }
            #endif

            // Populate list of missing characters
            for (int i = 0; i < m_CharactersToAdd.Count; i++)
            {
                TMP_Character character = m_CharactersToAdd[i];
                s_MissingCharacterList.Add(character.unicode);
            }

            missingUnicodes = null;

            if (s_MissingCharacterList.Count > 0)
                missingUnicodes = s_MissingCharacterList.ToArray();

            Profiler.EndSample();

            return allGlyphsAddedToTexture && !isMissingCharacters;
        }

        /// <summary>
        /// Try adding the characters from the provided string to the font asset.
        /// </summary>
        /// <param name="characters">String containing the characters to add to the font asset.</param>
        /// <param name="includeFontFeatures"></param>
        /// <returns>Returns true if all the characters were successfully added to the font asset. Return false otherwise.</returns>
        public bool TryAddCharacters(string characters, bool includeFontFeatures = false)
        {
            string missingCharacters;

            return TryAddCharacters(characters, out missingCharacters, includeFontFeatures);
        }


        /// <summary>
        /// Try adding the characters from the provided string to the font asset.
        /// </summary>
        /// <param name="characters">String containing the characters to add to the font asset.</param>
        /// <param name="missingCharacters">String containing the characters that could not be added to the font asset.</param>
        /// <param name="includeFontFeatures"></param>
        /// <returns>Returns true if all the characters were successfully added to the font asset. Return false otherwise.</returns>
        public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = false)
        {
            Profiler.BeginSample("TMP.TryAddCharacters");

            // Make sure font asset is set to dynamic and that we have a valid list of characters.
            if (string.IsNullOrEmpty(characters) || m_AtlasPopulationMode == AtlasPopulationMode.Static)
            {
                if (m_AtlasPopulationMode == AtlasPopulationMode.Static)
                    Debug.LogWarning("Unable to add characters to font asset [" + this.name + "] because its AtlasPopulationMode is set to Static.", this);
                else
                {
                    Debug.LogWarning("Unable to add characters to font asset [" + this.name + "] because the provided character list is Null or Empty.", this);
                }

                missingCharacters = characters;
                Profiler.EndSample();
                return false;
            }

            // Load font face.
            if (FontEngine.LoadFontFace(m_SourceFontFile, m_FaceInfo.pointSize) != FontEngineError.Success)
            {
                missingCharacters = characters;
                Profiler.EndSample();
                return false;
            }

            // Make sure font asset has been initialized
            if (m_CharacterLookupDictionary == null || m_GlyphLookupDictionary == null)
                ReadFontAssetDefinition();

            // Clear data structures used to track which glyph needs to be added to atlas texture.
            m_GlyphsToAdd.Clear();
            m_GlyphsToAddLookup.Clear();
            m_CharactersToAdd.Clear();
            m_CharactersToAddLookup.Clear();
            s_MissingCharacterList.Clear();

            bool isMissingCharacters = false;
            int characterCount = characters.Length;

            // Iterate over each of the requested characters.
            for (int i = 0; i < characterCount; i++)
            {
                uint unicode = characters[i];

                // Check if character is already contained in the character table.
                if (m_CharacterLookupDictionary.ContainsKey(unicode))
                    continue;

                // Get the index of the glyph for this unicode value.
                uint glyphIndex = FontEngine.GetGlyphIndex(unicode);

                // Skip missing glyphs
                if (glyphIndex == 0)
                {
                    // Special handling for characters with potential alternative glyph representations
                    switch (unicode)
                    {
                        case 0xA0: // Non Breaking Space <NBSP>
                            // Use Space
                            glyphIndex = FontEngine.GetGlyphIndex(0x20);
                            break;
                        case 0xAD: // Soft Hyphen <SHY>
                        case 0x2011: // Non Breaking Hyphen
                            // Use Hyphen Minus
                            glyphIndex = FontEngine.GetGlyphIndex(0x2D);
                            break;
                    }

                    // Skip to next character if no potential alternative glyph representation is present in font file.
                    if (glyphIndex == 0)
                    {
                        // Add character to list of missing characters.
                        s_MissingCharacterList.Add(unicode);

                        isMissingCharacters = true;
                        continue;
                    }
                }

                TMP_Character character = new TMP_Character(unicode, glyphIndex);

                // Check if glyph is already contained in the font asset as the same glyph might be referenced by multiple characters.
                if (m_GlyphLookupDictionary.ContainsKey(glyphIndex))
                {
                    // Add a reference to the source text asset and glyph
                    character.glyph = m_GlyphLookupDictionary[glyphIndex];
                    character.textAsset = this;

                    m_CharacterTable.Add(character);
                    m_CharacterLookupDictionary.Add(unicode, character);
                    continue;
                }

                // Make sure glyph index has not already been added to list of glyphs to add.
                if (m_GlyphsToAddLookup.Add(glyphIndex))
                    m_GlyphsToAdd.Add(glyphIndex);

                // Make sure unicode / character has not already been added.
                if (m_CharactersToAddLookup.Add(unicode))
                    m_CharactersToAdd.Add(character);
            }

            if (m_GlyphsToAdd.Count == 0)
            {
                missingCharacters = characters;
                Profiler.EndSample();
                return false;
            }

            // Resize the Atlas Texture to the appropriate size
            if (m_AtlasTextures[m_AtlasTextureIndex].width == 0 || m_AtlasTextures[m_AtlasTextureIndex].height == 0)
            {
                //Debug.Log("Setting initial size of atlas texture used by font asset [" + this.name + "].");
                m_AtlasTextures[m_AtlasTextureIndex].Resize(m_AtlasWidth, m_AtlasHeight);
                FontEngine.ResetAtlasTexture(m_AtlasTextures[m_AtlasTextureIndex]);
            }

            Glyph[] glyphs;

            bool allGlyphsAddedToTexture = FontEngine.TryAddGlyphsToTexture(m_GlyphsToAdd, m_AtlasPadding, GlyphPackingMode.BestShortSideFit, m_FreeGlyphRects, m_UsedGlyphRects, m_AtlasRenderMode, m_AtlasTextures[m_AtlasTextureIndex], out glyphs);

            for (int i = 0; i < glyphs.Length && glyphs[i] != null; i++)
            {
                Glyph glyph = glyphs[i];
                uint glyphIndex = glyph.index;

                glyph.atlasIndex = m_AtlasTextureIndex;

                // Add new glyph to glyph table.
                m_GlyphTable.Add(glyph);
                m_GlyphLookupDictionary.Add(glyphIndex, glyph);

                m_GlyphIndexListNewlyAdded.Add(glyphIndex);
                m_GlyphIndexList.Add(glyphIndex);
            }

            // Clear glyph index list to track glyphs that were not added to the atlas texture
            m_GlyphsToAdd.Clear();

            // Add new characters to relevant data structures.
            for (int i = 0; i < m_CharactersToAdd.Count; i++)
            {
                TMP_Character character = m_CharactersToAdd[i];
                Glyph glyph;

                if (m_GlyphLookupDictionary.TryGetValue(character.glyphIndex, out glyph) == false)
                {
                    m_GlyphsToAdd.Add(character.glyphIndex);
                    continue;
                }

                // Add a reference to the source text asset and glyph
                character.glyph = glyph;
                character.textAsset = this;

                m_CharacterTable.Add(character);
                m_CharacterLookupDictionary.Add(character.unicode, character);

                // Remove character from list to add
                m_CharactersToAdd.RemoveAt(i);
                i -= 1;
            }

            // Try adding glyphs that didn't fit in the current atlas texture to new atlas texture
            if (m_IsMultiAtlasTexturesEnabled && allGlyphsAddedToTexture == false)
            {
                while (allGlyphsAddedToTexture == false)
                    allGlyphsAddedToTexture = TryAddGlyphsToNewAtlasTexture();
            }

            // Get Font Features for the given characters
            if (includeFontFeatures)
                UpdateGlyphAdjustmentRecords();

            #if UNITY_EDITOR
            // Makes the changes to the font asset persistent.
            if (UnityEditor.EditorUtility.IsPersistent(this))
            {
                TMP_EditorResourceManager.RegisterResourceForUpdate(this);
            }
            #endif

            missingCharacters = string.Empty;

            // Populate list of missing characters
            for (int i = 0; i < m_CharactersToAdd.Count; i++)
            {
                TMP_Character character = m_CharactersToAdd[i];
                s_MissingCharacterList.Add(character.unicode);
            }

            if (s_MissingCharacterList.Count > 0)
                missingCharacters = s_MissingCharacterList.UintToString();

            Profiler.EndSample();
            return allGlyphsAddedToTexture && !isMissingCharacters;
        }


        // Functions to remove...
        /*
        /// <summary>
        /// NOT USED CURRENTLY - Try adding character using Unicode value to font asset.
        /// </summary>
        /// <param name="unicode">The Unicode value of the character.</param>
        /// <param name="character">The character data if successfully added to the font asset. Null otherwise.</param>
        /// <returns>Returns true if the character has been added. False otherwise.</returns>
        internal bool TryAddCharacter_Internal(uint unicode)
        {
            TMP_Character character = null;

            // Check if character is already contained in the character table.
            if (m_CharacterLookupDictionary.ContainsKey(unicode))
                return true;

            uint glyphIndex = FontEngine.GetGlyphIndex(unicode);
            if (glyphIndex == 0)
                return false;

            // Check if glyph is already contained in the font asset as the same glyph might be referenced by multiple characters.
            if (m_GlyphLookupDictionary.ContainsKey(glyphIndex))
            {
                character = new TMP_Character(unicode, m_GlyphLookupDictionary[glyphIndex]);
                m_CharacterTable.Add(character);
                m_CharacterLookupDictionary.Add(unicode, character);

                //#if UNITY_EDITOR
                // Makes the changes to the font asset persistent.
                // OPTIMIZATION: This could be handled when exiting Play mode if we added any new characters to the asset.
                // Could also add some update registry to handle this.
                //SortGlyphTable();
                //UnityEditor.EditorUtility.SetDirty(this);
                //#endif

                return true;
            }

            // Resize the Atlas Texture to the appropriate size
            if (m_AtlasTextures[m_AtlasTextureIndex].width == 0 || m_AtlasTextures[m_AtlasTextureIndex].height == 0)
            {
                //Debug.Log("Setting initial size of atlas texture used by font asset [" + this.name + "].");
                m_AtlasTextures[m_AtlasTextureIndex].Resize(m_AtlasWidth, m_AtlasHeight);
                FontEngine.ResetAtlasTexture(m_AtlasTextures[m_AtlasTextureIndex]);
            }

            Glyph glyph;

            if (FontEngine.TryAddGlyphToTexture(glyphIndex, m_AtlasPadding, GlyphPackingMode.BestShortSideFit, m_FreeGlyphRects, m_UsedGlyphRects, m_AtlasRenderMode, m_AtlasTextures[m_AtlasTextureIndex], out glyph))
            {
                // Add new glyph to glyph table.
                m_GlyphTable.Add(glyph);
                m_GlyphLookupDictionary.Add(glyphIndex, glyph);

                // Add new character
                character = new TMP_Character(unicode, glyph);
                m_CharacterTable.Add(character);
                m_CharacterLookupDictionary.Add(unicode, character);

                //#if UNITY_EDITOR
                // Makes the changes to the font asset persistent.
                // OPTIMIZATION: This could be handled when exiting Play mode if we added any new characters to the asset.
                // Could also add some update registry to handle this.
                //SortGlyphTable();
                //UnityEditor.EditorUtility.SetDirty(this);
                //#endif

                return true;
            }

            return false;
        }


        /// <summary>
        /// To be removed.
        /// </summary>
        /// <param name="unicode"></param>
        /// <param name="glyph"></param>
        internal TMP_Character AddCharacter_Internal(uint unicode, Glyph glyph)
        {
            // Check if character is already contained in the character table.
            if (m_CharacterLookupDictionary.ContainsKey(unicode))
                return m_CharacterLookupDictionary[unicode];

            uint glyphIndex = glyph.index;

            // Resize the Atlas Texture to the appropriate size
            if (m_AtlasTextures[m_AtlasTextureIndex].width == 0 || m_AtlasTextures[m_AtlasTextureIndex].height == 0)
            {
                //Debug.Log("Setting initial size of atlas texture used by font asset [" + this.name + "].");
                m_AtlasTextures[m_AtlasTextureIndex].Resize(m_AtlasWidth, m_AtlasHeight);
                FontEngine.ResetAtlasTexture(m_AtlasTextures[m_AtlasTextureIndex]);
            }

            // Check if glyph is already contained in the glyph table.
            if (m_GlyphLookupDictionary.ContainsKey(glyphIndex) == false)
            {
                if (glyph.glyphRect.width == 0 || glyph.glyphRect.width == 0)
                {
                    // Glyphs with zero width and / or height can be automatically added to font asset.
                    m_GlyphTable.Add(glyph);
                }
                else
                {
                    // Try packing new glyph
                    if (FontEngine.TryPackGlyphInAtlas(glyph, m_AtlasPadding, GlyphPackingMode.ContactPointRule, m_AtlasRenderMode, m_AtlasWidth, m_AtlasHeight, m_FreeGlyphRects, m_UsedGlyphRects) == false)
                    {
                        // TODO: Add handling to create new atlas texture to fit glyph.

                        return null;
                    }

                    //m_GlyphsToRender.Add(glyph);
                }
            }

            // Add character to font asset.
            TMP_Character character = new TMP_Character(unicode, glyph);
            m_CharacterTable.Add(character);
            m_CharacterLookupDictionary.Add(unicode, character);

            //Debug.Log("Adding character [" + (char)unicode + "] with Unicode (" + unicode + ") to [" + this.name + "] font asset.");

            // Schedule glyph to be added to the font atlas texture
            //TM_FontAssetUpdateManager.RegisterFontAssetForUpdate(this);
            //UpdateAtlasTexture(); // Temporary until callback system is revised.

            //#if UNITY_EDITOR
            // Makes the changes to the font asset persistent.
            // OPTIMIZATION: This could be handled when exiting Play mode if we added any new characters to the asset.
            // Could also add some update registry to handle this.
            //SortGlyphTable();
            //UnityEditor.EditorUtility.SetDirty(this);
            //#endif

            return character;
        }
        */


        /// <summary>
        /// Try adding character using Unicode value to font asset.
        /// Function assumes internal user has already checked to make sure the character is not already contained in the font asset.
        /// </summary>
        /// <param name="unicode">The Unicode value of the character.</param>
        /// <param name="character">The character data if successfully added to the font asset. Null otherwise.</param>
        /// <returns>Returns true if the character has been added. False otherwise.</returns>
        internal bool TryAddCharacterInternal(uint unicode, out TMP_Character character)
        {
            Profiler.BeginSample("TMP.TryAddCharacter");

            character = null;

            // Check if the Unicode character is already known to be missing from the source font file.
            if (m_MissingUnicodesFromFontFile.Contains(unicode))
            {
                Profiler.EndSample();

                return false;
            }

            // Load font face.
            if (FontEngine.LoadFontFace(sourceFontFile, m_FaceInfo.pointSize) != FontEngineError.Success)
                return false;

            uint glyphIndex = FontEngine.GetGlyphIndex(unicode);
            if (glyphIndex == 0)
            {
                // Special handling for characters with potential alternative glyph representations
                switch (unicode)
                {
                    case 0xA0: // Non Breaking Space <NBSP>
                        // Use Space
                        glyphIndex = FontEngine.GetGlyphIndex(0x20);
                        break;
                    case 0xAD: // Soft Hyphen <SHY>
                    case 0x2011: // Non Breaking Hyphen
                        // Use Hyphen Minus
                        glyphIndex = FontEngine.GetGlyphIndex(0x2D);
                        break;
                }

                // Return if no potential alternative glyph representation is present in font file.
                if (glyphIndex == 0)
                {
                    m_MissingUnicodesFromFontFile.Add(unicode);

                    Profiler.EndSample();
                    return false;
                }
            }

            // Check if glyph is already contained in the font asset as the same glyph might be referenced by multiple characters.
            if (m_GlyphLookupDictionary.ContainsKey(glyphIndex))
            {
                character = new TMP_Character(unicode, this, m_GlyphLookupDictionary[glyphIndex]);
                m_CharacterTable.Add(character);
                m_CharacterLookupDictionary.Add(unicode, character);

                #if UNITY_EDITOR
                // Makes the changes to the font asset persistent.
                // OPTIMIZATION: This could be handled when exiting Play mode if we added any new characters to the asset.
                // Could also add some update registry to handle this.
                //SortGlyphTable();
                if (UnityEditor.EditorUtility.IsPersistent(this))
                {
                    TMP_EditorResourceManager.RegisterResourceForUpdate(this);
                }
                #endif

                Profiler.EndSample();

                return true;
            }

            Glyph glyph = null;

            // TODO: Potential new feature to explore where selected font assets share the same atlas texture(s).
            // Handling if using Dynamic Textures
            //if (m_IsUsingDynamicTextures)
            //{
            //    if (TMP_DynamicAtlasTextureGroup.AddGlyphToManagedDynamicTexture(this, glyphIndex, m_AtlasPadding, m_AtlasRenderMode, out glyph))
            //    {
            //        // Add new glyph to glyph table.
            //        m_GlyphTable.Add(glyph);
            //        m_GlyphLookupDictionary.Add(glyphIndex, glyph);

            //        // Add new character
            //        character = new TMP_Character(unicode, glyph);
            //        m_CharacterTable.Add(character);
            //        m_CharacterLookupDictionary.Add(unicode, character);

            //        m_GlyphIndexList.Add(glyphIndex);

            //        if (TMP_Settings.getFontFeaturesAtRuntime)
            //        {
            //            if (k_FontAssetsToUpdateLookup.Add(instanceID))
            //                k_FontAssetsToUpdate.Add(this);
            //        }

            //        //Profiler.EndSample();

            //        return true;
            //    }
            //}

            // Resize the Atlas Texture to the appropriate size
            if (m_AtlasTextures[m_AtlasTextureIndex].width == 0 || m_AtlasTextures[m_AtlasTextureIndex].height == 0)
            {
                // TODO: Need texture to be readable.
                if (m_AtlasTextures[m_AtlasTextureIndex].isReadable == false)
                {
                    Debug.LogWarning("Unable to add the requested character to font asset [" + this.name + "]'s atlas texture. Please make the texture [" + m_AtlasTextures[m_AtlasTextureIndex].name + "] readable.", m_AtlasTextures[m_AtlasTextureIndex]);

                    Profiler.EndSample();

                    return false;
                }

                m_AtlasTextures[m_AtlasTextureIndex].Resize(m_AtlasWidth, m_AtlasHeight);
                FontEngine.ResetAtlasTexture(m_AtlasTextures[m_AtlasTextureIndex]);
            }

            // Try adding glyph to local atlas texture
            if (FontEngine.TryAddGlyphToTexture(glyphIndex, m_AtlasPadding, GlyphPackingMode.BestShortSideFit, m_FreeGlyphRects, m_UsedGlyphRects, m_AtlasRenderMode, m_AtlasTextures[m_AtlasTextureIndex], out glyph))
            {
                // Update glyph atlas index
                glyph.atlasIndex = m_AtlasTextureIndex;

                // Add new glyph to glyph table.
                m_GlyphTable.Add(glyph);
                m_GlyphLookupDictionary.Add(glyphIndex, glyph);

                // Add new character
                character = new TMP_Character(unicode, this, glyph);
                m_CharacterTable.Add(character);
                m_CharacterLookupDictionary.Add(unicode, character);

                m_GlyphIndexList.Add(glyphIndex);
                m_GlyphIndexListNewlyAdded.Add(glyphIndex);

                if (TMP_Settings.getFontFeaturesAtRuntime)
                    RegisterFontAssetForFontFeatureUpdate(this);

                #if UNITY_EDITOR
                // Makes the changes to the font asset persistent.
                // OPTIMIZATION: This could be handled when exiting Play mode if we added any new characters to the asset.
                // Could also add some update registry to handle this.
                //SortGlyphTable();
                if (UnityEditor.EditorUtility.IsPersistent(this))
                {
                    TMP_EditorResourceManager.RegisterResourceForUpdate(this);
                }
                #endif

                Profiler.EndSample();

                return true;
            }

            // Add glyph which did not fit in current atlas texture to new atlas texture.
            if (m_IsMultiAtlasTexturesEnabled)
            {
                // Create new atlas texture
                SetupNewAtlasTexture();

                // Try adding glyph to newly created atlas texture
                if (FontEngine.TryAddGlyphToTexture(glyphIndex, m_AtlasPadding, GlyphPackingMode.BestShortSideFit, m_FreeGlyphRects, m_UsedGlyphRects, m_AtlasRenderMode, m_AtlasTextures[m_AtlasTextureIndex], out glyph))
                {
                    // Update glyph atlas index
                    glyph.atlasIndex = m_AtlasTextureIndex;

                    // Add new glyph to glyph table.
                    m_GlyphTable.Add(glyph);
                    m_GlyphLookupDictionary.Add(glyphIndex, glyph);

                    // Add new character
                    character = new TMP_Character(unicode, this, glyph);
                    m_CharacterTable.Add(character);
                    m_CharacterLookupDictionary.Add(unicode, character);

                    m_GlyphIndexList.Add(glyphIndex);
                    m_GlyphIndexListNewlyAdded.Add(glyphIndex);

                    if (TMP_Settings.getFontFeaturesAtRuntime)
                        RegisterFontAssetForFontFeatureUpdate(this);

                    #if UNITY_EDITOR
                    //SortGlyphTable();
                    if (UnityEditor.EditorUtility.IsPersistent(this))
                    {
                        TMP_EditorResourceManager.RegisterResourceForUpdate(this);
                    }
                    #endif

                    Profiler.EndSample();

                    return true;
                }
            }

            Profiler.EndSample();

            return false;
        }


        internal bool TryGetCharacter_and_QueueRenderToTexture(uint unicode, out TMP_Character character)
        {
            Profiler.BeginSample("TMP.TryAddCharacter");

            character = null;

            // Check if the Unicode character is already known to be missing from the source font file.
            if (m_MissingUnicodesFromFontFile.Contains(unicode))
            {
                Profiler.EndSample();

                return false;
            }

            // Load font face.
            if (FontEngine.LoadFontFace(sourceFontFile, m_FaceInfo.pointSize) != FontEngineError.Success)
                return false;

            uint glyphIndex = FontEngine.GetGlyphIndex(unicode);
            if (glyphIndex == 0)
            {
                // Special handling for characters with potential alternative glyph representations
                switch (unicode)
                {
                    case 0xA0: // Non Breaking Space <NBSP>
                        // Use Space
                        glyphIndex = FontEngine.GetGlyphIndex(0x20);
                        break;
                    case 0xAD: // Soft Hyphen <SHY>
                    case 0x2011: // Non Breaking Hyphen
                        // Use Hyphen Minus
                        glyphIndex = FontEngine.GetGlyphIndex(0x2D);
                        break;
                }

                // Return if no potential alternative glyph representation is present in font file.
                if (glyphIndex == 0)
                {
                    m_MissingUnicodesFromFontFile.Add(unicode);

                    Profiler.EndSample();
                    return false;
                }
            }

            // Check if glyph is already contained in the font asset as the same glyph might be referenced by multiple characters.
            if (m_GlyphLookupDictionary.ContainsKey(glyphIndex))
            {
                character = new TMP_Character(unicode, this, m_GlyphLookupDictionary[glyphIndex]);
                m_CharacterTable.Add(character);
                m_CharacterLookupDictionary.Add(unicode, character);

                #if UNITY_EDITOR
                // Makes the changes to the font asset persistent.
                // OPTIMIZATION: This could be handled when exiting Play mode if we added any new characters to the asset.
                // Could also add some update registry to handle this.
                //SortGlyphTable();
                if (UnityEditor.EditorUtility.IsPersistent(this))
                {
                    TMP_EditorResourceManager.RegisterResourceForUpdate(this);
                }
                #endif

                Profiler.EndSample();

                return true;
            }

            GlyphLoadFlags glyphLoadFlags = (GlyphRasterModes.RASTER_MODE_NO_HINTING & (GlyphRasterModes)m_AtlasRenderMode) == GlyphRasterModes.RASTER_MODE_NO_HINTING
                ? GlyphLoadFlags.LOAD_NO_BITMAP | GlyphLoadFlags.LOAD_NO_HINTING
                : GlyphLoadFlags.LOAD_NO_BITMAP;

            Glyph glyph = null;

            if (FontEngine.TryGetGlyphWithIndexValue(glyphIndex, glyphLoadFlags, out glyph))
            {
                // Add new glyph to glyph table.
                m_GlyphTable.Add(glyph);
                m_GlyphLookupDictionary.Add(glyphIndex, glyph);

                // Add new character
                character = new TMP_Character(unicode, this, glyph);
                m_CharacterTable.Add(character);
                m_CharacterLookupDictionary.Add(unicode, character);

                m_GlyphIndexList.Add(glyphIndex);
                m_GlyphIndexListNewlyAdded.Add(glyphIndex);

                if (TMP_Settings.getFontFeaturesAtRuntime)
                    RegisterFontAssetForFontFeatureUpdate(this);

                // Add glyph to list of glyphs to be rendered
                m_GlyphsToRender.Add(glyph);

                // Register font asset to render and add glyphs to atlas textures
                RegisterFontAssetForAtlasTextureUpdate(this);

                #if UNITY_EDITOR
                // Makes the changes to the font asset persistent.
                // OPTIMIZATION: This could be handled when exiting Play mode if we added any new characters to the asset.
                // Could also add some update registry to handle this.
                //SortGlyphTable();
                if (UnityEditor.EditorUtility.IsPersistent(this))
                {
                    TMP_EditorResourceManager.RegisterResourceForUpdate(this);
                }
                #endif

                Profiler.EndSample();

                return true;
            }

            Profiler.EndSample();

            return false;
        }

        /// <summary>
        /// This function requires an update to the TextCore:FontEngine
        /// </summary>
        internal void TryAddGlyphsToAtlasTextures()
        {
            /*
            // Return if we don't have any glyphs to add.
            if (m_GlyphsToRender.Count == 0)
                return;

            Profiler.BeginSample("TMP.TryAddGlyphsToAtlasTextures");

            // Resize the Atlas Texture to the appropriate size
            if (m_AtlasTextures[m_AtlasTextureIndex].width == 0 || m_AtlasTextures[m_AtlasTextureIndex].height == 0)
            {
                //Debug.Log("Setting initial size of atlas texture used by font asset [" + this.name + "].");
                m_AtlasTextures[m_AtlasTextureIndex].Resize(m_AtlasWidth, m_AtlasHeight);
                FontEngine.ResetAtlasTexture(m_AtlasTextures[m_AtlasTextureIndex]);
            }

            bool allGlyphsAddedToTexture = FontEngine.TryAddGlyphsToTexture(m_GlyphsToRender, m_GlyphsRendered, m_AtlasPadding, GlyphPackingMode.BestShortSideFit, m_FreeGlyphRects, m_UsedGlyphRects, m_AtlasRenderMode, m_AtlasTextures[m_AtlasTextureIndex]);

            // Try adding glyphs that didn't fit in the current atlas texture to new atlas texture
            if (m_IsMultiAtlasTexturesEnabled && allGlyphsAddedToTexture == false)
            {
                while (allGlyphsAddedToTexture == false)
                {
                    // Create and prepare new atlas texture
                    SetupNewAtlasTexture();

                    // Try adding remaining glyphs in the newly created atlas texture
                    allGlyphsAddedToTexture = FontEngine.TryAddGlyphsToTexture(m_GlyphsToRender, m_GlyphsRendered, m_AtlasPadding, GlyphPackingMode.BestShortSideFit, m_FreeGlyphRects, m_UsedGlyphRects, m_AtlasRenderMode, m_AtlasTextures[m_AtlasTextureIndex]);
                }
            }

            if (allGlyphsAddedToTexture == false)
            {
                // TODO: Handle case when we have left over glyph to render that didn't fit in the atlas texture.
                Debug.LogError("Unable to add some glyphs to atlas texture.");
            }

            #if UNITY_EDITOR
            // Makes the changes to the font asset persistent.
            if (UnityEditor.EditorUtility.IsPersistent(this))
            {
                //SortGlyphAndCharacterTables();
                TMP_EditorResourceManager.RegisterResourceForUpdate(this);
            }
            #endif

            Profiler.EndSample();
            */
        }


        /// <summary>
        ///
        /// </summary>
        /// <returns></returns>
        bool TryAddGlyphsToNewAtlasTexture()
        {
            // Create and prepare new atlas texture
            SetupNewAtlasTexture();

            Glyph[] glyphs;

            // Try adding remaining glyphs in the newly created atlas texture
            bool allGlyphsAddedToTexture = FontEngine.TryAddGlyphsToTexture(m_GlyphsToAdd, m_AtlasPadding, GlyphPackingMode.BestShortSideFit, m_FreeGlyphRects, m_UsedGlyphRects, m_AtlasRenderMode, m_AtlasTextures[m_AtlasTextureIndex], out glyphs);

            // Add new glyphs to relevant data structures.
            for (int i = 0; i < glyphs.Length && glyphs[i] != null; i++)
            {
                Glyph glyph = glyphs[i];
                uint glyphIndex = glyph.index;

                glyph.atlasIndex = m_AtlasTextureIndex;

                // Add new glyph to glyph table.
                m_GlyphTable.Add(glyph);
                m_GlyphLookupDictionary.Add(glyphIndex, glyph);

                m_GlyphIndexListNewlyAdded.Add(glyphIndex);
                m_GlyphIndexList.Add(glyphIndex);
            }

            // Clear glyph index list to allow us to track glyphs
            m_GlyphsToAdd.Clear();

            // Add new characters to relevant data structures as well as track glyphs that could not be added to the current atlas texture.
            for (int i = 0; i < m_CharactersToAdd.Count; i++)
            {
                TMP_Character character = m_CharactersToAdd[i];
                Glyph glyph;

                if (m_GlyphLookupDictionary.TryGetValue(character.glyphIndex, out glyph) == false)
                {
                    m_GlyphsToAdd.Add(character.glyphIndex);
                    continue;
                }

                // Add a reference to the source text asset and glyph
                character.glyph = glyph;
                character.textAsset = this;

                m_CharacterTable.Add(character);
                m_CharacterLookupDictionary.Add(character.unicode, character);

                // Remove character
                m_CharactersToAdd.RemoveAt(i);
                i -= 1;
            }

            return allGlyphsAddedToTexture;
        }


        /// <summary>
        ///
        /// </summary>
        void SetupNewAtlasTexture()
        {
            m_AtlasTextureIndex += 1;

            // Check size of atlas texture array
            if (m_AtlasTextures.Length == m_AtlasTextureIndex)
                Array.Resize(ref m_AtlasTextures, m_AtlasTextures.Length * 2);

            // Initialize new atlas texture
            m_AtlasTextures[m_AtlasTextureIndex] = new Texture2D(m_AtlasWidth, m_AtlasHeight, TextureFormat.Alpha8, false);
            FontEngine.ResetAtlasTexture(m_AtlasTextures[m_AtlasTextureIndex]);

            // Clear packing GlyphRects
            int packingModifier = ((GlyphRasterModes)m_AtlasRenderMode & GlyphRasterModes.RASTER_MODE_BITMAP) == GlyphRasterModes.RASTER_MODE_BITMAP ? 0 : 1;
            m_FreeGlyphRects.Clear();
            m_FreeGlyphRects.Add(new GlyphRect(0, 0, m_AtlasWidth - packingModifier, m_AtlasHeight - packingModifier));
            m_UsedGlyphRects.Clear();

            #if UNITY_EDITOR
            // Add new texture as sub asset to font asset
            if (UnityEditor.EditorUtility.IsPersistent(this))
            {
                Texture2D tex = m_AtlasTextures[m_AtlasTextureIndex];
                tex.name = m_AtlasTexture.name + " " + m_AtlasTextureIndex;

                UnityEditor.AssetDatabase.AddObjectToAsset(m_AtlasTextures[m_AtlasTextureIndex], this);
                TMP_EditorResourceManager.RegisterResourceForReimport(this);
            }
            #endif
        }


        /// <summary>
        /// Not used currently
        /// </summary>
        internal void UpdateAtlasTexture()
        {
            // Return if we don't have any glyphs to add to atlas texture.
            if (m_GlyphsToRender.Count == 0)
                return;

            //Debug.Log("Updating [" + this.name + "]'s atlas texture.");

            // Pack glyphs in the given atlas texture size.
            // TODO: Packing and glyph render modes should be defined in the font asset.
            //FontEngine.PackGlyphsInAtlas(m_GlyphsToPack, m_GlyphsPacked, m_AtlasPadding, GlyphPackingMode.ContactPointRule, GlyphRenderMode.SDFAA, m_AtlasWidth, m_AtlasHeight, m_FreeGlyphRects, m_UsedGlyphRects);
            //FontEngine.RenderGlyphsToTexture(m_GlyphsPacked, m_AtlasPadding, GlyphRenderMode.SDFAA, m_AtlasTextures[m_AtlasTextureIndex]);

            // Resize the Atlas Texture to the appropriate size
            if (m_AtlasTextures[m_AtlasTextureIndex].width == 0 || m_AtlasTextures[m_AtlasTextureIndex].height == 0)
            {
                //Debug.Log("Setting initial size of atlas texture used by font asset [" + this.name + "].");
                m_AtlasTextures[m_AtlasTextureIndex].Resize(m_AtlasWidth, m_AtlasHeight);
                FontEngine.ResetAtlasTexture(m_AtlasTextures[m_AtlasTextureIndex]);
            }

            //FontEngine.RenderGlyphsToTexture(m_GlyphsToRender, m_AtlasPadding, m_AtlasRenderMode, m_AtlasTextures[m_AtlasTextureIndex]);

            // Apply changes to atlas texture
            m_AtlasTextures[m_AtlasTextureIndex].Apply(false, false);

            // Add glyphs that were successfully packed to the glyph table.
            //for (int i = 0; i < m_GlyphsToRender.Count /* m_GlyphsPacked.Count */; i++)
            //{
            //    Glyph glyph = m_GlyphsToRender[i]; // m_GlyphsPacked[i];

            //    // Update atlas texture index
            //    glyph.atlasIndex = m_AtlasTextureIndex;

            //    m_GlyphTable.Add(glyph);
            //    m_GlyphLookupDictionary.Add(glyph.index, glyph);
            //}

            // Clear list of glyphs
            //m_GlyphsPacked.Clear();
            //m_GlyphsToRender.Clear();

            // Add any remaining glyphs into new atlas texture if multi texture support if enabled.
            //if (m_GlyphsToPack.Count > 0)
            //{
                /*
                // Create new atlas texture
                Texture2D tex = new Texture2D(m_AtlasWidth, m_AtlasHeight, TextureFormat.Alpha8, false, true);
                tex.SetPixels32(new Color32[m_AtlasWidth * m_AtlasHeight]);
                tex.Apply();

                m_AtlasTextureIndex++;

                if (m_AtlasTextures.Length == m_AtlasTextureIndex)
                    Array.Resize(ref m_AtlasTextures, Mathf.NextPowerOfTwo(m_AtlasTextureIndex + 1));

                m_AtlasTextures[m_AtlasTextureIndex] = tex;
                */
            //}

            #if UNITY_EDITOR
            // Makes the changes to the font asset persistent.
            //SortAllTables();
            TMP_EditorResourceManager.RegisterResourceForUpdate(this);
            #endif
        }

        /// <summary>
        ///
        /// </summary>
        internal void UpdateGlyphAdjustmentRecords()
        {
            Profiler.BeginSample("TMP.UpdateGlyphAdjustmentRecords");

            // TODO: This copying of glyph index from list to array is temporary and will be replaced once an updated version of the FontEngine is released.
            CopyListDataToArray(m_GlyphIndexList, ref k_GlyphIndexArray);

            // Get glyph pair adjustment records from font file.
            GlyphPairAdjustmentRecord[] pairAdjustmentRecords = FontEngine.GetGlyphPairAdjustmentTable(k_GlyphIndexArray);
            // TODO: The GetGlyphPairAdjustmentTable will be replaced by the more efficient GetGlyphPairAdjustmentRecords once the updated version of the FontEngine is released.
            //GlyphPairAdjustmentRecord[] pairAdjustmentRecords = FontEngine.GetGlyphPairAdjustmentRecords(m_GlyphIndexListNewlyAdded, m_GlyphIndexList);

            // Clear newly added glyph list
            m_GlyphIndexListNewlyAdded.Clear();

            if (pairAdjustmentRecords == null || pairAdjustmentRecords.Length == 0)
            {
                Profiler.EndSample();
                return;
            }

            if (m_FontFeatureTable == null)
                m_FontFeatureTable = new TMP_FontFeatureTable();

            for (int i = 0; i < pairAdjustmentRecords.Length && pairAdjustmentRecords[i].firstAdjustmentRecord.glyphIndex != 0; i++)
            {
                uint pairKey = pairAdjustmentRecords[i].secondAdjustmentRecord.glyphIndex << 16 | pairAdjustmentRecords[i].firstAdjustmentRecord.glyphIndex;

                // Check if table already contains a pair adjustment record for this key.
                if (m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.ContainsKey(pairKey))
                    continue;

                TMP_GlyphPairAdjustmentRecord record = new TMP_GlyphPairAdjustmentRecord(pairAdjustmentRecords[i]);

                m_FontFeatureTable.m_GlyphPairAdjustmentRecords.Add(record);
                m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.Add(pairKey, record);
            }

            Profiler.EndSample();
        }

        /// <summary>
        /// Function used for debugging and performance testing.
        /// </summary>
        /// <param name="glyphIndexes"></param>
        internal void UpdateGlyphAdjustmentRecords(uint[] glyphIndexes)
        {
            Profiler.BeginSample("TMP.UpdateGlyphAdjustmentRecords");

            // Get glyph pair adjustment records from font file.
            GlyphPairAdjustmentRecord[] pairAdjustmentRecords = FontEngine.GetGlyphPairAdjustmentTable(glyphIndexes);

            // Clear newly added glyph list
            //m_GlyphIndexListNewlyAdded.Clear();

            if (pairAdjustmentRecords == null || pairAdjustmentRecords.Length == 0)
            {
                Profiler.EndSample();
                return;
            }

            if (m_FontFeatureTable == null)
                m_FontFeatureTable = new TMP_FontFeatureTable();

            for (int i = 0; i < pairAdjustmentRecords.Length && pairAdjustmentRecords[i].firstAdjustmentRecord.glyphIndex != 0; i++)
            {
                uint pairKey = pairAdjustmentRecords[i].secondAdjustmentRecord.glyphIndex << 16 | pairAdjustmentRecords[i].firstAdjustmentRecord.glyphIndex;

                // Check if table already contains a pair adjustment record for this key.
                if (m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.ContainsKey(pairKey))
                    continue;

                TMP_GlyphPairAdjustmentRecord record = new TMP_GlyphPairAdjustmentRecord(pairAdjustmentRecords[i]);

                m_FontFeatureTable.m_GlyphPairAdjustmentRecords.Add(record);
                m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.Add(pairKey, record);
            }

            Profiler.EndSample();
        }

        /// <summary>
        /// Function requires an update to the TextCore:FontEngine
        /// </summary>
        /// <param name="glyphIndexes"></param>
        internal void UpdateGlyphAdjustmentRecords(List<uint> glyphIndexes)
        {
            /*
            Profiler.BeginSample("TMP.UpdateGlyphAdjustmentRecords");

            // Get glyph pair adjustment records from font file.
            int recordCount;
            GlyphPairAdjustmentRecord[] pairAdjustmentRecords = FontEngine.GetGlyphPairAdjustmentRecords(glyphIndexes, out recordCount);

            // Clear newly added glyph list
            //m_GlyphIndexListNewlyAdded.Clear();

            if (pairAdjustmentRecords == null || pairAdjustmentRecords.Length == 0)
            {
                Profiler.EndSample();
                return;
            }

            if (m_FontFeatureTable == null)
                m_FontFeatureTable = new TMP_FontFeatureTable();

            for (int i = 0; i < pairAdjustmentRecords.Length && pairAdjustmentRecords[i].firstAdjustmentRecord.glyphIndex != 0; i++)
            {
                uint pairKey = pairAdjustmentRecords[i].secondAdjustmentRecord.glyphIndex << 16 | pairAdjustmentRecords[i].firstAdjustmentRecord.glyphIndex;

                // Check if table already contains a pair adjustment record for this key.
                if (m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.ContainsKey(pairKey))
                    continue;

                TMP_GlyphPairAdjustmentRecord record = new TMP_GlyphPairAdjustmentRecord(pairAdjustmentRecords[i]);

                m_FontFeatureTable.m_GlyphPairAdjustmentRecords.Add(record);
                m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.Add(pairKey, record);
            }

            #if UNITY_EDITOR
            m_FontFeatureTable.SortGlyphPairAdjustmentRecords();
            #endif

            Profiler.EndSample();
            */
        }

        /// <summary>
        /// Function requires an update to the TextCore:FontEngine
        /// </summary>
        /// <param name="newGlyphIndexes"></param>
        /// <param name="allGlyphIndexes"></param>
        internal void UpdateGlyphAdjustmentRecords(List<uint> newGlyphIndexes, List<uint> allGlyphIndexes)
        {
            /*
            Profiler.BeginSample("TMP.UpdateGlyphAdjustmentRecords");

            // Get glyph pair adjustment records from font file.
            GlyphPairAdjustmentRecord[] pairAdjustmentRecords = FontEngine.GetGlyphPairAdjustmentRecords(newGlyphIndexes, allGlyphIndexes);

            // Clear newly added glyph list
            m_GlyphIndexListNewlyAdded.Clear();

            if (pairAdjustmentRecords == null || pairAdjustmentRecords.Length == 0)
            {
                Profiler.EndSample();
                return;
            }

            if (m_FontFeatureTable == null)
                m_FontFeatureTable = new TMP_FontFeatureTable();

            for (int i = 0; i < pairAdjustmentRecords.Length && pairAdjustmentRecords[i].firstAdjustmentRecord.glyphIndex != 0; i++)
            {
                uint pairKey = pairAdjustmentRecords[i].secondAdjustmentRecord.glyphIndex << 16 | pairAdjustmentRecords[i].firstAdjustmentRecord.glyphIndex;

                // Check if table already contains a pair adjustment record for this key.
                if (m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.ContainsKey(pairKey))
                    continue;

                TMP_GlyphPairAdjustmentRecord record = new TMP_GlyphPairAdjustmentRecord(pairAdjustmentRecords[i]);

                m_FontFeatureTable.m_GlyphPairAdjustmentRecords.Add(record);
                m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.Add(pairKey, record);
            }

            #if UNITY_EDITOR
            m_FontFeatureTable.SortGlyphPairAdjustmentRecords();
            #endif

            Profiler.EndSample();
            */
        }

        /// <summary>
        /// Internal method to copy generic list data to generic array of the same type.
        /// </summary>
        /// <param name="srcList">Source</param>
        /// <param name="dstArray">Destination</param>
        /// <typeparam name="T">Element type</typeparam>
        void CopyListDataToArray<T>(List<T> srcList, ref T[] dstArray)
        {
            int size = srcList.Count;

            // Make sure destination array is appropriately sized.
            if (dstArray == null)
                dstArray = new T[size];
            else
                Array.Resize(ref dstArray, size);

            for (int i = 0; i < size; i++)
                dstArray[i] = srcList[i];
        }

        /// <summary>
        /// Clears font asset data including the glyph and character tables and textures.
        /// Function might be changed to Internal and only used in tests.
        /// </summary>
        /// <param name="setAtlasSizeToZero">Will set the atlas texture size to zero width and height if true.</param>
        public void ClearFontAssetData(bool setAtlasSizeToZero = false)
        {
            Profiler.BeginSample("TMP.ClearFontAssetData");

            #if UNITY_EDITOR
            // Record full object undo in the Editor.
            //UnityEditor.Undo.RecordObjects(new UnityEngine.Object[] { this, this.atlasTexture }, "Resetting Font Asset");
            #endif

            // Clear glyph, character and font feature tables
            ClearFontAssetTables();

            // Clear atlas textures
            ClearAtlasTextures(setAtlasSizeToZero);

            ReadFontAssetDefinition();

            //TMP_ResourceManager.RebuildFontAssetCache(instanceID);

            #if UNITY_EDITOR
            // Makes the changes to the font asset persistent.
            TMP_EditorResourceManager.RegisterResourceForUpdate(this);
            #endif

            Profiler.EndSample();
        }

        /// <summary>
        ///
        /// </summary>
        internal void UpdateFontAssetData()
        {
            Profiler.BeginSample("TMP.UpdateFontAssetData");

            // Get list of all characters currently contained in the font asset.
            uint[] unicodeCharacters = new uint[m_CharacterTable.Count];

            for (int i = 0; i < m_CharacterTable.Count; i++)
                unicodeCharacters[i] = m_CharacterTable[i].unicode;

            // Clear glyph, character and font feature tables
            ClearFontAssetTables();

            // Clear atlas textures
            ClearAtlasTextures(true);

            ReadFontAssetDefinition();

            //TMP_ResourceManager.RebuildFontAssetCache(instanceID);

            // Add existing glyphs and characters back in the font asset (if any)
            if (unicodeCharacters.Length > 0)
                TryAddCharacters(unicodeCharacters, true);

            Profiler.EndSample();
        }

        /// <summary>
        ///
        /// </summary>
        internal void ClearFontAssetTables()
        {
            // Clear glyph and character tables
            if (m_GlyphTable != null)
                m_GlyphTable.Clear();

            if (m_CharacterTable != null)
                m_CharacterTable.Clear();

            // Clear glyph rectangles
            if (m_UsedGlyphRects != null)
                m_UsedGlyphRects.Clear();

            if (m_FreeGlyphRects != null)
            {
                int packingModifier = ((GlyphRasterModes)m_AtlasRenderMode & GlyphRasterModes.RASTER_MODE_BITMAP) == GlyphRasterModes.RASTER_MODE_BITMAP ? 0 : 1;
                m_FreeGlyphRects.Clear();
                m_FreeGlyphRects.Add(new GlyphRect(0, 0, m_AtlasWidth - packingModifier, m_AtlasHeight - packingModifier));
            }

            if (m_GlyphsToRender != null)
                m_GlyphsToRender.Clear();

            if (m_GlyphsRendered != null)
                m_GlyphsRendered.Clear();

            // Clear Glyph Adjustment Table
            if (m_FontFeatureTable != null && m_FontFeatureTable.m_GlyphPairAdjustmentRecords != null)
                m_FontFeatureTable.glyphPairAdjustmentRecords.Clear();
        }

        /// <summary>
        /// Internal function to clear all atlas textures.
        /// </summary>
        /// <param name="setAtlasSizeToZero">Set main atlas texture size to zero if true.</param>
        internal void ClearAtlasTextures(bool setAtlasSizeToZero = false)
        {
            m_AtlasTextureIndex = 0;

            // Return if we don't have any atlas textures
            if (m_AtlasTextures == null)
                return;

            // Clear all atlas textures
            for (int i = 0; i < m_AtlasTextures.Length; i++)
            {
                Texture2D texture = m_AtlasTextures[i];

                if (i > 0 && texture != null)
                {
                    DestroyImmediate(texture, true);

                    #if UNITY_EDITOR
                    if (UnityEditor.EditorUtility.IsPersistent(this))
                        TMP_EditorResourceManager.RegisterResourceForReimport(this);
                    #endif
                }

                if (texture == null)
                    continue;

                // TODO: Need texture to be readable.
                if (m_AtlasTextures[i].isReadable == false)
                {
                    #if UNITY_EDITOR
                    FontEngineEditorUtilities.SetAtlasTextureIsReadable(m_AtlasTextures[i], true);
                    #endif
                }

                if (setAtlasSizeToZero)
                {
                    texture.Resize(0, 0, TextureFormat.Alpha8, false);
                }
                else if (texture.width != m_AtlasWidth || texture.height != m_AtlasHeight)
                {
                    texture.Resize(m_AtlasWidth, m_AtlasHeight, TextureFormat.Alpha8, false);
                }

                // Clear texture atlas
                FontEngine.ResetAtlasTexture(texture);
                texture.Apply();

                if (i == 0)
                    m_AtlasTexture = texture;

                m_AtlasTextures[i] = texture;
            }
        }

        /// <summary>
        /// Internal method used to upgrade font asset to support Dynamic SDF.
        /// </summary>
        internal void UpgradeFontAsset()
        {
            m_Version = "1.1.0";

            Debug.Log("Upgrading font asset [" + this.name + "] to version " + m_Version + ".", this);

            m_FaceInfo.familyName = m_fontInfo.Name;
            m_FaceInfo.styleName = string.Empty;

            m_FaceInfo.pointSize = (int)m_fontInfo.PointSize;
            m_FaceInfo.scale = m_fontInfo.Scale;

            m_FaceInfo.lineHeight = m_fontInfo.LineHeight;
            m_FaceInfo.ascentLine = m_fontInfo.Ascender;
            m_FaceInfo.capLine = m_fontInfo.CapHeight;
            m_FaceInfo.meanLine = m_fontInfo.CenterLine;
            m_FaceInfo.baseline = m_fontInfo.Baseline;
            m_FaceInfo.descentLine = m_fontInfo.Descender;

            m_FaceInfo.superscriptOffset = m_fontInfo.SuperscriptOffset;
            m_FaceInfo.superscriptSize = m_fontInfo.SubSize;
            m_FaceInfo.subscriptOffset = m_fontInfo.SubscriptOffset;
            m_FaceInfo.subscriptSize = m_fontInfo.SubSize;

            m_FaceInfo.underlineOffset = m_fontInfo.Underline;
            m_FaceInfo.underlineThickness = m_fontInfo.UnderlineThickness;
            m_FaceInfo.strikethroughOffset = m_fontInfo.strikethrough;
            m_FaceInfo.strikethroughThickness = m_fontInfo.strikethroughThickness;

            m_FaceInfo.tabWidth = m_fontInfo.TabWidth;

            if (m_AtlasTextures == null || m_AtlasTextures.Length == 0)
                m_AtlasTextures = new Texture2D[1];

            m_AtlasTextures[0] = atlas;

            //atlas = null;

            m_AtlasWidth = (int)m_fontInfo.AtlasWidth;
            m_AtlasHeight = (int)m_fontInfo.AtlasHeight;
            m_AtlasPadding = (int)m_fontInfo.Padding;

            switch(m_CreationSettings.renderMode)
            {
                case 0:
                    m_AtlasRenderMode = GlyphRenderMode.SMOOTH_HINTED;
                    break;
                case 1:
                    m_AtlasRenderMode = GlyphRenderMode.SMOOTH;
                    break;
                case 2:
                    m_AtlasRenderMode = GlyphRenderMode.RASTER_HINTED;
                    break;
                case 3:
                    m_AtlasRenderMode = GlyphRenderMode.RASTER;
                    break;
                case 6:
                    m_AtlasRenderMode = GlyphRenderMode.SDF16;
                    break;
                case 7:
                    m_AtlasRenderMode = GlyphRenderMode.SDF32;
                    break;
            }

            //m_fontInfo = null;

            // Convert font weight table
            if (fontWeights != null && fontWeights.Length > 0)
            {
                m_FontWeightTable[4] = fontWeights[4];
                m_FontWeightTable[7] = fontWeights[7];

                // Clear old fontWeight
                //fontWeights = null;
            }

            // Convert font fallbacks
            if (fallbackFontAssets != null && fallbackFontAssets.Count > 0)
            {
                if (m_FallbackFontAssetTable == null)
                    m_FallbackFontAssetTable = new List<TMP_FontAsset>(fallbackFontAssets.Count);

                for (int i = 0; i < fallbackFontAssets.Count; i++)
                    m_FallbackFontAssetTable.Add(fallbackFontAssets[i]);

                // Clear old fallbackFontAssets list
                //fallbackFontAssets = null;
            }

            // Check if font asset creation settings contains a reference to the source font file GUID
            if (m_CreationSettings.sourceFontFileGUID != null || m_CreationSettings.sourceFontFileGUID != string.Empty)
            {
                m_SourceFontFileGUID = m_CreationSettings.sourceFontFileGUID;
            }
            else
            {
                Debug.LogWarning("Font asset [" + this.name + "] doesn't have a reference to its source font file. Please assign the appropriate source font file for this asset in the Font Atlas & Material section of font asset inspector.", this);
            }

            // Convert legacy glyph and character tables to new format
            m_GlyphTable.Clear();
            m_CharacterTable.Clear();

            //#if UNITY_EDITOR
            // TODO: This is causing a crash in Unity and related to AssetDatabase.LoadAssetAtPath and Resources.Load()
            // Load font to allow us to get the glyph index.
            //string path = UnityEditor.AssetDatabase.GUIDToAssetPath(m_SourceFontFileGUID);

            //if (path != string.Empty)
            //{
                //m_SourceFontFile_EditorRef = UnityEditor.AssetDatabase.LoadAssetAtPath<Font>(path);
                //FontEngine.LoadFontFace(m_SourceFontFile_EditorRef);
            //}
            //#endif

            bool isSpaceCharacterPresent = false;
            for (int i = 0; i < m_glyphInfoList.Count; i++)
            {
                TMP_Glyph oldGlyph = m_glyphInfoList[i];

                Glyph glyph = new Glyph();

                uint glyphIndex = (uint)i + 1;

                //#if UNITY_EDITOR
                //if (m_SourceFontFile_EditorRef != null)
                //    glyphIndex = FontEngine.GetGlyphIndex((uint)oldGlyph.id);
                //#endif

                glyph.index = glyphIndex;
                glyph.glyphRect = new GlyphRect((int)oldGlyph.x, m_AtlasHeight - (int)(oldGlyph.y + oldGlyph.height + 0.5f), (int)(oldGlyph.width + 0.5f), (int)(oldGlyph.height + 0.5f));
                glyph.metrics = new GlyphMetrics(oldGlyph.width, oldGlyph.height, oldGlyph.xOffset, oldGlyph.yOffset, oldGlyph.xAdvance);
                glyph.scale = oldGlyph.scale;
                glyph.atlasIndex = 0;

                m_GlyphTable.Add(glyph);

                TMP_Character character = new TMP_Character((uint)oldGlyph.id, this, glyph);

                if (oldGlyph.id == 32)
                    isSpaceCharacterPresent = true;

                m_CharacterTable.Add(character);
            }

            // Special handling for the synthesized space character
            if (!isSpaceCharacterPresent)
            {
                Debug.Log("Synthesizing Space for [" + this.name + "]");
                Glyph glyph = new Glyph(0, new GlyphMetrics(0, 0, 0, 0, m_FaceInfo.ascentLine / 5), GlyphRect.zero, 1.0f, 0);
                m_GlyphTable.Add(glyph);
                m_CharacterTable.Add(new TMP_Character(32, this, glyph));
            }

            // Clear legacy glyph info list.
            //m_glyphInfoList.Clear();

            ReadFontAssetDefinition();

            // Convert atlas textures data to new format
            // TODO
            #if UNITY_EDITOR
            if (UnityEditor.EditorUtility.IsPersistent(this))
            {
                TMP_EditorResourceManager.RegisterResourceForUpdate(this);
            }
            #endif
        }

        /// <summary>
        ///
        /// </summary>
        void UpgradeGlyphAdjustmentTableToFontFeatureTable()
        {
            Debug.Log("Upgrading font asset [" + this.name + "] Glyph Adjustment Table.", this);

            if (m_FontFeatureTable == null)
                m_FontFeatureTable = new TMP_FontFeatureTable();

            int pairCount = m_KerningTable.kerningPairs.Count;

            m_FontFeatureTable.m_GlyphPairAdjustmentRecords = new List<TMP_GlyphPairAdjustmentRecord>(pairCount);

            for (int i = 0; i < pairCount; i++)
            {
                KerningPair pair = m_KerningTable.kerningPairs[i];

                uint firstGlyphIndex = 0;
                TMP_Character firstCharacter;

                if (m_CharacterLookupDictionary.TryGetValue(pair.firstGlyph, out firstCharacter))
                    firstGlyphIndex = firstCharacter.glyphIndex;

                uint secondGlyphIndex = 0;
                TMP_Character secondCharacter;

                if (m_CharacterLookupDictionary.TryGetValue(pair.secondGlyph, out secondCharacter))
                    secondGlyphIndex = secondCharacter.glyphIndex;

                TMP_GlyphAdjustmentRecord firstAdjustmentRecord = new TMP_GlyphAdjustmentRecord(firstGlyphIndex, new TMP_GlyphValueRecord(pair.firstGlyphAdjustments.xPlacement, pair.firstGlyphAdjustments.yPlacement, pair.firstGlyphAdjustments.xAdvance, pair.firstGlyphAdjustments.yAdvance));
                TMP_GlyphAdjustmentRecord secondAdjustmentRecord = new TMP_GlyphAdjustmentRecord(secondGlyphIndex, new TMP_GlyphValueRecord(pair.secondGlyphAdjustments.xPlacement, pair.secondGlyphAdjustments.yPlacement, pair.secondGlyphAdjustments.xAdvance, pair.secondGlyphAdjustments.yAdvance));
                TMP_GlyphPairAdjustmentRecord record = new TMP_GlyphPairAdjustmentRecord(firstAdjustmentRecord, secondAdjustmentRecord);

                m_FontFeatureTable.m_GlyphPairAdjustmentRecords.Add(record);
            }

            // TODO: Should clear legacy kerning table.
            m_KerningTable.kerningPairs = null;
            m_KerningTable = null;

            #if UNITY_EDITOR
            if (UnityEditor.EditorUtility.IsPersistent(this))
            {
                TMP_EditorResourceManager.RegisterResourceForUpdate(this);
            }
            #endif
        }

    }
}
