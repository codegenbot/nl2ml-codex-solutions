#include <algorithm>
#include <string>
#include <cassert>

bool same_chars(string s0, string s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    assert (same_chars("aabb", "aaccc") == false);
    std::cout << same_chars("abcde", "edcba");
    return 0;
}