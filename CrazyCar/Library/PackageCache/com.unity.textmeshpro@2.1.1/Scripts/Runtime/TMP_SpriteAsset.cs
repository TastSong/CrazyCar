using UnityEngine;
using UnityEngine.TextCore;
using System.Collections.Generic;
using System.Linq;


namespace TMPro
{
    [ExcludeFromPresetAttribute]
    public class TMP_SpriteAsset : TMP_Asset
    {
        internal Dictionary<int, int> m_NameLookup;
        internal Dictionary<uint, int> m_GlyphIndexLookup;

        /// <summary>
        /// The version of the sprite asset class.
        /// Version 1.1.0 updates the asset data structure to be compatible with new font asset structure.
        /// </summary>
        public string version
        {
            get { return m_Version; }
            internal set { m_Version = value; }
        }
        [SerializeField]
        private string m_Version;

        /// <summary>
        /// Information about the sprite asset's face.
        /// </summary>
        public FaceInfo faceInfo
        {
            get { return m_FaceInfo; }
            internal set { m_FaceInfo = value; }
        }
        [SerializeField]
        internal FaceInfo m_FaceInfo;

        // The texture which contains the sprites.
        public Texture spriteSheet;

        /// <summary>
        ///
        /// </summary>
        public List<TMP_SpriteCharacter> spriteCharacterTable
        {
            get
            {
                if (m_GlyphIndexLookup == null)
                    UpdateLookupTables();

                return m_SpriteCharacterTable;
            }
            internal set { m_SpriteCharacterTable = value; }
        }
        [SerializeField]
        private List<TMP_SpriteCharacter> m_SpriteCharacterTable = new List<TMP_SpriteCharacter>();


        /// <summary>
        /// Dictionary used to lookup sprite characters by their unicode value.
        /// </summary>
        public Dictionary<uint, TMP_SpriteCharacter> spriteCharacterLookupTable
        {
            get
            {
                if (m_SpriteCharacterLookup == null)
                    UpdateLookupTables();

                return m_SpriteCharacterLookup;
            }
            internal set { m_SpriteCharacterLookup = value; }
        }
        internal Dictionary<uint, TMP_SpriteCharacter> m_SpriteCharacterLookup;

        public List<TMP_SpriteGlyph> spriteGlyphTable
        {
            get { return m_SpriteGlyphTable; }
            internal set { m_SpriteGlyphTable = value; }
        }
        [SerializeField]
        private List<TMP_SpriteGlyph> m_SpriteGlyphTable = new List<TMP_SpriteGlyph>();

        internal Dictionary<uint, TMP_SpriteGlyph> m_SpriteGlyphLookup;

        // List which contains the SpriteInfo for the sprites contained in the sprite sheet.
        public List<TMP_Sprite> spriteInfoList;

        /// <summary>
        /// List which contains the Fallback font assets for this font.
        /// </summary>
        [SerializeField]
        public List<TMP_SpriteAsset> fallbackSpriteAssets;

        internal bool m_IsSpriteAssetLookupTablesDirty = false;


        void Awake()
        {
            // Check version number of sprite asset to see if it needs to be upgraded.
            if (this.material != null && string.IsNullOrEmpty(m_Version))
                UpgradeSpriteAsset();
        }


        /// <summary>
        /// Create a material for the sprite asset.
        /// </summary>
        /// <returns></returns>
        Material GetDefaultSpriteMaterial()
        {
            //isEditingAsset = true;
            ShaderUtilities.GetShaderPropertyIDs();

            // Add a new material
            Shader shader = Shader.Find("TextMeshPro/Sprite");
            Material tempMaterial = new Material(shader);
            tempMaterial.SetTexture(ShaderUtilities.ID_MainTex, spriteSheet);
            tempMaterial.hideFlags = HideFlags.HideInHierarchy;

            #if UNITY_EDITOR
            UnityEditor.AssetDatabase.AddObjectToAsset(tempMaterial, this);
            UnityEditor.AssetDatabase.ImportAsset(UnityEditor.AssetDatabase.GetAssetPath(this));
            #endif
            //isEditingAsset = false;

            return tempMaterial;
        }


        /// <summary>
        /// Function to update the sprite name and unicode lookup tables.
        /// This function should be called when a sprite's name or unicode value changes or when a new sprite is added.
        /// </summary>
        public void UpdateLookupTables()
        {
            //Debug.Log("Updating [" + this.name + "] Lookup tables.");

            // Check version number of sprite asset to see if it needs to be upgraded.
            if (this.material != null && string.IsNullOrEmpty(m_Version))
                UpgradeSpriteAsset();

            // Initialize / Clear glyph index lookup dictionary.
            if (m_GlyphIndexLookup == null)
                m_GlyphIndexLookup = new Dictionary<uint, int>();
            else
                m_GlyphIndexLookup.Clear();

            //
            if (m_SpriteGlyphLookup == null)
                m_SpriteGlyphLookup = new Dictionary<uint, TMP_SpriteGlyph>();
            else
                m_SpriteGlyphLookup.Clear();

            // Initialize SpriteGlyphLookup
            for (int i = 0; i < m_SpriteGlyphTable.Count; i++)
            {
                TMP_SpriteGlyph spriteGlyph = m_SpriteGlyphTable[i];
                uint glyphIndex = spriteGlyph.index;

                if (m_GlyphIndexLookup.ContainsKey(glyphIndex) == false)
                    m_GlyphIndexLookup.Add(glyphIndex, i);

                if (m_SpriteGlyphLookup.ContainsKey(glyphIndex) == false)
                    m_SpriteGlyphLookup.Add(glyphIndex, spriteGlyph);
            }

            // Initialize name lookup
            if (m_NameLookup == null)
                m_NameLookup = new Dictionary<int, int>();
            else
                m_NameLookup.Clear();


            // Initialize character lookup
            if (m_SpriteCharacterLookup == null)
                m_SpriteCharacterLookup = new Dictionary<uint, TMP_SpriteCharacter>();
            else
                m_SpriteCharacterLookup.Clear();


            // Populate Sprite Character lookup tables
            for (int i = 0; i < m_SpriteCharacterTable.Count; i++)
            {
                TMP_SpriteCharacter spriteCharacter = m_SpriteCharacterTable[i];

                // Make sure sprite character is valid
                if (spriteCharacter == null)
                    continue;

                uint glyphIndex = spriteCharacter.glyphIndex;

                // Lookup the glyph for this character
                if (m_SpriteGlyphLookup.ContainsKey(glyphIndex) == false)
                    continue;

                // Assign glyph and text asset to this character
                spriteCharacter.glyph = m_SpriteGlyphLookup[glyphIndex];
                spriteCharacter.textAsset = this;

                int nameHashCode = m_SpriteCharacterTable[i].hashCode;

                if (m_NameLookup.ContainsKey(nameHashCode) == false)
                    m_NameLookup.Add(nameHashCode, i);

                uint unicode = m_SpriteCharacterTable[i].unicode;

                if (unicode != 0xFFFE && m_SpriteCharacterLookup.ContainsKey(unicode) == false)
                    m_SpriteCharacterLookup.Add(unicode, spriteCharacter);
            }

            m_IsSpriteAssetLookupTablesDirty = false;
        }


        /// <summary>
        /// Function which returns the sprite index using the hashcode of the name
        /// </summary>
        /// <param name="hashCode"></param>
        /// <returns></returns>
        public int GetSpriteIndexFromHashcode(int hashCode)
        {
            if (m_NameLookup == null)
                UpdateLookupTables();

            int index;

            if (m_NameLookup.TryGetValue(hashCode, out index))
                return index;

            return -1;
        }


        /// <summary>
        /// Returns the index of the sprite for the given unicode value.
        /// </summary>
        /// <param name="unicode"></param>
        /// <returns></returns>
        public int GetSpriteIndexFromUnicode (uint unicode)
        {
            if (m_SpriteCharacterLookup == null)
                UpdateLookupTables();

            TMP_SpriteCharacter spriteCharacter;

            if (m_SpriteCharacterLookup.TryGetValue(unicode, out spriteCharacter))
                return (int)spriteCharacter.glyphIndex;

            return -1;
        }


        /// <summary>
        /// Returns the index of the sprite for the given name.
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public int GetSpriteIndexFromName (string name)
        {
            if (m_NameLookup == null)
                UpdateLookupTables();

            int hashCode = TMP_TextUtilities.GetSimpleHashCode(name);

            return GetSpriteIndexFromHashcode(hashCode);
        }


        /// <summary>
        /// Used to keep track of which Sprite Assets have been searched.
        /// </summary>
        private static HashSet<int> k_searchedSpriteAssets;

        /// <summary>
        /// Search through the given sprite asset and its fallbacks for the specified sprite matching the given unicode character.
        /// </summary>
        /// <param name="spriteAsset">The font asset to search for the given character.</param>
        /// <param name="unicode">The character to find.</param>
        /// <param name="glyph">out parameter containing the glyph for the specified character (if found).</param>
        /// <returns></returns>
        public static TMP_SpriteAsset SearchForSpriteByUnicode(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
        {
            // Check to make sure sprite asset is not null
            if (spriteAsset == null) { spriteIndex = -1; return null; }

            // Get sprite index for the given unicode
            spriteIndex = spriteAsset.GetSpriteIndexFromUnicode(unicode);
            if (spriteIndex != -1)
                return spriteAsset;

            // Initialize list to track instance of Sprite Assets that have already been searched.
            if (k_searchedSpriteAssets == null)
                k_searchedSpriteAssets = new HashSet<int>();
            else
                k_searchedSpriteAssets.Clear();

            // Get instance ID of sprite asset and add to list.
            int id = spriteAsset.GetInstanceID();
            k_searchedSpriteAssets.Add(id);

            // Search potential fallback sprite assets if includeFallbacks is true.
            if (includeFallbacks && spriteAsset.fallbackSpriteAssets != null && spriteAsset.fallbackSpriteAssets.Count > 0)
                return SearchForSpriteByUnicodeInternal(spriteAsset.fallbackSpriteAssets, unicode, true, out spriteIndex);

            // Search default sprite asset potentially assigned in the TMP Settings.
            if (includeFallbacks && TMP_Settings.defaultSpriteAsset != null)
                return SearchForSpriteByUnicodeInternal(TMP_Settings.defaultSpriteAsset, unicode, true, out spriteIndex);

            spriteIndex = -1;
            return null;
        }


        /// <summary>
        /// Search through the given list of sprite assets and fallbacks for a sprite whose unicode value matches the target unicode.
        /// </summary>
        /// <param name="spriteAssets"></param>
        /// <param name="unicode"></param>
        /// <param name="includeFallbacks"></param>
        /// <param name="spriteIndex"></param>
        /// <returns></returns>
        private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(List<TMP_SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, out int spriteIndex)
        {
            for (int i = 0; i < spriteAssets.Count; i++)
            {
                TMP_SpriteAsset temp = spriteAssets[i];
                if (temp == null) continue;

                int id = temp.GetInstanceID();

                // Skip sprite asset if it has already been searched.
                if (k_searchedSpriteAssets.Add(id) == false)
                    continue;

                temp = SearchForSpriteByUnicodeInternal(temp, unicode, includeFallbacks, out spriteIndex);

                if (temp != null)
                    return temp;
            }

            spriteIndex = -1;
            return null;
        }


        /// <summary>
        /// Search the given sprite asset and fallbacks for a sprite whose unicode value matches the target unicode.
        /// </summary>
        /// <param name="spriteAsset"></param>
        /// <param name="unicode"></param>
        /// <param name="includeFallbacks"></param>
        /// <param name="spriteIndex"></param>
        /// <returns></returns>
        private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
        {
            // Get sprite index for the given unicode
            spriteIndex = spriteAsset.GetSpriteIndexFromUnicode(unicode);

            if (spriteIndex != -1)
                return spriteAsset;

            if (includeFallbacks && spriteAsset.fallbackSpriteAssets != null && spriteAsset.fallbackSpriteAssets.Count > 0)
                return SearchForSpriteByUnicodeInternal(spriteAsset.fallbackSpriteAssets, unicode, true, out spriteIndex);

            spriteIndex = -1;
            return null;
        }


        /// <summary>
        /// Search the given sprite asset and fallbacks for a sprite whose hash code value of its name matches the target hash code.
        /// </summary>
        /// <param name="spriteAsset">The Sprite Asset to search for the given sprite whose name matches the hashcode value</param>
        /// <param name="hashCode">The hash code value matching the name of the sprite</param>
        /// <param name="includeFallbacks">Include fallback sprite assets in the search</param>
        /// <param name="spriteIndex">The index of the sprite matching the provided hash code</param>
        /// <returns>The Sprite Asset that contains the sprite</returns>
        public static TMP_SpriteAsset SearchForSpriteByHashCode(TMP_SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex)
        {
            // Make sure sprite asset is not null
            if (spriteAsset == null) { spriteIndex = -1; return null; }

            spriteIndex = spriteAsset.GetSpriteIndexFromHashcode(hashCode);
            if (spriteIndex != -1)
                return spriteAsset;

            // Initialize or clear list to Sprite Assets that have already been searched.
            if (k_searchedSpriteAssets == null)
                k_searchedSpriteAssets = new HashSet<int>();
            else
                k_searchedSpriteAssets.Clear();

            int id = spriteAsset.instanceID;

            // Add to list of font assets already searched.
            k_searchedSpriteAssets.Add(id);

            TMP_SpriteAsset tempSpriteAsset;

            // Search potential fallbacks assigned to local sprite asset.
            if (includeFallbacks && spriteAsset.fallbackSpriteAssets != null && spriteAsset.fallbackSpriteAssets.Count > 0)
            {
                tempSpriteAsset = SearchForSpriteByHashCodeInternal(spriteAsset.fallbackSpriteAssets, hashCode, true, out spriteIndex);

                if (spriteIndex != -1)
                    return tempSpriteAsset;
            }

            // Search default sprite asset potentially assigned in the TMP Settings.
            if (includeFallbacks && TMP_Settings.defaultSpriteAsset != null)
            {
                tempSpriteAsset = SearchForSpriteByHashCodeInternal(TMP_Settings.defaultSpriteAsset, hashCode, true, out spriteIndex);

                if (spriteIndex != -1)
                    return tempSpriteAsset;
            }

            // Clear search list since we are now looking for the missing sprite character.
            k_searchedSpriteAssets.Clear();

            uint missingSpriteCharacterUnicode = TMP_Settings.missingCharacterSpriteUnicode;

            // Get sprite index for the given unicode
            spriteIndex = spriteAsset.GetSpriteIndexFromUnicode(missingSpriteCharacterUnicode);
            if (spriteIndex != -1)
                return spriteAsset;

            // Add current sprite asset to list of assets already searched.
            k_searchedSpriteAssets.Add(id);

            // Search for the missing sprite character in the local sprite asset and potential fallbacks.
            if (includeFallbacks && spriteAsset.fallbackSpriteAssets != null && spriteAsset.fallbackSpriteAssets.Count > 0)
            {
                tempSpriteAsset = SearchForSpriteByUnicodeInternal(spriteAsset.fallbackSpriteAssets, missingSpriteCharacterUnicode, true, out spriteIndex);

                if (spriteIndex != -1)
                    return tempSpriteAsset;
            }

            // Search for the missing sprite character in the default sprite asset and potential fallbacks.
            if (includeFallbacks && TMP_Settings.defaultSpriteAsset != null)
            {
                tempSpriteAsset = SearchForSpriteByUnicodeInternal(TMP_Settings.defaultSpriteAsset, missingSpriteCharacterUnicode, true, out spriteIndex);
                if (spriteIndex != -1)
                    return tempSpriteAsset;
            }

            spriteIndex = -1;
            return null;
        }


        /// <summary>
        ///  Search through the given list of sprite assets and fallbacks for a sprite whose hash code value of its name matches the target hash code.
        /// </summary>
        /// <param name="spriteAssets"></param>
        /// <param name="hashCode"></param>
        /// <param name="searchFallbacks"></param>
        /// <param name="spriteIndex"></param>
        /// <returns></returns>
        private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(List<TMP_SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, out int spriteIndex)
        {
            // Search through the list of sprite assets
            for (int i = 0; i < spriteAssets.Count; i++)
            {
                TMP_SpriteAsset temp = spriteAssets[i];
                if (temp == null) continue;

                int id = temp.instanceID;

                // Skip sprite asset if it has already been searched.
                if (k_searchedSpriteAssets.Add(id) == false)
                    continue;

                temp = SearchForSpriteByHashCodeInternal(temp, hashCode, searchFallbacks, out spriteIndex);

                if (temp != null)
                    return temp;
            }

            spriteIndex = -1;
            return null;
        }


        /// <summary>
        /// Search through the given sprite asset and fallbacks for a sprite whose hash code value of its name matches the target hash code.
        /// </summary>
        /// <param name="spriteAsset"></param>
        /// <param name="hashCode"></param>
        /// <param name="searchFallbacks"></param>
        /// <param name="spriteIndex"></param>
        /// <returns></returns>
        private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(TMP_SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, out int spriteIndex)
        {
            // Get the sprite for the given hash code.
            spriteIndex = spriteAsset.GetSpriteIndexFromHashcode(hashCode);
            if (spriteIndex != -1)
                return spriteAsset;

            if (searchFallbacks && spriteAsset.fallbackSpriteAssets != null && spriteAsset.fallbackSpriteAssets.Count > 0)
                return SearchForSpriteByHashCodeInternal(spriteAsset.fallbackSpriteAssets, hashCode, true, out spriteIndex);

            spriteIndex = -1;
            return null;
        }


        /// <summary>
        /// Sort the sprite glyph table by glyph index.
        /// </summary>
        public void SortGlyphTable()
        {
            if (m_SpriteGlyphTable == null || m_SpriteGlyphTable.Count == 0) return;

            m_SpriteGlyphTable = m_SpriteGlyphTable.OrderBy(item => item.index).ToList();
        }

        /// <summary>
        /// Sort the sprite character table by Unicode values.
        /// </summary>
        internal void SortCharacterTable()
        {
            if (m_SpriteCharacterTable != null && m_SpriteCharacterTable.Count > 0)
                m_SpriteCharacterTable = m_SpriteCharacterTable.OrderBy(c => c.unicode).ToList();
        }

        /// <summary>
        /// Sort both sprite glyph and character tables.
        /// </summary>
        internal void SortGlyphAndCharacterTables()
        {
            SortGlyphTable();
            SortCharacterTable();
        }


        /// <summary>
        /// Internal method used to upgrade sprite asset.
        /// </summary>
        private void UpgradeSpriteAsset()
        {
            m_Version = "1.1.0";

            Debug.Log("Upgrading sprite asset [" + this.name + "] to version " + m_Version + ".", this);

            // Convert legacy glyph and character tables to new format
            m_SpriteCharacterTable.Clear();
            m_SpriteGlyphTable.Clear();

            for (int i = 0; i < spriteInfoList.Count; i++)
            {
                TMP_Sprite oldSprite = spriteInfoList[i];

                TMP_SpriteGlyph spriteGlyph = new TMP_SpriteGlyph();
                spriteGlyph.index = (uint)i;
                spriteGlyph.sprite = oldSprite.sprite;
                spriteGlyph.metrics = new GlyphMetrics(oldSprite.width, oldSprite.height, oldSprite.xOffset, oldSprite.yOffset, oldSprite.xAdvance);
                spriteGlyph.glyphRect = new GlyphRect((int)oldSprite.x, (int)oldSprite.y, (int)oldSprite.width, (int)oldSprite.height);

                spriteGlyph.scale = 1.0f;
                spriteGlyph.atlasIndex = 0;

                m_SpriteGlyphTable.Add(spriteGlyph);

                TMP_SpriteCharacter spriteCharacter = new TMP_SpriteCharacter();
                spriteCharacter.glyph = spriteGlyph;
                spriteCharacter.unicode = oldSprite.unicode == 0x0 ? 0xFFFE : (uint)oldSprite.unicode;
                spriteCharacter.name = oldSprite.name;
                spriteCharacter.scale = oldSprite.scale;

                m_SpriteCharacterTable.Add(spriteCharacter);
            }

            // Clear legacy glyph info list.
            //spriteInfoList.Clear();

            UpdateLookupTables();

            #if UNITY_EDITOR
            UnityEditor.EditorUtility.SetDirty(this);
            UnityEditor.AssetDatabase.SaveAssets();
            #endif
        }

    }
}
