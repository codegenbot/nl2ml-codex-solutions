```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    min_distance = abs(numbers[0] - numbers[1])
    
    for i in range(len(numbers) - 1):
        distance = abs(numbers[i] - numbers[i + 1])
        if distance < min_distance:
            min_distance = distance
            closest_pair = (numbers[i], numbers[i + 1])
    
    return closest_pair