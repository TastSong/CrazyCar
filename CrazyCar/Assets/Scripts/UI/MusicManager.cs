using UnityEngine;
using UnityEngine.UI;

public class MusicManager : MonoBehaviour {
    private Slider m_musicSlider;
    private GameObject m_musicButton;

    private void Start() {
        m_musicSlider = GetComponent<Slider>();
        m_musicSlider.value = PlayerPrefs.GetInt("music_on");
        m_musicButton = GameObject.Find("MusicButton/Button");
    }

<<<<<<< HEAD:CrazyCar/Assets/Scripts/Setting/MusicManager.cs
    public void SwitchMusic() {
        //var backgroundAudioSource = GameObject.Find("BackgroundMusic").GetComponent<AudioSource>();
        //backgroundAudioSource.volume = m_musicSlider.value;
        PlayerPrefs.SetInt("music_on", (int)m_musicSlider.value);
=======
        public void SwitchMusic()
        {
            var backgroundAudioSource = GameObject.Find("BackgroundMusic").GetComponent<AudioSource>();
            backgroundAudioSource.volume = m_musicSlider.value;
            PlayerPrefs.SetInt("music_on", (int)m_musicSlider.value);         
        }
>>>>>>> parent of 7918dff2 (添加setting):CrazyCar/Assets/Scripts/UI/MusicManager.cs
    }
}

