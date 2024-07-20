#include <string>
#include <algorithm>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *cstr = text.c_str();
    while (*cstr) {
        MD5_Update(&ctx, cstr, 1);
        cstr++;
    }
    MD5_Final(md, &ctx);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return oss.str();
}