#include <iostream>
#include <string>
using namespace std;

int main() {
    string expr;
    cin >> expr;

    if (expr == "t") {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}