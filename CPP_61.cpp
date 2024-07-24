#include <iostream>
#include <string>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count == 0)
                return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    assert(not (correct_bracketing("()()(()())()))()")));
    std::cout << "Correct Bracketing\n";
    return 0;
}