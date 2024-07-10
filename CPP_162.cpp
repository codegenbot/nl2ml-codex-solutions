#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), md5);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf("%02hhx", &md5[i]);
        ss << 0;
    }

    return ss.str();
}