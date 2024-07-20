#include <openssl/md5.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(result.c_str() + i * 2, "%02x", md5[i]);
    }
    return result;
}