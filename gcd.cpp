Here is the corrected code:

```cpp
#include <vector>
#include <string>

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.length();
    for (int i = 0; i <= text.length() - len; i++) {
        bool found = true;
        for (int j = 0; j < len; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}