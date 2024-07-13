```
def find_closest_elements(numbers):
    while True:
        input_str = input("Enter numbers separated by space: ")
        
        if not input_str:
            print("Program did not receive any input.")
            continue
        
        try:
            numbers = [float(num) for num in input_str.split() if num]
            if len(numbers) < 2:
                raise ValueError("Please enter at least two numbers")
            break
        except ValueError as e:
            print(f"Program did not receive expected input. {e}. Please try again.")
    
    min_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair