```cpp
#include <string>

int strLength(const std::string& str) {
    return str.length();
}

int main() {
    assert(strLength("asdasnakj") == 13);
    return 0;
}