```cpp
std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 0) binary += '0';
        else binary += '1';
        decimal /= 2;
    }
    return std::to_string(binary);
}