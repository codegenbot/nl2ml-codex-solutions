```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a.length() == b.length();
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}

int main() {
    std::vector<std::string> inputStrings;
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::string str;
        std::cout << "Enter string " << (i+1) << ": ";
        std::getline(std::cin, str);
        inputStrings.push_back(str);
    }
    
    std::vector<std::string> output = sorted_list_sum(inputStrings);
    
    // Test assertion
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == std::vector<std::string>({"cc", "dd", "aaaa", "bbbb"}));
    
    return 0;
}