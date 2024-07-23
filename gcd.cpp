#include <vector>
using namespace std;

int gcd(const int a, const int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty()) return indices;
    for (size_t i = 0; i <= text.length() - target.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            for (size_t j = 0; j < target.length(); ++j) {
                indices.push_back(i + j);
            }
        }
    }
    return indices;
}