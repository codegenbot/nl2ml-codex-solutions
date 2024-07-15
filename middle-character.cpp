```cpp
#include <string>
#include <iostream>

using namespace std;

string middleCharacter(string str) {
    int length = str.length();
    if (length % 2 == 0) {
        return str.substr(length / 2 - 1, 2); 
    } else {
        return string(1, str[length / 2]); 
    }
}

int main() {
    cout << middleCharacter("Hello World");
    return 0;
}