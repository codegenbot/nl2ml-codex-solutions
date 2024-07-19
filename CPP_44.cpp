#include <string>
#include <iostream>
#include <cassert>

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main(){
    int x = 12;
    assert(change_base(x, 10) == std::to_string(x));
    return 0;
}