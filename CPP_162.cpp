#include <openssl/evp.h>
#include <string>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX c;
    MD5_Init(&c);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&c, ptr, 1);
        ptr++;
    }
    MD5_Final(md, &c);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return oss.str();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}