Here is the completed code:

int skjkasdkd(vector<int> lst){
    int maxPrime = -1;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime)
                maxPrime = num;
        }
    }

    if (maxPrime == -1)
        return 0;

    int sum = 0;
    while (maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }

    return sum;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}