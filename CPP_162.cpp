#include <iostream>
#include <string>
#include <sstream>
#include "sha1.h"

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    
    std::stringstream ss;
    CryptoPP::SHA1 sha;
    unsigned char md5[16];
    sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), md5);

    for(int i = 0; i < 16; ++i) {
        ss << ((md5[i] * 4 > 9 ? std::hex << std::showbase : std::hex << std::noshowbase)
            << std::setfill('0') << std::setw(2) << (int)(md5[i]));
    }

    std::cout << "The MD5 is: " << ss.str() << std::endl;
    
    return 0;
}