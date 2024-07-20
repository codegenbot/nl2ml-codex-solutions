Here is the completed code:

string remove_vowels(string text) {
    string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (!strncasecmp(&c, "aeiouAEIOU", 6)) {
            continue;
        }
        result += tolower(c);
    }
    return result;