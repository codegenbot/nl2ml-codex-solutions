#include <string>
#include <vector>

std::string match_parens(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') {
                open++;
            } else {
                close++;
            }
        }
    }
    return open == close ? "Yes" : "No";
}