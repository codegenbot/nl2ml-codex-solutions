#include <vector>
#include <string>
#include <iostream>

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
    string text = "3/G(N7\"3/Ga";
    string target = "3/G";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
}