#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.size();
    shift %= n;
    if (shift == 0) {
        return num;
    }
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    return num.substr(n - shift) + num.substr(0, n - shift);
}

int main() {
    cout << circular_shift(11, 101) << endl;
    return 0;
}