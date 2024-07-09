#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int n = word.length();
    for(int i=n-1; i>=0; i--) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            int j = i-1;
            while(j >= 0 && (word[j] < 'a' || word[j] > 'z')) {
                j--;
            }
            if(j >= 0) {
                return string(1, word[i]);
            }
        }
    }
    return "";
}