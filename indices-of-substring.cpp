#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) { 
        int j = 0;
        while (j < m) {
            if (text[i + j] != target[j]) {
                break; // Move to the next position
            } else
                j++;
        }
        if (j == m)
            result.push_back(i); // Found a match!
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
        cout << i << endl;
    }

    return 0;
}