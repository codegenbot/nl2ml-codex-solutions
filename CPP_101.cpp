#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;

}

vector<string> words_string(string s) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ',' || c == ' ') {
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
    
    assert(issame(result, {"ahmed", "gamal"}));
    return result;

}

int main() {
    vector<string> words = {"ahmed     , gamal"};
    words_string(words[0]);
    return 0;
}