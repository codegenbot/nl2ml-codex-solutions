#include<stdio.h>
using namespace std;

int fibfib(int n) {
    if (n == 0 || n == 1) return 0;
    if (n == 2) return 1;
    
    int a = 0, b = 0, c = 1, d;
    for (int i = 3; i <= n; ++i) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return d;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fibfib(n));
    return 0;
}