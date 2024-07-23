Here is the completed code:

long long special_factorial(int n){
    if(n == 0 || n == 1) return 1;
    long long result = 1;
    for(int i = n; i > 0; --i)
        result *= fact(i);
    return result;
}

long long fact(int n){
    long long result = 1;
    for(int i = 2; i <= n; ++i)
        result *= i;
    return result;
}