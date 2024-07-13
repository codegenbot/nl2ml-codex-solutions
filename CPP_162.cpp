#include <openssl/ssl.h>
#include <openssl/sha.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *ptr = text.c_str();
    while (*ptr) MD5_Update(&ctx, ptr++, 1);
    MD5_Final(md, &ctx);
    
    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        oss << setfill('0') << setw(2) << hex << (int)md[i];
    return oss.str();
}