#include <openssl/md5.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *p = text.c_str();
    while (*p) {
        MD5_Update(&ctx, p, 1);
        p++;
    }
    MD5_Final(md5, &ctx);
    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result += buf;
    }
    return result;
}