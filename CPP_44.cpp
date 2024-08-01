string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = to_string(remainder) + result;
        x /= base;
    }
    return result;
}

int main() {
    assert (change_base(x, x + 1) == to_string(x));
    return 0;
}