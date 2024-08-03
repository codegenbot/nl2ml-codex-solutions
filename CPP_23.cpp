#include <cassert>

int strlen(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    assert(strlen("asdasnakj") == 9);
}