from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) < 2:
        return (0.0, 0.0)
    numbers.sort()
    min_diff = float("inf")
    closest_pair = (0.0, 0.0)
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])
    return closest_pair

def main():
    try:
        nums = list(map(float, input().strip().split()))
        pair = find_closest_elements(nums)
        print(f"{pair[0]} {pair[1]}")
    except ValueError:
        print("0.0 0.0")

if __name__ == "__main__":
    main()