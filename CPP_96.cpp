#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> count_up_to(int n);

int main() {
    int n;
    cin >> n;

    vector<int> primes = count_up_to(n);

    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}

vector<int> count_up_to(int n) {
    vector<int> result;
    if (n <= 1) {
        return result;
    }
    
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i < n; ++i) {
        if (isPrime[i]) {
            result.push_back(i);
            for (int j = i * 2; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    return result;
}