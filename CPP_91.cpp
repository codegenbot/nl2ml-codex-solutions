#include <stdio.h>
#include <string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find('.', pos)) != string::npos || (pos = S.find('?', pos)) != string::npos || (pos = S.find('!', pos)) != string::npos) {
        if (S.substr(0, pos).find("I") == 0) {
            count++;
        }
        pos++;
    }
    return count;
}