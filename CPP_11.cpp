```cpp
#include <string>
#include <iostream>

using namespace std;

string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    cout << string_xor("0101", "0000") << endl;
    return 0;
}