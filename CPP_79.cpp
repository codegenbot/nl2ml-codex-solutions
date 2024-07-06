#include <string>
#include <iostream>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0) {
        if (decimal % 2 == 1)
            binary.push_back('1');
        else
            binary.push_back('0');
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    assert (decimal_to_binary(15) == "db1111db");
    return 0;
}