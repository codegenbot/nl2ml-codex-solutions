```cpp
#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    if (text.substr(0, m) == target)
        result.push_back(0);

    for (int i = 1; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}