```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    checksum = 0
    for i, digit in enumerate(reversed(card_number)):
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        checksum += digit
    return (10 - checksum % 10) % 10