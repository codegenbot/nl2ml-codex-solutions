```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                unsigned vowel_count = 0;
                for (char ch : word) {
                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                        vowel_count++;
                }
                if (!word.empty() && vowel_count <= n) {
                    result.reserve(result.size() + 1);
                    result.emplace_back(word);
                    word = "";
                }
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        unsigned vowel_count = 0;
        for (char ch : word) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowel_count++;
        }
        if (!word.empty() && vowel_count <= n) {
            result.reserve(result.size() + 1);
            result.emplace_back(word);
            word = "";
        }
    }
    return result;
}

int main() {
    string s;
    int n;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << "Enter the maximum number of vowels allowed in each word: ";
    cin >> n;
    vector<string> words = select_words(s, n);
    for (string w : words) {
        cout << w << endl;
    }
}