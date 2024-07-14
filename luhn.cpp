int luhn(const vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 15; i >= 0; i--) {
        if (doubleNext) {
            int doubledDigit = (digits[i] * 2);
            if (doubledDigit > 9)
                sum += (doubledDigit % 10) + 1; 
            else
                sum += doubledDigit;
        } else {
            sum += digits[i];
        }
        doubleNext = !doubleNext;
    }
    return sum;
}