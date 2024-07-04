#include <stdio.h>

int fib4(int n) {
    if (n == 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 2;
    if (n == 3) return 0;

    int a = 0, b = 0, c = 2, d = 0, e;
    for (int i = 4; i <= n; ++i) {
        e = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = e;
    }
    return d;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fib4(n));
    return 0;
}