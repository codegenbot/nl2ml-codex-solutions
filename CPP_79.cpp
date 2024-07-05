#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string decimal_to_binary(int decimal) {
    if (decimal == 0) return "db0db";
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    assert(decimal_to_binary(0) == "db0db");
    assert(decimal_to_binary(1) == "db1db");
    assert(decimal_to_binary(8) == "db1000db");
    // Add more tests if needed
    return 0;
}