#include <vector>
#include <string>
#include <initializer_list>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::initializer_list<std::string> lst) {
    std::vector<std::string> result(lst);
    for (auto& str : result) {
        if (str.length() % 2 == 0 || issame(str, "sum")) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(std::equal(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}