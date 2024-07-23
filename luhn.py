def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(len(card_number)-1, -1, -1):
        if (len(card_number) - i) % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total += card_number[i]
    return total