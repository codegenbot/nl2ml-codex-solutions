#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Middle character(s): " << middleCharacter(str) << endl;
    return 0;
}

string middleCharacter(string str) {
    int len = str.length();
    if (len % 2 == 0) {
        return str.substr(len / 2 - 1, 2);
    } else {
        return str.substr(len / 2, 1);
    }
}