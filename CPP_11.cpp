#include <iostream>
#include <string>
using namespace std;

string string_xor(string a, string b) {
    string result = "";
    for(size_t i = 0; i < a.length(); ++i) {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    return result;
}

int main() {
    cout << (string_xor("0101", "0000") == "0101") << endl; // should output 1 (true)
}