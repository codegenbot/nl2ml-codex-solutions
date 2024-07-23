#include <iostream>
#include <cassert>
#include <cstring>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(const string& text){
    if(text.empty()){
        return "None";
    }

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    char md5_hash[MD5_DIGEST_LENGTH*2 + 1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
        sprintf(&md5_hash[i*2], "%02x", result[i]);
    }

    return md5_hash;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}