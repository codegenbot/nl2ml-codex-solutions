```cpp
#include <vector>
#include <string>

bool equal_vectors(const std::vector<std::vector<std::string>>& v1, const std::vector<std::vector<std::string>>& v2) {
    if (v1.size() != v2.size()) return false;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i].size() != v2[i].size()) return false;
        for (size_t j = 0; j < v1[i].size(); ++j) {
            if (v1[i][j] != v2[i][j]) return false;
        }
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_substring(const std::vector<std::vector<std::string>>& words, const std::string& substring) {
    std::vector<std::vector<std::string>> result;
    for (size_t i = 0; i < words.size(); ++i) {
        bool found = false;
        for (size_t j = 0; j < words[i].size(); ++j) {
            if (words[i][j].find(substring) != std::string::npos) {
                found = true;
                break;
            }
        }
        if (found) {
            result.push_back(words[i]);
        }
    }
    return result;

int main() {
    std::vector<std::vector<std::string>> v1({{{"apple", "banana"}, {"hello", "world"}}});
    
    std::vector<std::vector<std::string>> v2({{{"apple", "banana"}, {"goodbye", "world"}}});

    if (!equal_vectors(v1, v2)) {
        std::cout << "Vectors are not equal" << std::endl;
    } else {
        std::cout << "Vectors are equal" << std::endl;
    }

    std::vector<std::vector<std::string>> words = {{"apple", "banana", "hello"}, {"world", "goodbye"}};
    std::string substring = "o";
    std::vector<std::vector<std::string>> result = filter_by_substring(words, substring);
    for (const auto& word : result) {
        for (const auto& w : word) {
            if (w.find(substring) != std::string::npos) {
                std::cout << "Found substring in: ";
                for (const auto& x : word) {
                    std::cout << x << " ";
                }
                std::cout << std::endl;
            }
        }
    }

    return 0;
}