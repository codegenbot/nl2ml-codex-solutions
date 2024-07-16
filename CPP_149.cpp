#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const std::string& s) { return s.length() % 2 != 0; }), lst.end());
    std::sort(lst.begin(), lst.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

void main() {
    std::vector<std::string> b = {"cc", "dd", "aaaa", "bbbb"};
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), b);
}