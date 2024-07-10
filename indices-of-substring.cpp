```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;

    while ((pos = text.find(target)) != std::string::npos) {
        result.push_back(pos);
        text.erase(0, pos + target.length());
    }

    return result;
}

int main() {
    std::string text = "bananas";
    std::string target = "ana";
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << std::endl;
    }
    return 0;
}