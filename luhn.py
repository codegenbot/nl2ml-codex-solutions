def luhn(card):
    card = list(map(int, ''.join(filter(str.isdigit, str(card).replace(" ", ""))).replace('0', '')))
    total = 0
    for i in range(len(card)):
        if i % 2 == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        total += card[i]
    return total % 10