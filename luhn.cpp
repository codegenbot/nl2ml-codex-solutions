int luhn(int cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    std::vector<int> numbers;
    while (cardNumber > 0) {
        numbers.push_back(cardNumber % 10);
        cardNumber /= 10;
    }
    
    for (int i = numbers.size() - 1; i >= 0; --i) {
        int digit = numbers[i];

        if (doubleNext) { 
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}