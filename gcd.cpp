```
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.find(target, i) != std::string::npos)
            result.push_back(i);
    }

    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}