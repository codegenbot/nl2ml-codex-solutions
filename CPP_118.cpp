string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int closest_pos = -1;
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            closest_pos = i;
            break;
        }
    }
    if (closest_pos == -1) {
        return "";
    }
    for (int j = closest_pos - 1; j > 0; j--) {
        if (vowels.find(word[j]) == string::npos) {
            return string(1, word[closest_pos]);
        }
    }
    return "";
}