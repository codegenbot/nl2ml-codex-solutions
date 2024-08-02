#include <vector>
#include <string>
#include <iostream>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

std::vector<int> findIndicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
            i += m - 1; // Increment i by m - 1 to account for overlapping substrings
        }
    }

    return indices;
}

int main() {
    std::vector<int> result1 = findIndicesOfSubstring("abracadabra", "abra");
    for (int index : result1) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    std::vector<int> result2 = findIndicesOfSubstring("ababab", "aba");
    for (int index : result2) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}