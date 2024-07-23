```
#include <iostream>
#include <string>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool prime_length(const std::string& str) {
    int len = static_cast<int>(str.length());
    return isPrime(len);
}

int main_func() {
    std::cout << "Enter a string: ";
    std::string str;
    std::getline(std::cin, str); 
    bool result = prime_length(str); 
    if (result) {
        std::cout << "Prime length" << std::endl;
    } else {
        std::cout << "Not prime length" << std::endl;
    }
    return 0;
}