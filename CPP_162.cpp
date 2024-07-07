#include <openssl/err.h>
#include <openssl/md5.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    const unsigned char* input = text.c_str();
    size_t len = text.size();

    MD5Update(&ctx, input, len);
    MD5Final(md5, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }

    return result;
}