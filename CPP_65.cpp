#include <string>
#include <cassert>

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= n;
    string result = num.substr(n - shift) + num.substr(0, n - shift);
    return result;
}

int main() {
    // Sample usage of circular_shift function
    int number, shift;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter a shift value: ";
    cin >> shift;
    
    string shiftedNumber = circular_shift(number, shift);
    cout << "Shifted number: " << shiftedNumber;
    
    return 0;
}