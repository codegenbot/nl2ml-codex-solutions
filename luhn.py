def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            double_card_number = card_number[i] * 2
            if double_card_number > 9:
                double_card_number -= 9
        else:
            double_card_number = card_number[i]
        result += double_card_number
    return result