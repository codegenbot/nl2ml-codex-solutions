def luhn(card_num):
    card_num = [int(x) for x in str(card_num).replace(" ", "").split()]
    return sum([x if i % 2 == 0 else (x * 2 - 9) if (x * 2) % 10 > 4 else x * 2 for i, x in enumerate(card_num)])