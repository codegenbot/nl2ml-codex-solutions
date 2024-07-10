```cpp
#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<size_t> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<size_t> result;
    size_t index = 0;

    while (index <= text.length() - target.length()) {
        size_t found = text.find(target, index);
        if (found != std::string::npos) {
            result.push_back(found);
            index = found + 1;
        } else {
            break;
        }
    }

    return result;
}

int main() {
    std::cout << "GCD of two numbers: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << "\n";
    
    std::string text = "banana";
    std::string target = "ana";
    std::vector<size_t> result = indicesOfSubstring(text, target);
    std::cout << "Indices of substring 'ana' in 'banana': ";
    for (size_t i : result) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    
    return 0;
}