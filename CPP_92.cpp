bool any_int(int a, int b, int c) {
    if (a == static_cast<int>(a) && b == static_cast<int>(b) && c == static_cast<int>(c)) {
        return (a == b + c || a == c + b || b == a + c || b == c + a || c == a + b || c == b + a);
    }
    return false;
}