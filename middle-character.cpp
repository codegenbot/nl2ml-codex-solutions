```
#include <iostream>
#include <string>
using namespace std;

string middleCharacter(string str) {
    int len = str.length();
    if(len % 2 == 1) {
        return string(1, str[len/2]);
    } else {
        return string(1, str[(len-1)/2]) + string(1, str[len/2]);
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << middleCharacter(str) << endl;
    return 0;
}