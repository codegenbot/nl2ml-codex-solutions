#include <string>
#include <cassert>

bool correct_bracketing(string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    assert(!correct_bracketing("()()(()())()))()"));
    assert(correct_bracketing("((((()))))"));
    assert(!correct_bracketing(")))((("));
    assert(correct_bracketing("()(()(((())))))"));
    // Add more test cases here
    return 0;
}