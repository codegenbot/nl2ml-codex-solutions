#include <string>
#include <cassert>

int count_upper(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i+=2){
        char c = s[i];
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 2);
    assert(count_upper("abdEIOU") == 4);
    assert(count_upper("") == 0);

    return 0;
}