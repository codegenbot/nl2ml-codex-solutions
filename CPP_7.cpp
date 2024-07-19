```cpp
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& sub) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(sub) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    const std::vector<std::string> words = {"grunt", "trumpet", "prune", "gruesome"};
    const std::vector<std::string> expected = {"grunt", "prune"};
    assert(issame(filter_by_substring(words, "run"), expected));
    return 0;
}