#include <string>
#include <iostream>
#include <cassert>

bool is_palindrome(std::string text){
    int len = text.length();
    for(int i=0; i<len/2; i++){
        if(text[i] != text[len-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    assert (is_palindrome("xywzx") == false);
    return 0;
}