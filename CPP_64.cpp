#include <string>

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || (c == 'y' && s.find('y') == s.length() - 1)) {
            count++;
        }
    }
    return count;