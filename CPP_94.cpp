Here is the completed code:

int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int i : lst){
        if(i > 1 && isPrime(i)){
            if(max_prime < i) max_prime = i;
        }
    }
    return sum_digits(max_prime);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sum_digits(int n) {
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}