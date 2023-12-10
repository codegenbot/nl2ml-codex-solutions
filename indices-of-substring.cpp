```
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int i = 0;
    while (i < text.size()) {
        if (text[i] == target[0]) {
            bool found = true;
            for (int j = 1; j < target.size(); j++) {
                if (text[i + j] != target[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                result.push_back(i);
            }
        }
        i++;
    }
    return result;
}
```
This code should work correctly now. The issue was caused by the backticks at the beginning and end of each line, which are not valid C++ syntax. I removed them and the code should compile and run correctly.