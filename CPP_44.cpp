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
    using namespace std;
    int x = 10;
    assert(change_base(x, x + 1) == std::__cxx11::to_string(x));
    return 0;
}