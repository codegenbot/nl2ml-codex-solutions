int prod_signs(const std::vector<int>& arr) {
    int product = 1;
    int sum = 0;
    
    if (arr.empty()) {
        return -32768;
    }
    
    for (int num : arr) {
        if (num > 0) {
            product *= 1;
        } else if (num < 0) {
            product *= -1;
        } else {
            product *= 0;
        }
        
        sum += std::abs(num);
    }
    
    return product * sum;
}