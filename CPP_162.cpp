#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&md5, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &md5);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return oss.str();
}