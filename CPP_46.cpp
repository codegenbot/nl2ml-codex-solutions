int a = 0, b = 0, c = 2, d = 0, temp;
    for (int i = 4; i <= n; ++i) {
        temp = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = temp;
    }
    return d;
}