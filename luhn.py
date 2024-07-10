def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(d if i % 2 == 0 or (i % 2 != 0 and d > 4) else 2*d % 10 for i, d in enumerate(card_number))
    return result