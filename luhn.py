def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(1, len(card_number), 2):
        card_number[i] *= 2
        if card_number[i] > 9:
            card_number[i] -= 9
    return sum(card_number)