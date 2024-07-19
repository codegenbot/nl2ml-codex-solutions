if (arr.empty()) {
        return -32768;
    }
    
    int product = 1;
    for (int num : arr) {
        product *= (num == 0 ? 0 : num / abs(num));
    }
    
    int sum = 0;
    for (int num : arr) {
        sum += abs(num);
    }
    
    return product * sum;
}