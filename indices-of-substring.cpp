#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    std::vector<size_t> indices;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += (target.empty() ? 1 : target.size()); // Move position forward by 1 or target size for overlapping targets
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}