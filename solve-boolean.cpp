#include <iostream>
#include <string>

using namespace std;

int main() {
    string expression;
    cin >> expression;

    if (expression == "t") {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}