#include <iostream>
#include <string>
#include <sstream>
#include <cassert> // Add this header

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main(){
    int x = 10;
    std::string result = change_base(x, 10);

    assert(change_base(x, x + 1) == std::to_string(x)); // Changed to std::to_string(x)

    std::cout << result << std::endl;
    return 0;
}