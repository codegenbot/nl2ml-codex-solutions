#include <string>
#include <cctype>
#include <iostream>

int pairedDigits(std::string str) {
    int sum = 0;
    for(int i=0; i<str.length()-1; i++) {
        if(str[i] == str[i+1]) {
            sum += (str[i]-48); 
        }
    }
    return sum;
}

int main() {
    std::cout << pairedDigits("123333") << std::endl;
    return 0;