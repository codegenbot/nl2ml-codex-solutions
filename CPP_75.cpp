if (a < 30) 
        return false;
    for (int i = 2; i <= a / 3; i++) {
        if (a % i == 0) {
            int b = a / i;
            for (int j = 2; j <= b; j++) {
                if (b % j == 0) {
                    int c = b / j;
                    if (c != 1 && b % c == 0)
                        return true;
                }
            }
        }
    }
    return false;
}