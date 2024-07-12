#include <iostream>
#include <string>
#include <MD5.h>

int main() {
    std::cout << "Enter a string: ";
    std::string text;
    std::cin >> text;

    std::string md5 = string_to_md5(text);

    std::cout << "MD5 sum: " << md5 << std::endl;

    return 0;
}

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(md5, &ctx);
    std::string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.append(buf);
    }
    return result;
}