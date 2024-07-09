#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> total_match(vector<string> a, vector<string> b) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : a) {
        sum1 += s.length();
    }
    for (const auto& s : b) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return a;
    else if (sum1 > sum2) return b;
    else return a;
}