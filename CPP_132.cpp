#include <cassert>
#include <string>

bool is_nested(std::string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[' || c == '(' || c == '{') {
            count++;
        } else if (c == ']' || c == ')' || c == '}') {
            if (count > 0) {
                count--;
            } else {
                return false;
            }
        }
    }
    return count == 0;
}

int main() {
    assert(is_nested("]]]]]]]]") == false);
    return 0;
}