#include <string>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (size_t i = 0; i < brackets.size(); ++i) {
        if (brackets[i] == '(') {
            count++;
        } else if (brackets[i] == ')') {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}

#include <cassert>