#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> factors = factorize(n);
    cout << "Factors: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
    return 0;
}