// Remove vowels from the input text
string remove_vowels(string text) {
    text.erase(remove_if(text.begin(), text.end(), [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'; }),
                text.end());
    return text;
}