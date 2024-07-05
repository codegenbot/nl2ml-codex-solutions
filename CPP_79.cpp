#include <string>
#include <iostream>
#include <cassert>

using namespace std;

string decimal_to_binary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + (binary.empty() ? "0" : binary) + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    cout << "All tests passed!" << endl;
    return 0;
}