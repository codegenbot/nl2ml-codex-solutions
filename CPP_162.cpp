#include <iostream>
#include <cassert>
#include <openssl/md5.h>
#include <string>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char mdString[33];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}

int main() {
    assert (string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}