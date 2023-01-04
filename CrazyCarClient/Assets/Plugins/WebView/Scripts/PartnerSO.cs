using UnityEngine;

public class PartnerSO : ScriptableObject
{
    public string Subdomain = null;

    public string GetUrl()
    {
        return $"https://{GetSubdomain()}.readyplayer.me/avatar?frameApi";
    }

    public string GetSubdomain()
    {
        if (string.IsNullOrEmpty(Subdomain)) Subdomain = "demo";
        return Subdomain;
    }
}
