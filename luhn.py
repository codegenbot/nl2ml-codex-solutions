def luhn(card_number):
    result = 0
    for i in range(len(card_number) - 1):
        digit = int(card_number[i])
        if i % 2 != 0:
            digit *= 2
            if digit > 9:
                digit -= 9
        result += digit
    return str(result)