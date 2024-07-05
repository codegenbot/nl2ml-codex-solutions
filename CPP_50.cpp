#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string decode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); i++) {
        int w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

string encode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

int main() {
    string str;
    cin >> str;
    string encoded_str = encode_shift(str);
    cout << encoded_str << endl;
    return 0;
}