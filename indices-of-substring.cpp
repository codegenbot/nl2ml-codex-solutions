#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text;
    std::cin >> target;
    
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    for (int idx : indices) {
        std::cout << idx << " ";
    }
    
    return 0;
}