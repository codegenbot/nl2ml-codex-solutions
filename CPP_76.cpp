if (x <= 0 || n <= 0)
        return false;
    
    double root = pow(x, 1.0 / n);
    return (pow(floor(root + 0.5), n) == x);
}