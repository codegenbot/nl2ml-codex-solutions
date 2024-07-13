int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool alternate = true; 
    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        int digit = cardNumber[i] * (alternate ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        alternate = !alternate; 
    }
    return sum % 10;
}