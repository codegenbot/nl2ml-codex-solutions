```cpp
#include <iostream>
#include <string>
#include <cassert>

bool prime_length(std::string str) {
    int len = str.length();
    bool isPrime = true;

    if(len <= 1)
        return false;

    for(int i = 2; i*i <= len; i++){
        if(len % i == 0){
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int other_main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    assert(prime_length(str));
}