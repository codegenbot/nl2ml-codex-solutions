#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    int consonants = 0;
    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                words.push_back(word);
            }
            word = "";
            consonants = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonants++;
            }
            word += c;
        }
    }
    if (!word.empty() && consonants == n) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    
    return 0;
}