def normalize(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

def rescale_to_unit(numbers):
    return normalize(numbers)

def check(numbers):
    return rescale_to_unit(numbers)