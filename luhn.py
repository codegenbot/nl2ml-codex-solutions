def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            doubled = digit * 2
            total += doubled if doubled > 9 else doubled - 9
        else:
            total += digit
    return total