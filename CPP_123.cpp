vector<int> collatz(int n) {
    vector<int> sequence;
    sequence.push_back(n);
    
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (3 * n) + 1;
        }
        sequence.push_back(n);
    }
    
    return sequence;
}

vector<int> get_odd_collatz(int n) {
    vector<int> collatzSequence = collatz(n);
    vector<int> oddNumbers;
    
    for (int num : collatzSequence) {
        if (num % 2 != 0) {
            oddNumbers.push_back(num);
        }
    }
    
    sort(oddNumbers.begin(), oddNumbers.end());
    
    return oddNumbers;
}