#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    
    if (target.empty()) {
        for (int i = 0; i < text.length(); ++i) {
            std::cout << i << " ";
        }
        return 0;
    }

    size_t pos = text.find(target, 0);
    std::vector<int> indices;
    
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + target.length());
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}