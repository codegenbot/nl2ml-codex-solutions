```cpp
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

bool same_chars(string s0, string s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());
    return s0.size() == s1.size() && s0 == s1;
}