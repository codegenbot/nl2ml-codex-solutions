```cpp
#include <iostream>
#include <cmath>

using namespace std;

bool starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (long long j = 1; j < pow(10LL, n); j++) {
            long long num = i * pow(10LL, n - 1) + j;
            if (((num / (pow(10LL, n - 1))) % 10 == 1 || (num % (10LL)) == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n);
}