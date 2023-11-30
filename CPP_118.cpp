#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.size();

    for (int i = n - 2; i >= 1; i--) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return string(1, word[i]);
        }
    }

    return "";
}