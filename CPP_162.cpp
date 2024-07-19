#include <openssl/md5.h>
#include <string>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    char md5_hash[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5_hash[i * 2], "%02x", result[i]);
    }

    return std::string(md5_hash);
}

// Test the function
std::string expected_md5 = "5f4dcc3b5aa765d61d8327deb882cf99";
std::string input_text = "password";
std::string calculated_md5 = string_to_md5(input_text);

if (calculated_md5 == expected_md5) {
    return "Function works correctly!";
} else {
    return "Function does not produce correct MD5 hash for 'password'";
}