#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

vector<string> words_string(string s) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(words_string("ahmed     , gamal") , {"ahmed", "gamal"}));
}