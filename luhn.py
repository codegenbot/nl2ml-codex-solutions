def luhn(card):
    card = [int(x) for x in str(card)]
    new_card = []
    for i, x in enumerate(card):
        if (i % 2 == 0 and x % 2 != 0) or (i % 2 != 0 and x % 2 == 0):
            x *= 2
            if x > 9:
                x -= 9
        new_card.append(x)
    return sum(new_card)