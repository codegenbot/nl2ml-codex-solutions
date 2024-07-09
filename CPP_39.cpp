#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int prime_fib(int n) {
    int fib_num = 0, prev_fib = 1, count = 0;
    while (true) {
        int temp = fib_num + prev_fib;
        if (isPrime(temp)) {
            fib_num = temp;
            count++;
            if (count == n)
                return fib_num;
        }
        prev_fib = fib_num;
        fib_num = temp;
    }
}

int main() {
    cout << prime_fib(1) << endl; // 2
    cout << prime_fib(2) << endl; // 3
    cout << prime_fib(3) << endl; // 5
    cout << prime_fib(4) << endl; // 13
    cout << prime_fib(5) << endl; // 89
    return 0;
}