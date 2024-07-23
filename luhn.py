```
def luhn(card_number):
    card_number = list(map(int, [c for c in card_number if c != ' ']))
    total = 0
    for i in range(len(card_number)):
        if (i % 2) == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total += card_number[i]
    return total