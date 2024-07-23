#include <initializer_list>
#include <vector>
#include <string>

using namespace std;

std::vector<std::string> prefixFilter(const vector<string>& vec, const string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool equalVectors(const vector<string>& a, const vector<string>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main() {
    if (!equalVectors(prefixFilter({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"})) {
        return 1;
    }
    return 0;
}