#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    std::vector<int> indices;
    size_t startPos = 0;
    size_t pos;
    while ((pos = text.find(target, startPos)) != std::string::npos) {
        indices.push_back(pos - target.size() + 1);
        startPos = pos + 1;
    }
    
    for (size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] + 1 << " ";
    }
    
    return 0;
}