int greatest_common_divisor(int a, int b) {
    if (b == 0)
        return a;
    return greatest_common_divisor(b, a % b);
}

int main() {
    assert(greatest_common_divisor(144, 60) == 12);
    assert(greatest_common_divisor(81, 27) == 27);
    assert(greatest_common_divisor(17, 5) == 1);
    return 0;
}