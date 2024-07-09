```cpp
#include <openssl/md5.h>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}

int main() {
    assert(string_to_md5("password") == "5d41402abc4e666f1db91062772ac692");
    return 0;
}