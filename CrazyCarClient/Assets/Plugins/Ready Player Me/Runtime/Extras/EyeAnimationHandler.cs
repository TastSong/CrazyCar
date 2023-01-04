using System;
using UnityEngine;
using System.Collections;
using UnityEngine.Serialization;
using Random = UnityEngine.Random;

namespace ReadyPlayerMe
{
    [DisallowMultipleComponent]
    [AddComponentMenu("Ready Player Me/Eye Animation Handler", 0)]
    public class EyeAnimationHandler : MonoBehaviour
    {
        [SerializeField, Range(0, 1)] 
        private float blinkSpeed = 0.1f;
        public float BlinkSpeed
        {
            get => blinkSpeed;
            set {
                blinkSpeed = value;
                if (Application.isPlaying) Initialize();            
            }
        }
        
        [SerializeField, Range(1, 10)] 
        private float blinkInterval = 3f;
        public float BlinkInterval
        {
            get => blinkSpeed;
            set {
                blinkInterval = value;
                if (Application.isPlaying) Initialize();      
            }
        }

        private WaitForSeconds blinkDelay;
        private Coroutine blinkCoroutine;

        private const int VERTICAL_MARGIN = 15;
        private const int HORIZONTAL_MARGIN = 5;

        private SkinnedMeshRenderer headMesh;
        private const string EYE_BLINK_LEFT_BLEND_SHAPE_NAME = "eyeBlinkLeft";
        private const string EYE_BLINK_RIGHT_BLEND_SHAPE_NAME = "eyeBlinkRight";
        private int eyeBlinkLeftBlendShapeIndex = -1;
        private int eyeBlinkRightBlendShapeIndex = -1;

        private Transform leftEyeBone;
        private const string HALF_BODY_LEFT_EYE_BONE_NAME = "Armature/Hips/Spine/Neck/Head/LeftEye";
        private const string FULL_BODY_LEFT_EYE_BONE_NAME = "Armature/Hips/Spine/Spine1/Spine2/Neck/Head/LeftEye";

        private Transform rightEyeBone;
        private const string HALF_BODY_RIGHT_EYE_BONE_NAME = "Armature/Hips/Spine/Neck/Head/RightEye";
        private const string FULL_BODY_RIGHT_EYE_BONE_NAME = "Armature/Hips/Spine/Spine1/Spine2/Neck/Head/RightEye";
        private const string ARMATURE_HIPS_LEFT_UP_LEG_BONE_NAME = "Armature/Hips/LeftUpLeg";
        private const float EYE_BLINK_VALUE = 100f;

        private bool isFullBody;
        private bool hasEyeBlendShapes;

        private void Start()
        {
            headMesh = gameObject.GetMeshRenderer(MeshType.HeadMesh);
            
            eyeBlinkLeftBlendShapeIndex = headMesh.sharedMesh.GetBlendShapeIndex(EYE_BLINK_LEFT_BLEND_SHAPE_NAME);
            eyeBlinkRightBlendShapeIndex = headMesh.sharedMesh.GetBlendShapeIndex(EYE_BLINK_RIGHT_BLEND_SHAPE_NAME);
            
            hasEyeBlendShapes = (eyeBlinkLeftBlendShapeIndex > -1 && eyeBlinkRightBlendShapeIndex > -1);

            isFullBody = transform.Find(ARMATURE_HIPS_LEFT_UP_LEG_BONE_NAME);
            leftEyeBone = transform.Find(isFullBody ? FULL_BODY_LEFT_EYE_BONE_NAME : HALF_BODY_LEFT_EYE_BONE_NAME);
            rightEyeBone = transform.Find(isFullBody ? FULL_BODY_RIGHT_EYE_BONE_NAME : HALF_BODY_RIGHT_EYE_BONE_NAME);
        }

        private void OnDisable() => CancelInvoke();

        private void OnEnable() => Initialize();

        private void OnDestroy()
        {
            CancelInvoke();
            blinkCoroutine.Stop();
        }

        public void Initialize()
        {
            blinkDelay = new WaitForSeconds(blinkSpeed);

            CancelInvoke();
            InvokeRepeating(nameof(AnimateEyes), 1, blinkInterval);
        }

        private void AnimateEyes()
        {
            RotateEyes();

            if (hasEyeBlendShapes)
            {
                blinkCoroutine = BlinkEyes().Run();
            }
        }

        private void RotateEyes()
        {
            float vertical = Random.Range(-VERTICAL_MARGIN, VERTICAL_MARGIN);
            float horizontal = Random.Range(-HORIZONTAL_MARGIN, HORIZONTAL_MARGIN);

            var rotation = isFullBody ? 
                Quaternion.Euler(horizontal, vertical, 0) : 
                Quaternion.Euler(horizontal - 90, 0, vertical + 180);

            leftEyeBone.localRotation = rotation;
            rightEyeBone.localRotation = rotation;
        }

        private IEnumerator BlinkEyes()
        {
            headMesh.SetBlendShapeWeight(eyeBlinkLeftBlendShapeIndex, EYE_BLINK_VALUE);
            headMesh.SetBlendShapeWeight(eyeBlinkRightBlendShapeIndex, EYE_BLINK_VALUE);

            yield return blinkDelay;
            
            headMesh.SetBlendShapeWeight(eyeBlinkLeftBlendShapeIndex, 0);
            headMesh.SetBlendShapeWeight(eyeBlinkRightBlendShapeIndex, 0);
        }
    }
}
