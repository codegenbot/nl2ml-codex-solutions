
#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return mdString;
}

int main() {
    std::string input_text;
    std::cout << "Enter the text to generate MD5 hash: ";
    std::cin >> input_text;

    std::string md5_hash = string_to_md5(input_text);
    std::cout << "MD5 hash of the input text is: " << md5_hash << std::endl;

    return 0;
}