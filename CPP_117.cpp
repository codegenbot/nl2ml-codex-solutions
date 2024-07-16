#include<vector>
#include<string>
#include<cctype>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            int consonants = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isspace(ch) && !isalpha(ch)) continue;
                if (!ispunct(ch) && !isspace(ch) && isupper(ch))
                    consonants += tolower(ch) == 'q' || tolower(ch) == 'x' ||
                                  tolower(ch) == 'z' ? 1 : 0;
            }
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}