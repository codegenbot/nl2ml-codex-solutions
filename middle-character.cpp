#include <string>

std::string middleCharacter(std::string str) {
    int len = str.length();
    if(len % 2 != 0) {
        return str.substr(len / 2, 1);
    } else {
        return str.substr((len - 1) / 2, 2);
    }
}