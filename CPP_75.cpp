for (int i = 2; i < a; i++) {
    if (a % i == 0) {
        int factor1 = i;
        int factor2 = a / i;
        for (int j = 2; j < factor1; j++) {
            if (factor1 % j == 0) {
                return false;
            }
        }
        for (int k = 2; k < factor2; k++) {
            if (factor2 % k == 0) {
                return false;
            }
        }
        return true;
    }
}
return false;
}