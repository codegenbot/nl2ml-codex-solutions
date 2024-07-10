#include <iostream>
using namespace std;

long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= 1LL * i;
    }
    return result;
}

int main 
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The special factorial of " << n << " is: " << special_factorial(n) << endl;
    return 0;
}