#include <iostream>
using namespace std;

string middleCharacter(string s) {
    int n = s.length();
    if(n%2 == 0) {
        return s.substr(n/2-1, 2);
    } else {
        return s.substr(n/2, 1);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Middle character(s): " << middleCharacter(input) << endl;
    return 0;
}