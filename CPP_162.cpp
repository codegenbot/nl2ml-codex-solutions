#include <openssl/evp.h>

std::string string_to_md5(std::string text) {
    EVP_MD_CTX mdctx;
    unsigned char md[16];
    const char* str = text.c_str();
    size_t len = text.length();

    if (len == 0)
        return "";

    EVP_MD_CTX_init(&mdctx);
    EVP_DigestInit_ex(&mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(&mdctx, str, len);
    unsigned char mdSig[EVP_MAX_BLOCK_LENGTH];
    int len_output = EVP_DigestFinal_ex(&mdctx, mdSig, &len);
    EVP_MD_CTX_free(&mdctx);

    std::string result;
    for (int i = 0; i < len; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", mdSig[i]);
        result += buffer;
    }
    return result;
}