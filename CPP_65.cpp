#include <string>
#include <algorithm> // include algorithm header for reverse function
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