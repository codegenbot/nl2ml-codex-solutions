Here is the completed code:

bool any_int(float a, float b, float c) {
    if ((int)a + (int)b == (int)c || (int)a + (int)c == (int)b || (int)b + (int)c == (int)a) && (a == (int)a) && (b == (int)b) && (c == (int)c)) {
        return true;
    }
    return false;
}