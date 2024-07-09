```
string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (!ispunct(c) && !strchr("aeiouAEIOU", tolower(c))) {
            result += c;
        }
    }
    return result;
}