if (x <= 0 || n <= 0) {
        return false;
    }
    
    double exp = log(x) / log(n);
    
    return (int)exp == exp;
}