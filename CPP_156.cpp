#include <iostream>
#include <vector>
#include <string>
using namespace std;

string int_to_mini_roman(int number) {
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    string result = "";
    
    for (int i = 0; i < values.size(); i++) {
        while (number >= values[i]) {
            result += symbols[i];
            number -= values[i];
        }
    }
    
    return result;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    string roman = int_to_mini_roman(num);
    cout << "Roman numeral equivalent: " << roman << endl;
    
    return 0;
}