Here's the completed code:

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return abs(y - round(y)) < 1e-9;
}