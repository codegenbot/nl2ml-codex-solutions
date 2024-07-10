```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(len(card_number)):
        if i % 2 == 0:
            total += card_number[i]
        else:
            temp = card_number[i] * 2
            if temp > 9:
                total += temp - 9
            else:
                total += temp
    return total