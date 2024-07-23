#include <vector>
#include <initializer_list>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!b[i].find(a[i])) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> arr, std::string sub) {
    std::vector<std::string> result;
    for (const auto& str : arr) {
        if (str.find(sub) != std::string::npos) result.push_back(str);
    }
    return result;
}

int main() {
    assert(issame(filter_by_substring({{"grunt", "trumpet", "prune", "gruesome"}}, {"grunt", "prune"}));
    return 0;