int factor = 2;
    while (n > factor) {
        if (n % factor == 0) {
            n = n / factor;
        } else {
            factor++;
        }
    }
    return factor;
}