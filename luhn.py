def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(sum(divmod(d * 2, 10)) + d for d in card[1::2]) + sum(
        divmod(d, 10) for d in card[::2]
    )
    return str(result)