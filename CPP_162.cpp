#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <cassert>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if(text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MD_size(EVP_md5())];
    EVP_MD_CTX *mdctx;
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, NULL);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }
    mdString[32] = '\0'; 

    return mdString;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    
    return 0;
}