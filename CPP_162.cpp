#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text) {
    MD5_CTX md5ctx;
    unsigned char result[16];
    string output;

    if (text.empty()) {
        return "";
    }

    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.length());
    MD5_Final(result, &md5ctx);

    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += temp;
    }

    return output;
}