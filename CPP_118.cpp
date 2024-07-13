string get_closest_vowel(string word) {
    int n = word.size();
    for(int i=n-1; i>=0; i--) {
        char c = tolower(word[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            for(int j=i+1; j<n; j++) {
                char d = tolower(word[j]);
                if(d != 'a' && d != 'e' && d != 'i' && d != 'o' && d != 'u') {
                    return (word[i] == word[i].toupper()) ? toupper(std::string(1, c)) : std::string(1, c);
                }
            }
        }
    }
    return "";
}