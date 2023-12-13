bool is_simple_power(int x, int n) {
    if (n == 1) {
        return x == 1;
    }
    
    int power = 1;
    while (power <= x) {
        if (power == x) {
            return true;
        }
        power *= n;
    }
    
    return false;
}