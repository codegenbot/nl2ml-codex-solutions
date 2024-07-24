def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum(
        [
            x if i % 2 == 0 else x * 2 - x // 10 * 9
            for i, x in enumerate(reversed(card_number))
        ]
    )
    return result