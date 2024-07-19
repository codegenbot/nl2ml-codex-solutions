def find_closest_elements(numbers):
    min_diff = float('inf')
    closest_pair = (0, 0)
    
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])
    
    return closest_pair

if __name__ == "__main__":
    numbers = [float(x) for x in input().split()]
    closest_pair = find_closest_elements(numbers)
    print(closest_pair[0], closest_pair[1])