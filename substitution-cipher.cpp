#include <iostream>
#include <string>
using namespace std;

string decipher(string cipher1, string cipher2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        bool found = false;
        for (int j = 0; j < cipher1.length(); j++) {
            if (message[i] == cipher1[j]) {
                result += cipher2[j];
                found = true;
                break;
            }
        }
        if (!found) {
            result += message[i];
        }
    }
    return result;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << decipher(cipher1, cipher2, message) << endl;
    return 0;
}