if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = pow(x, 1.0 / n);
    return (floor(result) == result);
}