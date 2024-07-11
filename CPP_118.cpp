string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int closest_idx = -1;
    
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            closest_idx = i;
            break;
        }
    }

    if (closest_idx == -1) {
        return "";
    } else {
        return string(1, word[closest_idx]);
    }
}