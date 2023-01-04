using System;
using UnityEngine;

namespace ReadyPlayerMe
{
    public class AvatarProcessor
    {
        public Action<FailureType, string> OnFailed { get; set; }
        
        public void ProcessAvatar(GameObject avatar, OutfitGender gender)
        {
            try
            {
                SetupArmature(avatar);
                SetupAnimator(avatar, gender);
                RenameChildMeshes(avatar);
            }
            catch (Exception e)
            {
                OnFailed?.Invoke(FailureType.AvatarProcessError, $"Avatar postprocess failed. {e.Message}");
            }
        }
        
        #region Setup Armature and Animations
        // Animation avatars
        private const string MASCULINE_ANIMATION_AVATAR_NAME = "AnimationAvatars/MasculineAnimationAvatar";
        private const string FEMININE_ANIMATION_AVATAR_NAME = "AnimationAvatars/FeminineAnimationAvatar";

        // Animation controller
        private const string ANIMATOR_CONTROLLER_NAME = "Avatar Animator";

        // Bone names
        private const string BONE_HIPS = "Hips";
        private const string BONE_ARMATURE = "Armature";
        
        private void SetupArmature(GameObject avatar)
        {
            var armature = new GameObject();
            armature.name = BONE_ARMATURE;
            armature.transform.parent = avatar.transform;

            var hips = avatar.transform.Find(BONE_HIPS);
            hips.parent = armature.transform;
        }

        private void SetupAnimator(GameObject avatar, OutfitGender gender)
        {
            var animationAvatarSource = gender == OutfitGender.Masculine ? MASCULINE_ANIMATION_AVATAR_NAME : FEMININE_ANIMATION_AVATAR_NAME;
            var animationAvatar = Resources.Load<Avatar>(animationAvatarSource);
            var animatorController = Resources.Load<RuntimeAnimatorController>(ANIMATOR_CONTROLLER_NAME);

            var animator = avatar.AddComponent<Animator>();
            animator.runtimeAnimatorController = animatorController;
            animator.avatar = animationAvatar;
            animator.applyRootMotion = true;
        }
        #endregion

        #region Set Component Names
        // Prefix to remove from names for correction
        private const string PREFIX = "Wolf3D_";
        
        private const string AVATAR_PREFIX = "Avatar";
        private const string RENDERER_PREFIX = "Renderer";
        private const string MATERIAL_PREFIX = "Material";
        private const string SKINNED_MESH_PREFIX = "SkinnedMesh";
        
        //Texture property IDs
        private static readonly string[] ShaderProperties = {
            "_MainTex",
            "_BumpMap",
            "_EmissionMap",
            "_OcclusionMap",
            "_MetallicGlossMap"
        };

        /// <summary>
        ///     Name avatar assets for make them easier to view in profiler.
        ///     Naming is 'Avatar_Type_Name'
        /// </summary>
        private void RenameChildMeshes(GameObject avatar)
        {
            var renderers = avatar.GetComponentsInChildren<SkinnedMeshRenderer>();

            foreach (var renderer in renderers)
            {
                var assetName = renderer.name.Replace(PREFIX, "");

                renderer.name = $"{RENDERER_PREFIX}_{assetName}";
                renderer.sharedMaterial.name = $"{MATERIAL_PREFIX}_{assetName}";
                SetTextureNames(renderer, assetName);
                SetMeshName(renderer, assetName);
            }
        }

        /// <summary>
        ///     Set a name for the texture for finding it in the Profiler.
        /// </summary>
        /// <param name="renderer">Renderer to find the texture in.</param>
        /// <param name="assetName">Name of the asset.</param>
        private void SetTextureNames(Renderer renderer, string assetName)
        {
            foreach (var propertyName in ShaderProperties)
            {
                var propertyID = Shader.PropertyToID(propertyName);

                if (renderer.sharedMaterial.HasProperty(propertyID))
                {
                    var texture = renderer.sharedMaterial.GetTexture(propertyID);
                    if (texture != null) texture.name = $"{AVATAR_PREFIX}{propertyName}_{assetName}";
                }
            }
        }

        /// <summary>
        ///     Set a name for the mesh for finding it in the Profiler.
        /// </summary>
        /// <param name="renderer">Renderer to find the mesh in.</param>
        /// <param name="assetName">Name of the asset.</param>
        private void SetMeshName(SkinnedMeshRenderer renderer, string assetName)
        {
            renderer.sharedMesh.name = $"{SKINNED_MESH_PREFIX}_{assetName}";
            renderer.updateWhenOffscreen = true;
        }
        #endregion
    }   
}
