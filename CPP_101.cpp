#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
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