Here is the completed code:

bool any_int(float a, float b, float c) {
    if (a == int(a) && b == int(b) && c == int(c)) {
        return a + b == c || a + c == b || b + c == a;
    }
    return false;
}