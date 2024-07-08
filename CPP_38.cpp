#include <iostream>
#include <string>

using namespace std;

string encode_cyclic(string s) {
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    int i;
    for (i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1) + x[0];
        output += x;
    }
    return output;
}

string decode_cyclic(string s) {
    int l = s.length();
    string output;
    for (int i = 0; i < l; i++) {
        if ((i + 1) * 3 > l)
            output += s.substr(i);
        else
            output += s.substr(i, 2) + s[i];
    }
    return output;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string encoded = encode_cyclic(str);
    cout << "Encoded: " << encoded << endl;

    string decoded = decode_cyclic(encoded);
    cout << "Decoded: " << decoded << endl;

    return 0;
}