#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    for (int i = 0; i < (int)indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    
    return 0;
}