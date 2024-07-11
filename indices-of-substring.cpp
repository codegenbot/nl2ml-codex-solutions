#include <vector>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; ; ) {
        if (i >= n - m + 1) break;
        if (text.substr(i, m) == target) {
            result.push_back(i);
            i += m; 
        } else {
            i++; 
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
}