#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_multiply_prime(int a) {
    vector<int> primes;
    for (int i = 2; i <= a; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    if (primes.size() < 3) {
        return false;
    }
    for (int i = 0; i < primes.size() - 2; i++) {
        for (int j = i + 1; j < primes.size() - 1; j++) {
            for (int k = j + 1; k < primes.size(); k++) {
                if (primes[i] * primes[j] * primes[k] == a) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int num;
    cin >> num;
    cout << boolalpha << is_multiply_prime(num) << endl;
    return 0;
}