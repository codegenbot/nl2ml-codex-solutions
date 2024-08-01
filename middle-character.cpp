#include <string>
using namespace std;

string middleCharacter(string str) {
    int len = str.length();
    if(len % 2 == 0) {
        return str.substr(len/2 - 1, 2);
    } else {
        return string(1, str[len/2]);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string result = middleCharacter(input);
    cout << "Middle character(s): " << result << endl;
    return 0;
}