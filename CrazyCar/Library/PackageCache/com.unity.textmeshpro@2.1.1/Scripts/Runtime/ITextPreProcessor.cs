

namespace TMPro
{
    /// <summary>
    /// Interface used for preprocessing and shaping of text.
    /// </summary>
    public interface ITextPreprocessor
    {
        /// <summary>
        /// Function used for preprocessing of text
        /// </summary>
        /// <param name="text">Source text to be processed</param>
        /// <returns>Processed text</returns>
        string PreprocessText(string text);
    }
}
