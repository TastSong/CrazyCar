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

    public void SwitchMusic() {
        //var backgroundAudioSource = GameObject.Find("BackgroundMusic").GetComponent<AudioSource>();
        //backgroundAudioSource.volume = m_musicSlider.value;
        PlayerPrefs.SetInt("music_on", (int)m_musicSlider.value);
    }
}

