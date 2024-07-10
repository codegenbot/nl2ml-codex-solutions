#include <string>

bool is_nested(std::string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') {
            if (open > 0) open--;
            else close++;
        }
    }
    return close > 0 && open == 0;
}

int main() {
    assert(is_nested("]]]]]]]])" == false);
    return 0;
}