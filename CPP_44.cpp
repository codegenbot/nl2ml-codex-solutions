#include <cassert>
#include <string>

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main(){
    int x = 5; // Change x value
    assert(change_base(x, x + 1) == std::to_string(x)); // Use std::to_string
    return 0;
}