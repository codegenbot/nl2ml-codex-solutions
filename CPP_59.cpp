Here is the completed code:

```cpp
int largest_prime_factor(int n) {
    int max = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            if (i > max)
                max = i;
        }
    }
    return max;
}