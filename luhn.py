Here is the Python solution:

def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    result = sum([x if i % 2 == 0 else x * 2 if x * 2 > 9 else x * 2 - 9 for i, x in enumerate(card_number)])
    return str(result)