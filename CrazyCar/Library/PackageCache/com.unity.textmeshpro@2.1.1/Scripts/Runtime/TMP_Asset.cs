using System;
using UnityEngine;

namespace TMPro
{

    // Base class inherited by the various TextMeshPro Assets.
    [Serializable]
    public abstract class TMP_Asset : ScriptableObject
    {
        /// <summary>
        /// Instance ID of the TMP Asset
        /// </summary>
        public int instanceID
        {
            get
            {
                if (m_InstanceID == 0)
                    m_InstanceID = GetInstanceID();

                return m_InstanceID;
            }
        }
        private int m_InstanceID;

        /// <summary>
        /// HashCode based on the name of the asset.
        /// </summary>
        public int hashCode;

        /// <summary>
        /// The material used by this asset.
        /// </summary>
        public Material material;

        /// <summary>
        /// HashCode based on the name of the material assigned to this asset.
        /// </summary>
        public int materialHashCode;

    }
}
