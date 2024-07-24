#include <vector>
using namespace std;

int gcd(const string a, const string b) {
    if (b == "") return a;
    return gcd(b, a.substr(0, a.size() % b.size()));
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty()) return indices;
    for (int i = 0; i <= static_cast<int>(text.size()) - static_cast<int>(target.size()); ++i) {
        if (text.substr(i, target.size()) == target) {
            for (int z = 0; z < static_cast<int>(target.size()); ++z) {
                indices.push_back(i + z);
            }
        }
    }
    return indices;
}