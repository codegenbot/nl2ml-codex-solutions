#include <string>
#include <cassert>
#include <iostream>

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        int remainder = x % base;
        result = std::to_string(remainder) + result;
        x /= base;
    }
    return result;
}

int main(){
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(static_cast<long long>(x)));
    return 0;
}