#include <string>
#include <iostream>

int pairedDigits(std::string str) {
    int sum = 0;
    for(int i=0; i<str.length()-1; ) {
        if(str[i] == str[i+1]) {
            sum += str[i] - '0';
            if(i < str.length() - 2 && str[i] == str[i+2]) {
                i += 2;
            } else {
                i++;
            }
        } else {
            i++;
        }
    }
    return sum;
}

int main() {
    std::cout << pairedDigits("1112023") << std::endl;
    return 0;
}