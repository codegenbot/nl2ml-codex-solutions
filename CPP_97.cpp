int multiply(int a, int b) {
    int digitA = a % 10;
    int digitB = abs(b) % 10;
    return digitA * digitB;
}