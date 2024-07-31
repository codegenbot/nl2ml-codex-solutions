```cpp
#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&mdContext, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &mdContext);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << static_cast<int>(result[i]);
    }

    return oss.str();
}