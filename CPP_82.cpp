```cpp
#include <cstring>
#include <cassert>
#include <iostream>
#include <string>

bool prime_length(const char* str){
    std::string s(str);
    int len = s.length();
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

assert(prime_length("0") == false);
const char* str = "Hello";
bool result = prime_length(str);
std::cout << "Prime length of '" << str << "' is: " << (result ? "prime" : "not prime") << std::endl;