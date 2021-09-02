using UnityEngine;
using System.Collections;

public class DemoTextureKaiju : MonoBehaviour
{
    public GUIStyle _text;

    public Material _body;
    public Material _self;
    public Material _wheel;

    public Texture[] _texture;
    public Texture[] _textureOther;

    public int _numTexture;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

        if (Input.GetKeyDown(KeyCode.A))
        {
            if (_numTexture > 0)
            {
                _numTexture--;
            }

            _body.mainTexture = _texture[_numTexture];
            _self.mainTexture = _textureOther[_numTexture];
            _wheel.mainTexture = _textureOther[_numTexture];

        }
        else if (Input.GetKeyDown(KeyCode.D))
        {
            if (_numTexture < _texture.Length - 1)
            {
                _numTexture++;
            }

            _body.mainTexture = _texture[_numTexture];
            _self.mainTexture = _textureOther[_numTexture];
            _wheel.mainTexture = _textureOther[_numTexture];
        }

    }

    void OnGUI()
    {
        GUI.Box(new Rect(20, 20, Screen.width, 100), "For view next texture press 'D' or 'A' for view back texture\n View texture: " + (_numTexture+1) + "/" + _texture.Length, _text);
    }
}
