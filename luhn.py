def luhn(card_number):
    card_number = list(map(int, card_number[2:]))
    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        sum += card_number[i]
    return str(sum)