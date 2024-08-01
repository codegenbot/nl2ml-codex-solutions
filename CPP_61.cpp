#include <iostream>
#include <cassert>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if (bracket == '(') {
            count++;
        } else if (bracket == ')') {
            if (count == 0) {
                return false;
            }
            count--;
        }
    }
    return count == 0;
}

int main() { 
    assert(!correct_bracketing("()()(()())()))()"));
    return 0;
}