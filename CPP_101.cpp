#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> words_string(string s) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    bool result = true;
    if (a.size() != b.size()) {
        result = false;
    } else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                result = false;
                break;
            }
        }
    }
    return result;
}

int main() {
    vector<string> a = words_string("ahmed     , gamal");
    vector<string> b = {"ahmed", "gamal"};
    bool same = issame(a, b);
    cout << boolalpha << same << endl;

    // Add more test cases if needed

    return 0;
}