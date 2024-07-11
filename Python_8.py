```
def calculate_average_and_median() -> Tuple[float, float]:
    while True:
        try:
            user_input = input("Enter numbers separated by space (or type 'q' to quit): ")
            if not user_input or user_input.lower() == 'q':
                break
            numbers = [int(num) for num in user_input.split() if num.isdigit()]
            if len(numbers) < 1:  
                print("No numbers entered. Please try again.")
                continue
            if len(set(numbers)) < 2:  
                print("Median can only be calculated with at least two unique numbers. Average will be returned instead.")
            average = sum(numbers) / len(numbers)
            median = statistics.median(sorted(set(numbers)))
            return average, median
        except ValueError:
            print("Invalid input. Please enter numbers separated by space or type 'q' to quit.")