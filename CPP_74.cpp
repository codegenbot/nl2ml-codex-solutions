#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> issame(std::vector<std::string>& lst1, std::vector<std::string>& lst2) {
    int totalChars1 = 0, totalChars2 = 0;
    for (const std::string& str : lst1) {
        totalChars1 += str.size();
    }
    for (const std::string& str : lst2) {
        totalChars2 += str.size();
    }
    
    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    // Your main function code here
    return 0;
}