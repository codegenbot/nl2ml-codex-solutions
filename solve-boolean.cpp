#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    if (input == "T") {
        cout << "True" << endl;
    } else if (input == "F") {
        cout << "False" << endl;
    }

    return 0;
}