def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]

    result = 0
    for i in range(len(card_number)):
        if i % 2 == 0:
            temp = card_number[i] * 2
            if temp > 9:
                temp -= 9
            result += temp
        else:
            result += card_number[i]
            
    return result if result % 10 == 0 else False