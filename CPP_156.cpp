#include <iostream>
#include <vector>
#include <string>
using namespace std;

string int_to_mini_roman(int number) {
    vector<int> values {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string result = "";

    for (int i = 0; i < symbols.size(); i++) {
        while (number >= values[i]) {
            result += symbols[i];
            number -= values[i];
        }
    }

    for (int i = 0; i < result.length(); i++) {
        result[i] = tolower(result[i]);
    }

    return result;
}