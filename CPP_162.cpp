#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <crypto++/sha.h>

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    
    CryptoPP::SHA1 sha;
    unsigned char hash[20];
    sha.Calculate((const unsigned char*)s.c_str(), s.size(), hash);

    std::stringstream ss;
    for(int i = 0; i < 20; ++i) {
        ss << std::hex << std::setfill('0') << std::setw(2) << (int)hash[i];
    }

    std::cout << "The SHA1 is: " << ss.str() << std::endl;
    
    return 0;
}