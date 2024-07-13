#include <openssl/md5.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    int len = text.length();
    MD5_Update(&ctx, str, len);
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&result[2 * i], "%02x", md5[i]);
    }
    return result;
}