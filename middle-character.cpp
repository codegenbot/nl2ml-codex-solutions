#include <string>

string middleCharacter(string s) {
    int len = s.length();
    if(len % 2 != 0) {
        return string(1, s[len/2-1]);
    } else {
        return s.substr(len/2-1, 2);
    }
}