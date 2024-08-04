Here is the solution:

def luhn(card_num):
    card_num = list(map(int, card_num[1:]))
    for i in range(0, len(card_num), 2):
        card_num[i] *= 2
        if card_num[i] > 9:
            card_num[i] -= 9
    return sum(card_num)