def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    scaled_numbers = [(x - min_num) / (max_num - min_num) for x in numbers]
    return scaled_numbers