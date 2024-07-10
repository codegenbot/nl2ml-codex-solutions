#include <openssl/opensslconf.h>
#include <string>
#include <openssl/evp.h>

using namespace std;

extern "C" {
    #include <openssl/evp.h>
}

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX* ctx = EVP_MD_CTX_create();
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    const unsigned char* input = (const unsigned char*)text.c_str();
    size_t len = text.size();

    EVP_DigestUpdate(ctx, input, static_cast<unsigned int>(len));
    EVP_DigestFinal(ctx, md5, &len);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += string(buffer);
    }

    EVP_MD_CTX_destroy(ctx);

    return result;
}