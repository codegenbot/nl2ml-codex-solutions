```cpp
#include <iostream>
#include <string>
#include <cctype>

bool prime_length(const std::string& str) {
    int len = static_cast<int>(str.length());
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main() 
{
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    bool flag = true;
    for(auto c : input){
        flag &= std::isdigit(c); 
    }
    int len = input.length(); 
    std::string last_part;
    if(len >= 10)
        last_part = std::to_string(len).substr(std::to_string(len).length() - 2, 2);
    else
        last_part.push_back((len % 10) + '0');
    if(flag && prime_length(std::to_string(len))) {  
        std::cout << "The length of the string is prime." << std::endl;
    } else {
        std::cout << "The length of the string is not prime." << std::endl;
    }
}