bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) return false;
    double result = log((double)x) / log((double)n);
    return result == (int)result;
}