#include <stdio.h>

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (i % 11 == 0 || i % 13 == 0) {
            int temp = i;
            while (temp > 0) {
                if (temp % 10 == 7) {
                    count++;
                }
                temp /= 10;
            }
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fizz_buzz(n));
    return 0;
}