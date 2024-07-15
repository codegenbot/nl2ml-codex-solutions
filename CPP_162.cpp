#include <iostream>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if(text.empty()) {
        return "None";
    }

    EVP_MD_CTX *mdctx;
    const EVP_MD *md = EVP_md5();
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[(EVP_MAX_MD_SIZE * 2) + 1];
    for(unsigned int i = 0; i < digest_len; i++) {
        sprintf(&mdString[i*2], "%02x", digest[i]);
    }
    mdString[digest_len * 2] = '\0';

    return mdString;
}

int main() {
    string result = string_to_md5("password");
    std::cout << result << std::endl;

    return 0;
}