int skjkasdkd(vector<int> lst) {
    int max_prime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            max_prime = max(max_prime, num);
        }
    }
    return sum_of_digits(max_prime);
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}