```cpp
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

bool issame(vector<pair<int, string>> a, vector<pair<int, string>> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<pair<int, string>> select_words(string s, int n) {
    vector<pair<int, string>> result;
    size_t wordCount = 0;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int vowelCount = count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
                    count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u');
                if (vowelCount <= n) {
                    result.push_back({static_cast<int>(std::size_type(1)), word});
                }
                word = "";
            }
            ++wordCount;
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        int vowelCount = count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') +
            count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u');
        if (vowelCount <= n) {
            result.push_back({static_cast<int>(std::size_type(1)), word});
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