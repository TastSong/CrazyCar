using System;
using UnityEngine;
using System.Collections;
using static ReadyPlayerMe.ExtensionMethods;

#if UNITY_ANDROID
using UnityEngine.Android;
#endif

namespace ReadyPlayerMe
{
    public enum AudioProviderType
    {
        Microphone = 0,
        AudioClip = 1
    }

    [DisallowMultipleComponent]
    [AddComponentMenu("Ready Player Me/Voice Handler", 0)]
    public class VoiceHandler : MonoBehaviour
    {
        private const string MouthOpenBlendShapeName = "mouthOpen";
        private const int AmplituteMultiplier = 10;
        private const int AudioSampleLength = 4096;

        private float[] audioSample = new float[AudioSampleLength];

        private SkinnedMeshRenderer headMesh;
        private SkinnedMeshRenderer beardMesh;
        private SkinnedMeshRenderer teethMesh;

        private int mouthOpenBlendShapeIndexOnHeadMesh = -1;
        private int mouthOpenBlendShapeIndexOnBeardMesh = -1; 
        private int mouthOpenBlendShapeIndexOnTeethMesh = -1;

        public AudioClip AudioClip = null;
        public AudioSource AudioSource = null;
        public AudioProviderType AudioProvider = AudioProviderType.Microphone;

        private void Start()
        {
            GetMeshAndSetIndex(MeshType.HeadMesh, ref headMesh, ref mouthOpenBlendShapeIndexOnHeadMesh);
            GetMeshAndSetIndex(MeshType.BeardMesh, ref beardMesh, ref mouthOpenBlendShapeIndexOnBeardMesh);
            GetMeshAndSetIndex(MeshType.TeethMesh, ref teethMesh, ref mouthOpenBlendShapeIndexOnTeethMesh);

            #if UNITY_IOS
            CheckIOSMicrophonePermission().Run();
            #elif UNITY_ANDROID
            CheckAndroidMicrophonePermission().Run();
            #elif UNITY_STANDALONE || UNITY_EDITOR
            InitializeAudio();
            #endif
        }

        private void Update()
        {
            float value = GetAmplitude();
            SetBlendShapeWeights(value);
        }

        public void InitializeAudio()
        {
            try
            {
                if (AudioSource == null)
                {
                    AudioSource = gameObject.AddComponent<AudioSource>();
                }

                switch (AudioProvider)
                {
                    case AudioProviderType.Microphone:
                        SetMicrophoneSource();
                        break;
                    case AudioProviderType.AudioClip:
                        SetAudioClipSource();
                        break;
                }
            }
            catch (Exception e)
            {
                Debug.LogError($"VoiceHandler.Initialize:/n" + e);
            }
        }

        private void SetMicrophoneSource()
        {
            #if !UNITY_WEBGL
            AudioSource.clip = Microphone.Start(null, true, 1, 44100);
            AudioSource.loop = true;
            AudioSource.mute = true;
            AudioSource.Play();
            #endif
        }

        private void SetAudioClipSource()
        {
            AudioSource.clip = AudioClip;
            AudioSource.loop = false;
            AudioSource.mute = false;
            AudioSource.Stop();
        }

        public void PlayCurrentAudioClip()
        {
            AudioSource.Play();
        }

        public void PlayAudioClip(AudioClip audioClip)
        {
            AudioClip = AudioSource.clip = audioClip;
            PlayCurrentAudioClip();
        }

        private float GetAmplitude()
        {
            if (AudioSource != null && AudioSource.clip != null && AudioSource.isPlaying)
            {
                float amplitude = 0f;
                AudioSource.clip.GetData(audioSample, AudioSource.timeSamples);

                foreach (var sample in audioSample)
                {
                    amplitude += Mathf.Abs(sample);
                }

                return Mathf.Clamp01(amplitude / audioSample.Length * AmplituteMultiplier);
            }

            return 0;
        }

        #region Blend Shape Movement
        private void GetMeshAndSetIndex(MeshType meshType, ref SkinnedMeshRenderer mesh, ref int index)
        {
            mesh = gameObject.GetMeshRenderer(meshType);
            
            if(mesh != null)
            {
                index = mesh.sharedMesh.GetBlendShapeIndex(MouthOpenBlendShapeName);
            }
        }

        private void SetBlendShapeWeights(float weight)
        {
            SetBlendShapeWeight(headMesh, mouthOpenBlendShapeIndexOnHeadMesh);
            SetBlendShapeWeight(beardMesh, mouthOpenBlendShapeIndexOnBeardMesh);
            SetBlendShapeWeight(teethMesh, mouthOpenBlendShapeIndexOnTeethMesh);

            void SetBlendShapeWeight(SkinnedMeshRenderer mesh, int index)
            {
                if (index >= 0)
                {
                    mesh.SetBlendShapeWeight(index, weight);
                }
            }
        }
        #endregion

        #region Permissions
        #if UNITY_IOS
        private IEnumerator CheckIOSMicrophonePermission()
        {
            yield return Application.RequestUserAuthorization(UserAuthorization.Microphone);
            if (Application.HasUserAuthorization(UserAuthorization.Microphone))
            {
                InitializeAudio();
            }
            else
            {
                StartCoroutine(CheckIOSMicrophonePermission());
            }
        }
        #endif

        #if UNITY_ANDROID
        private IEnumerator CheckAndroidMicrophonePermission()
        {
            WaitUntil wait = new WaitUntil(() => {
                Permission.RequestUserPermission(Permission.Microphone);

                return Permission.HasUserAuthorizedPermission(Permission.Microphone);
            });

            yield return wait;

            InitializeAudio();
        }
        #endif
        #endregion

        private void OnDestroy()
        {
            audioSample = null;
        }
    }
}
