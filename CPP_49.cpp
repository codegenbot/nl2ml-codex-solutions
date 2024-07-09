#include <iostream>

using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (; n > 0; n >>= 1) {
        if (n & 1)
            res = (long long)res * p % p;
        p = (long long)p * p % p;
    }
    return res;
}

int main() {
    int n, p;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of p: ";
    cin >> p;
    cout << "2^n modulo p = " << modp(n, p) << endl;
    return 0;
}