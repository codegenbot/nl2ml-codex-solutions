#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5;
    unsigned char result[16];
    MD5_Init(&md5);
    const char* ptr = text.c_str();
    size_t len = text.size();
    MD5_Update(&md5, ptr, len);
    MD5_Final(result, &md5);

    stringstream ss;
    for (size_t i = 0; i < 16; ++i) {
        ss << hex << setfill('0') << setw(2) << (int)result[i];
    }

    return ss.str();
}