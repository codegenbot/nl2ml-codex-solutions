#include <iostream>
#include <string>

bool is_happy(std::string s) {
    if(s.length() < 3) return false;
    for(int i=0; i<s.length()-2; i++){
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]){
            return false;
        }
    }
    return true;
}

main() {
    std::string input;
    std::cin >> input;
    
    if(is_happy(input)) {
        std::cout << "Happy string" << std::endl;
    } else {
        std::cout << "Not a happy string" << std::endl;
    }
    
    return 0;
}