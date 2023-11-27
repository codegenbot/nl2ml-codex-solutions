#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string circular_shift(int x, int shift);

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.size();
    
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= n;
    rotate(num.rbegin(), num.rbegin() + shift, num.rend());
    
    return num;
}

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}