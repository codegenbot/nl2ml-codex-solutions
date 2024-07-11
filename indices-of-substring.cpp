#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    if (target.empty()) {
        std::cout << "Target string is empty." << std::endl;
        return 0;
    }

    std::vector<size_t> indices;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += (target.length() == 1) ? 1 : 0; // Handle overlapping targets
    }

    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}