#include <vector>
using namespace std;

int skjkasdkd(vector<int> lst) {
    int maxPrime = 0;
    for (int i : lst) {
        if (isPrime(i)) {
            if (i > maxPrime) {
                maxPrime = i;
            }
        }
    }
    int sumDigits = 0;
    while (maxPrime > 0) {
        sumDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumDigits;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(skkkasdkd({127, 97, 8192}) == 10);
}