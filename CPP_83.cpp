#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        if (n > 1 && i % 10 != 0) {
            continue;
        }
        if (i >= 10 && i % 10 == 1) {
            count++;
        }
    }
    for (long long i = 10; i <= pow(10, n - 1); i++) {
        if (i % 10 == 1 || i / pow(10, n - 1) % 10 == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n);
    return 0;
}