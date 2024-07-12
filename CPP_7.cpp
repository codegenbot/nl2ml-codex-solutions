```cpp
#include <vector>
#include <string>

bool equalVectors(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
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
    std::vector<std::string> words = {"grunt", "trumpet", "prune", "gruesome"};
    const std::string& substring = "run";
    auto result = filter_by_substring(words, substring);
    auto actualSet(result.begin(), result.end());
    auto expectedSet({"grunt", "prune"});
    bool same = (actualSet == std::vector<std::string>(expectedSet));
    assert(same == equalVectors({result.begin(), result.end()}, expectedSet));
    return 0;
}