#include <iostream>
#include <string>
#include <sstream>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5(text.c_str(), text.size(), result);
    
    stringstream ss;
    for(int i = 0 ; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)result[i];
    }
    
    return ss.str();
}