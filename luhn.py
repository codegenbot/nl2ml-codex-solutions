def luhn(card_number):
    card = [int(x) for x in str(card_number).split()]
    sum = 0
    for i in range(len(card)):
        if i % 2 == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        sum += card[i]
    return sum