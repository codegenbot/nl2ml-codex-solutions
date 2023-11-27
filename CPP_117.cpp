#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n);
int count_consonants(string word);
bool is_consonant(char c);
bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count_consonants(word) == n) {
                words.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    if (!word.empty() && count_consonants(word) == n) {
        words.push_back(word);
    }
    return words;
}

int count_consonants(string word) {
    int count = 0;
    for (int i = 0; i < word.length(); i++) {
        if (is_consonant(word[i])) {
            count++;
        }
    }
    return count;
}

bool is_consonant(char c) {
    c = tolower(c);
    return c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u';
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}