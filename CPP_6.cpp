#include <vector>
#include <string>

bool areSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> parse_nested_parens(const std::string& s) {
    std::vector<int> result;
    int num = 0;
    for (char c : s) {
        if (c == '(') {
            num++;
        } else if (c == ')') {
            if (num > 0) {
                result.push_back(num);
                num--;
            }
        }
    }
    return result;
}

int main() {
    assert(areSame(parse_nested_parens("(()(())((()))"), {4, 3, 2, 1, 0, -1, -2, -3, -4}));
    return 0;
}