#include <string>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if ((c >= '2' && c <= '7') || (c >= 'b' && c <= 'f')) {
            count++;
        }
    }
    return count;
}