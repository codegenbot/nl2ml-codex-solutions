def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = float('inf')
    closest_pair = (float('inf'), float('inf'))
    
    for i in range(len(numbers) - 1):
        diff = numbers[i+1] - numbers[i]
        if diff < closest:
            closest = diff
            closest_pair = (numbers[i], numbers[i+1])
    
    return closest_pair