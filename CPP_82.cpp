```
#include <iostream>
#include <string>
#include <cassert>

bool prime_length(std::string str){
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

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    bool result = prime_length(str);
    if (result) {
        std::cout << "The length of the string is a prime number." << std::endl;
    } else {
        std::cout << "The length of the string is not a prime number." << std::endl;
    }
}