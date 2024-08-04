def luhn(card):
    total = 0
    for i in range(16):
        digit = int(card[i])
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return str(total)