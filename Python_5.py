def process_numbers(numbers, delimeter):
    return [
        item for sublist in [[num, delimeter] for num in numbers] for item in sublist
    ][:-1]