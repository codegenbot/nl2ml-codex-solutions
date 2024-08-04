def luhn(card_num):
    total = 0
    for i, digit in enumerate(reversed(str(card_num))):
        if (i % 2) == 1:
            digit = str(int(digit) * 2)
            if len(digit) > 1:
                digit = str((int(digit[0]) + int(digit[1])))
        total += int(digit)
    return total