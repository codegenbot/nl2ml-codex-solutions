#include <vector>
#include <string>

bool issame(const vector<string>& v1, const vector<string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

bool isSame(const vector<string>& b, const string& prefix) {
    bool result = true;
    for (const auto& str : b) {
        if (str.find(prefix) == 0) {
            result = false;
            break;
        }
    }
    return result;
}