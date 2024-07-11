#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for(int i=n-1; i>=0; --i){
        if(!isalpha(word[i])) continue;
        if(vowel(tolower(word[i]))){
            for(int j=i-1; j>=0; --j){
                if(!isalpha(word[j])) break;
                if(vowel(tolower(word[j])) && (word[i]-word[j]) < 5) return string(1, word[i]);
            }
        }
    }
    return "";
}

bool vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}