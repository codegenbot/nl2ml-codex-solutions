int a = 0, b = 0, c = 2, d = 0, temp;
    if (n <= 2) {
        return n == 0 ? 0 : 2;
    }
    for (int i = 3; i <= n; ++i) {
        temp = d + c + b + a;
        a = b;
        b = c;
        c = d;
        d = temp;
    }
    return d;
}