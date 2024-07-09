#include <cassert>
#include <openssl/evp.h>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX md5Context;
    unsigned char buffer[text.length()];
    for(int i = 0; i < text.length(); i++) {
        buffer[i] = text[i];
    }
    MD5_Init(&md5Context);
    MD5_Update(&md5Context, buffer, text.length());
    MD5_Final(result, &md5Context);

    std::string md5String;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        md5String += temp;
    }
    
    return md5String;
}

int main() {
    assert(string_to_md5("password") == "5d41402abc4ee1611ddc5a3f8f2ec350");
    return 0;
}