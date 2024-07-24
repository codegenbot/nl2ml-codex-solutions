```cpp
#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "Invalid Input";
    }

    MD5_CTX ctx;
    unsigned char md[16];

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md, &ctx);

    std::string result;
    for (int i = 0; i < 16; ++i) {
        result += setfill(2) << setw(2) << hex << (int)md[i];
    }
    return result;
}