#include <vector>

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (std::string str : lst) {
        int odd_count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(odd_count) + " in the string " + str + " of the input.");
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 1 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
}