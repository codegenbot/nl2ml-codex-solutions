#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> splitString(string s) {
    vector<string> words;
    string word = "";
    for (int i=0; i<s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        }
        else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}

int main() {
    vector<string> words = splitString("ahmed     , gamal");
    cout << "Output: ";
    for (const string& word : words) {
        cout << word << " ";
    }
    cout << endl;

    assert(splitString("ahmed     , gamal") == vector<string>{"ahmed", "gamal"});

    return 0;
}