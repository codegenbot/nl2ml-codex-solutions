#include <bits/stdc++.h>

std::string string_xor(std::string a, std::string b);

int main() {
    assert(string_xor("0101", "0000") == "0101");
    // Your code here
}

std::string string_xor(std::string a, std::string b) {
    std::string result = "";
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}