using System.Collections.Generic;

public struct WebMessage
{
    public string type;
    public string source;
    public string eventName;
    public Dictionary<string, string> data;
}
