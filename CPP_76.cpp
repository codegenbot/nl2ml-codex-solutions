bool is_simple_power(int x, int n);
bool is_simple_power(int x, int n) {
    double y = pow(n, log(x)/log(n));
    return (y == round(y) && y == x);
}