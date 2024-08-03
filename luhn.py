def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i, n in enumerate(reversed(card_number)):
        if i % 2 == 1:
            n *= 2
            if n > 9:
                n -= 9
        sum += n
    return sum