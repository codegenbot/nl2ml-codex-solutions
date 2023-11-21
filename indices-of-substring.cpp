#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int n = text.length();
    int m = target.length();


    for (int i = 0; i <= n - m; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
            i += m - 1;
        }
    }

    return indices;
}

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> result = indicesOfSubstring(text, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}