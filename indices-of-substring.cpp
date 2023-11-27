#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;

    int pos = 0;
    while (pos < int(text.length())) {
        pos = text.find(target, pos + target.length() - 1);
        if (pos == std::string::npos) {
            break;
        }
        indices.push_back(pos);
        pos += target.length();
    }

    return indices;
}

int main() {
    std::string text;
    std::string target;

    std::cin >> text;
    std::cin >> target;

    std::vector<int> result = indicesOfSubstring(text, target);

    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}