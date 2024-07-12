```
#include <initializer_list>

#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) {
    return !a.empty();
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(substring) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    bool same = issame(result);
    return 0;
}