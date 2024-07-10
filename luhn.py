```
def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    result = sum(
        [
            x if i % 2 == 0 else (x * 2) if (x * 2) > 9 else (x * 2) - 9
            for i, x in enumerate(card_num)
        ]
    )
    return result