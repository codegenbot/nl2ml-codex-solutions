```Python
def luhn(card):
    card = [int(x) for x in str(card)]
    total = 0
    for i, num in enumerate(card):
        if (i % 2) == 1:
            num *= 2
            if num > 9:
                num -= 9
            total += num  
        else:
            total += num

    return total