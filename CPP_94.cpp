int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for (int i : lst) {
        if (isPrime(i)) {
            if (i > maxPrime)
                maxPrime = i;
        }
    }
    int sum = 0;
    while (maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}