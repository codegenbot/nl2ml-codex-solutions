#include <string>

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && (s.find("yy") != string::npos || s.back() == 'y'))) {
            count++;
        }
    }
    return count;