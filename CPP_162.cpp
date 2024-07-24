#include <string>
#include <iostream>
#include <stringstream>
#include <iomanip>
#include <digest.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.length(), result);
    
    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }
    
    return ss.str();
}