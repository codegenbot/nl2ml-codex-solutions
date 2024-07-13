```
def luhn_sum(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        else:
            sum += card_number[i]
    return sum + (card_number[0] if len(card_number) % 2 == 1 else 0)