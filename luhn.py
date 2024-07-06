def luhn(digits):
    digits = [int(digit) for digit in digits]
    sum = 0
    for i in range(1, 16, 2):
        digit = digits[i - 1] * 2
        if digit > 9:
            digit -= 9
        sum += digit // 10 + digit % 10
    return sum % 10