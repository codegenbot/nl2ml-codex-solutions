Here's the completed code:

bool is_simple_power(int x, int n) {
    return pow(n, ceil(log(x)/log(n))) == x;
}