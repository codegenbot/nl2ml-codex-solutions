#include <vector>
#include <string>
#include <set>

bool issame(const std::vector<std::string>& a) {
    return (a.size() > 0);
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
    std::vector<std::string> result = filter_by_substring(words, "run");
    std::set<std::string> actualSet(result.begin(), result.end());
    std::set<std::string> expectedSet = {"grunt", "prune"};
    bool same = (actualSet == expectedSet);
    assert(same == issame({result.begin(), result.end()}));
    return 0;
}