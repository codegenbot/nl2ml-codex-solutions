if (n <= 1 || x <= 1)
        return false;
    
    double result = log(x) / log(n);
    return (result == (int)result);