#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            while (i + m < n && text.substr(i, m) == target) {
                i++;
                result.push_back(i);
            }
        }
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << gcd(num1, num2) << std::endl;

    string text, target;
    std::cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int index : indices)
        std::cout << index << " ";
    std::cout << std::endl;

    return 0;
}