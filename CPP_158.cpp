```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string find_max(const std::vector<std::string>& words) {
    return *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
}

int main() 
{
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;
    std::cin.ignore();  // Add this line
    std::vector<std::string> words;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::getline(std::cin, str); 
        if (!str.empty()) { 
            words.push_back(str);
        }
    }
    std::cout << "The maximum length word is: " << find_max(words) << std::endl;
}