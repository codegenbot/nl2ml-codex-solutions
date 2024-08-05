#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal){
    std::string binary = "db";
    while (decimal > 0) {
        binary = ((decimal & 1) ? '1' : '0') + binary;
        decimal >>= 1;
    }
    return binary + "db";
}

int main(){
    assert(decimal_to_binary(15) == "db1111db");
    return 0;
}