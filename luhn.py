
def luhn(digits):
    digits = [int(digit) for digit in digits]
    sum = 0
    for i in range(15, -1, -2):
        digit = digits[i] * 2
        if digit > 9:
            sum += (digit // 10 + digit % 10) - 9
        else:
            sum += digit // 10 + digit % 10
    return sum