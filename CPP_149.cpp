#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<std::string>& a, std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string>& lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].length() % 2 == 0) {
            result.push_back(lst[i]);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(sorted_list_sum({ "aaaa", "bbbb", "dd", "cc" }), { "cc", "dd", "aaaa", "bbbb" }));
    return 0;
}