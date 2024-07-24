int fib4(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    
    int a = 0, b = 1, c = 1, d = 2, e = 3;
    
    for (int i = 5; i <= n; ++i) {
        e = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = e;
    }
    
    return e;
}