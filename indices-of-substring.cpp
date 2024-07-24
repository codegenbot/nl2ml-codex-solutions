#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::getline(std::cin >> std::ws, text);
    std::getline(std::cin >> std::ws, target);
    
    std::vector<int> indices;
    
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos);
    }
    
    for(int index : indices) {
        std::cout << index << " ";
    }
    
    return 0;
}