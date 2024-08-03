#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int consonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonants == n)
                result.push_back(word);
            word.clear();
            consonants = 0;
        } else if (!isalpha(c)) continue; // ignore non-alphabets
        else {
            char ch = tolower(c);
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
                consonants++;
            word += c;
        }
    }

    // check for the last word
    if (consonants == n)
        result.push_back(word);

    return result;
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> res = select_words(s, n);
    for (auto &str : res) {
        cout << str << endl;
    }
    return 0;
}