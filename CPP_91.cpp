```
#include <string>

int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find('.')). != string::npos || 
           (pos = S.find('?')). != string::npos || 
           (pos = S.find('!')). != string::npos) {
        if (S.substr(0, boredom.size()).compare(boredom) == 0) {
            count++;
        }
        pos++;
    }
    return count;
}