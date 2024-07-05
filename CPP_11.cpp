#include <string>
#include <iostream>
using namespace std;

string string_xor(string a, string b){
    string result = "";
    for (size_t i = 0; i < a.size(); ++i) {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    return result;
}

int main() {
    cout << string_xor("0101", "0000") << endl;
    return 0;
}