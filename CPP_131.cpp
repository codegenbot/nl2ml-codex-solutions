string str = to_string(n);
    int product = 1;
    for(char c : str) {
        int digit = c - '0';
        if(digit % 2 != 0) {
            product *= digit;
        }
    }
    if(product == 1) {
        return 0;
    }
    return product;
}