```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::string b) {
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> bf(std::string a, std::string b) {
    // Define the function body here
}