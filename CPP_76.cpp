Here's the solution:

bool is_simple_power(int x, int n) {
    double y = pow(n, 1.0);
    return (int)y == x;
}