Here's the solution:

bool is_simple_power(int x, int n) {
    if (n == 0)
        return false;

    double y = pow(n, log(x) / log(n));
    return y == x;
}