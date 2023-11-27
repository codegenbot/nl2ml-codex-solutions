#include <iostream>
#include <string>
using namespace std;

bool check_if_last_char_is_a_letter(string txt){
    int len = txt.length();
    if(len == 0)
        return false;
    if(isalpha(txt[len-1])){
        if(txt[len-2] == ' ' || len == 1)
            return true;
    }
    return false;
}

int main() {
    cout << check_if_last_char_is_a_letter("apple pi e ") << endl;
    return 0;
}