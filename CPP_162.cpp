#include <stdio.h>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* md_ctx = EVP_MD_CTX_new();
    EVP_DigestInit(md_ctx, EVP_md5());
    EVP_DigestUpdate(md_ctx, text.c_str(), text.length());
    EVP_DigestFinal(md_ctx, digest, NULL);
    EVP_MD_CTX_free(md_ctx);

    char md5String[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&md5String[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5String);
}