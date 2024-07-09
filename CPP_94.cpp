int skjkasdkd(vector<int> lst) {
    int maxPrime = -1; // Initialize to a non-zero value
    for (int num : lst) {
        if (num < 2) continue;
        bool isPrime = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && num > maxPrime) {
            maxPrime = num;
        }
    }
    if (maxPrime == -1) return 0; // Handle case when no prime number found in the list
    int sum = 0;
    while (maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}