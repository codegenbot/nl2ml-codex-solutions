#include <iostream>
#include <cassert>
#include <sstream>
#include <iomanip>
#include <functional>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& str) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)str.c_str(), str.length(), digest);

    std::stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)digest[i];
    }

    return ss.str();
}