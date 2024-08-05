#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();
    
    for (int i = 0; i <= textLen - targetLen; ++i) {
        bool found = true;
        for (int j = 0; j < targetLen; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (int j = 0; j < targetLen; ++j) {
                indices.push_back(i + j);
            }
        }
    }
    
    return indices;
}