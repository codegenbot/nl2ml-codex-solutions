#include <vector>

using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            factors.push_back(i);
            if (count > 1) {
                factors.push_back(count);
            }
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}