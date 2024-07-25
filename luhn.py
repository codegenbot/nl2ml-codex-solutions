def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    result = sum(
        [x if i % 2 == 0 else (9 - ((x * 2) % 10)) for i, x in enumerate(card_number)]
    )
    return result