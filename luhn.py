def luhn(card_number):
    total = 0
    for i in range(len(card_number)):
        digit = int(card_number[15 - i])
        if (i % 2) == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return total