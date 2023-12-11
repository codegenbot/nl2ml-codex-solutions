```
#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

std::string anti_shuffle(const std::string& s) {
    std::string result = "";
    for (char i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            int j = i + 1;
            while (j < s.length() && s[j] != ' ') {
                if (s[j] > s[i]) {
                    result[j] = s[i];
                }
                j++;
            }
        }
    }
    return result;
}
```