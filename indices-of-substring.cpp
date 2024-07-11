#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0; // position in text
    while ((pos = text.find(target)) != string::npos) {
        result.push_back(pos);
        pos += target.size(); // move to the next occurrence
    }
    return result;
}

int main() {
    string text = "ABCDEF";
    string target = "CDE";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
}