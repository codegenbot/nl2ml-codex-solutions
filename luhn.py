def luhn(card):
    card = [int(x) for x in str(card).split()]
    result = sum([x if i % 2 == 0 else 2*x if 2*x < 9 else 2*x - 9 for i, x in enumerate(card)])
    return result