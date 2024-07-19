#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal) {
    std::string binary = "";
    while (decimal > 0) {
        if ((decimal & 1) == 1)
            binary.insert(0, "1");
        else
            binary.insert(0, "0");
        decimal >>= 1;
    }
    return "db" + binary + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    std::cout << "Binary representation of 15: " << decimal_to_binary(15) << std::endl;
    return 0;
}