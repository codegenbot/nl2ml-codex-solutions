#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
string get_closest_vowel(string word){
    for (int i = word.size() - 2; i > 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            return string(1, word[i]);
        }
        if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' &&
            word[i - 1] != 'a' && word[i - 1] != 'e' && word[i - 1] != 'i' && word[i - 1] != 'o' && word[i - 1] != 'u' &&
            word[i + 1] != 'a' && word[i + 1] != 'e' && word[i + 1] != 'i' && word[i + 1] != 'o' && word[i + 1] != 'u') {
            return "";
        }
    }
    return "";
}