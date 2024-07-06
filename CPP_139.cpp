#include<iostream>
using namespace std;

long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= fact(i);
    }
    return result;
}

long long fact(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << special_factorial(n) << endl;
    return 0;
}