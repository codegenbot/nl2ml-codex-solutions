string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.size();
    for(int i = n-3; i > 0; --i){
        if(word[i] != ' ' && vowels.find(word[i]) != string::npos 
           && !isalpha(word[i-1]) && isalpha(word[i-2])){
            return string(1, word[i]);
        }
    }
    return "";
}