#include <openssl/md5.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), md5);
    
    ostringstream oss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << uppercase << (int)md5[i];
    }
    
    return oss.str();
}