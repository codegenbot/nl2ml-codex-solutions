#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "apricot", "avocado"};
    std::string prefix = "ap";
    std::vector<std::string> filtered_strings = filter_by_prefix(strings, prefix);

    assert(filtered_strings == std::vector<std::string>{"apple", "apricot"});
    
    for (const auto& str : filtered_strings) {
        std::cout << str << " ";
    }
    
    return 0;
}