#include <iostream>
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal){
    std::string binary;
    while(decimal > 0){
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    assert (decimal_to_binary(15) == "1111");
    
    std::cout << "All test cases passed" << std::endl;
    
    return 0;
}