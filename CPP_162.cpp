#include <iostream>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx;
    const EVP_MD* md;
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, nullptr);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_free(mdctx);

    char md5String[33];
    for (unsigned int i = 0; i < digest_len; i++) {
        sprintf(&md5String[i*2], "%02x", digest[i]);
    }

    return std::string(md5String);
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::cin >> text;

    std::string md5 = string_to_md5(text);
    std::cout << "MD5: " << md5 << std::endl;

    return 0;
}