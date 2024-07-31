#include <string>
#include <openssl/ssl.h>
#include <openssl/sha.h>

using namespace std;

string string_to_md5(string text) {
    MD5_CTX md5;
    unsigned char result[16];
    string output;

    if (text.empty()) {
        return "";
    }

    MD5_Init(&md5);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&md5, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &md5);

    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", result[i]);
        output += buffer;
    }

    return output;
}