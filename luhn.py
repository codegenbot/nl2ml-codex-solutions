def luhn(card):
    total = 0
    for i in range(len(card)):
        if i % 2 == 0:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        total += card[i]
    return total