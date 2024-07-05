#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string string_xor(string a, string b){
    string result = "";
    for(size_t i = 0; i < a.length(); ++i) {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    return result;
}

int main() {
    // Example usage and assertion
    assert(string_xor("0101", "0000") == "0101");
    return 0;
}