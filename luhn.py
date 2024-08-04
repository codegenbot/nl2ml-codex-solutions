def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum_of_products = 0
    for i, digit in enumerate(reversed(card_number)):
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_of_products += digit
    return sum_of_products