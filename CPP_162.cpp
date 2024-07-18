#include <string>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }
    
    EVP_MD_CTX* mdctx;
    const EVP_MD* md;
    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;
    
    OpenSSL_add_all_digests(); // Corrected function call
    
    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_free(mdctx);
 
    char mdString[33];
    for (int i = 0; i < md_len; i++) {
        sprintf(&mdString[i * 2], "%02x", md_value[i]);
    }

    return std::string(mdString);
}