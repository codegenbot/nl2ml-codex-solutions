#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0; // position in text

    while (pos != string::npos) { 
        pos = text.find(target, pos);
        
        if (pos == string::npos) {
            break;
        }

        result.push_back(pos);
        pos += 1; // move to the next occurrence
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