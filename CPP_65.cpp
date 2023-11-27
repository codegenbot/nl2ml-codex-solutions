#include <string>

string circular_shift(int x, int shift);

int main() {
    // your code here
}

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    string result = num.substr(n - shift) + num.substr(0, n - shift);
    return result;
}