#include <string>
#include <sstream>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, ptr, len);
    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill(2) << right << hex << (int)md5[i];
    }

    return string(ss.str());
}