```cpp
#include <string>
using namespace std;

string middleCharacter(string str) {
    int len = str.length();
    if(len % 2 == 0) {
        return string(1, str[len/2 - 1]) + string(1, str[len/2]);
    } else {
        return string(1, str[len/2]);
    }
}

int main() {
    string input = "hello";
    cout << middleCharacter(input) << endl;
    return 0;
}