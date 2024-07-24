def luhn(card):
    card = [int(x) for x in str(card)]
    total_sum = 0
    for i in range(len(card)):
        if i % 2 == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        total_sum += card[i]
    return total_sum