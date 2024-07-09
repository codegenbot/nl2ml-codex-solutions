```cpp
#include <cassert>
#include <iostream>
#include <stack>
#include <string>

bool correct_bracketing(const std::string& s) {
    std::stack<char> stack;
    for (char c : s) {
        if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            if (stack.empty()) return false;
            stack.pop();
        }
    }
    return stack.empty();
}

int main() {
    assert(!correct_bracketing("()()(()())")); 
    std::cout << "Correct bracketing test passed." << std::endl;
    return 0;
}