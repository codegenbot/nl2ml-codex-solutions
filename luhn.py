def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return sum(
        [i - 9 if i * 2 > 9 else i * 2 if i % 2 != 0 else i for i in card_number[1:]]
    )