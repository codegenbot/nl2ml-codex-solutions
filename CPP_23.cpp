#include <string>
#include <cassert>
#include <cstring>

int strLength(const std::string& str) {
    return str.length();
}

int main() {
    assert(strlen("asdasnakj") == 9);
}