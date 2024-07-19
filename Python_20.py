def find_closest_elements(numbers):
    numbers.sort()
    min_diff = float('inf)
    closest_pair = []
    
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i+1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = [numbers[i], numbers[i+1]]
    
    return closest_pair

if __name__ == "__main__":
    n = int(input("Enter the number of elements in the list: "))
    numbers = list(map(int, input("Enter the elements of the list separated by space: ").strip().split()))
    closest_pair = find_closest_elements(numbers)
    print(*closest_pair)