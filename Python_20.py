from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(numbers)-1):
        diff = numbers[i+1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i+1])
    
    return closest_pair

# Read input from user
numbers = [float(num) for num in input().split()]

# Call the function with user input
result = find_closest_elements(numbers)

# Print the result
print(result)