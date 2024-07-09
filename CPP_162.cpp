#include <openssl/ssl.h>
#include <openssl/x509v3.h>
#include <sstream>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    std::stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}