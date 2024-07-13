string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; i--) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
            word[i] == 'U') {
            int left = i + 1;
            while (left < word.size() && !isvowel(word[left])) {
                left++;
            }
            if (left < word.size()) {
                return string(1, word[left]);
            } else {
                return "";
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || 
           c == 'o' || c == 'u' || c == 'A' || c == 'E' || 
           c == 'I' || c == 'O' || c == 'U');
}