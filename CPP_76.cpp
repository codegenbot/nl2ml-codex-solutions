Here's the solution:

bool is_simple_power(int x, int n) {
    return pow(n, ceil(log(x)/log(n))) == x;
}