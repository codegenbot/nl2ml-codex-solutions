#include <string>
#include <sstream>
#include <iomanip> // for setfill, setw, hex
#include <openssl/md5.h>
#include <openssl/ssl.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.length(), md);
    
    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << uppercase << (int)md[i];
    }
    
    return ss.str();
}