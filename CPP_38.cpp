#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string encode_cyclic(string s){
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1, 2) + x[0];
        output = output + x;
    }
    return output;
}

string decode_cyclic(string s){ 
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output = output + x;
    }
    return output;
}

int main(){
    string str, encoded_str;

    cout << "Enter a string: ";
    cin >> str;

    encoded_str = encode_cyclic(str);
    
    assert(decode_cyclic(encoded_str) == str);

    cout << "Encoded: " << encoded_str << endl;

    return 0;
}