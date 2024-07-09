```cpp
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

bool issame(vector<pair<int, string>> a, vector<pair<int, string>> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++){
        pair<int, string> p1 = a[i];
        pair<int, string> p2 = b[i];
        if(p1.first != p2.first || p1.second != p2.second) return false;
    }
    return true;
}

vector<pair<int, string>> select_words(string s, int n) {
    vector<pair<int, string>> result;
    int wordCount = 0;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                size_t vowelCount = std::count(word.begin(), word.end(), 'a') + std::count(word.begin(), word.end(), 'e') +
                    std::count(word.begin(), word.end(), 'i') + std::count(word.begin(), word.end(), 'o') + std::count(word.begin(), word.end(), 'u');
                if (vowelCount <= n) {
                    result.push_back({{vowelCount, word}});
                }
                word = "";
            }
            wordCount++;
        } else {
            word += tolower(c);
        }
    }
    if (!word.empty()) {
        size_t vowelCount = std::count(word.begin(), word.end(), 'a') + std::count(word.begin(), word.end(), 'e') +
            std::count(word.begin(), word.end(), 'i') + std::count(word.begin(), word.end(), 'o') + std::count(word.begin(), word.end(), 'u');
        if (vowelCount <= n) {
            result.push_back({{vowelCount, word}});
        }
    }
    return result;
}

int main() {
    vector<pair<int, string>> expected = {{1, "b"}, {1, "c"}, {1, "d"}, {1, "f"}};
    vector<pair<int, string>> output = select_words("a b c d e f", 1);
    assert(issame(output, expected));
    return 0;
}