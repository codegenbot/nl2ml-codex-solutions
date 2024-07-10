#include <vector>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m + 1; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i+j] != target[j]) {
                found = false;
                break;
            }
        }

        if (found) {
            result.push_back(i);
            i += m - 1; // to avoid duplicate matches
        }
    }

    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}