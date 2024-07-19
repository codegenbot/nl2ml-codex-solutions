#include <string>
#include <openssl/ssl.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char md5[16];
    unsigned char *p = NULL;
    string result;

    MD5_Init(&ctx);
    p = reinterpret_cast<unsigned char*>(text.c_str());
    MD5_Update(&ctx, p, text.size());
    MD5_Final(md5, &ctx);

    for (int i = 0; i < 16; i++) {
        stringstream ss;
        ss << hex << setw(2) << setfill('0') << (int)md5[i];
        result += ss.str();
    }

    return result;
}