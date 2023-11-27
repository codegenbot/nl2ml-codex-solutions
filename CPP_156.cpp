#include <iostream>
#include <vector>
#include <string>

using namespace std;

string int_to_mini_roman(int number) {
    vector<string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result = "";

    for (int i = 0; i < values.size(); i++) {
        while (number >= values[i]) {
            result += romanNumerals[i];
            number -= values[i];
        }
    }

    return result;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << int_to_mini_roman(num) << endl;

    return 0;
}