def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    total_sum = 0
    for i in range(15, -1, -1):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total_sum += card_number[i]
    return total_sum