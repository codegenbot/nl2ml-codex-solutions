```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]
    total = 0
    for i in range(len(card_number)):
        if i % 2 == 0:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total += card_number[i]
    return total