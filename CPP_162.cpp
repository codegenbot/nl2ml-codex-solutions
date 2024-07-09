#include <openssl/evp.h>
#include <string>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&mdContext, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &mdContext);

    string output;
    for (int i = 0; i < 16; i++) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        output += buff;
    }
    return output;
}