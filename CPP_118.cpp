string get_closest_vowel(string word) {
    int n = word.size();
    for(int i=n-1; i>0; --i){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
           word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
           word[i] == 'U'){
            if(i < n-1 && !isvowel(word[i+1]))
                return string(1, word[i]);
        }
    }
    return "";
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || 
           c == 'o' || c == 'u' || c == 'A' || 
           c == 'E' || c == 'I' || c == 'O' || 
           c == 'U');
}