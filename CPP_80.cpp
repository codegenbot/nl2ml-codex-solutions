#include <iostream>
#include <string>
#include <cassert>

bool is_happy(const std::string& s) {
    if(s.length() < 3){
        return false;
    }
    
    for(int i=0; i<s.length()-2; i++){
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]){
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(is_happy("iopaxioi") == false);
    assert(is_happy("abc") == true);
    assert(is_happy("xyx") == false);
    
    return 0;
}