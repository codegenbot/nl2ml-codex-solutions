#include <iostream>
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0) {
        if (decimal % 2 == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db11111db");
    std::cout << decimal_to_binary(15);
    return 0;
}