```cpp
#include <vector>
#include <algorithm>
#include <string>

bool is_palindrome(std::string s) {
    std::string t = s;
    std::reverse(t.begin(), t.end());
    return s == t;
}

bool will_it_fly(const std::vector<int>& q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (!is_palindrome(str)) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}