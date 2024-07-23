```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> count_up_to(int n) {
    vector<int> result;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            result.push_back(i);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    vector<int> primes = count_up_to(n);
    
    if (primes.empty()) {
        cout << "No prime numbers found in the range 1 to " << n << endl;
    } else {
        cout << "Prime numbers up to " << n << ":";
        for (int num : primes) {
            cout << " " << num;
        }
        cout << endl;
    }
    
    return 0;
}