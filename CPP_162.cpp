```cpp
#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.length(), md5);
    
    stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
    }
    return ss.str();
}