from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    while True:
        numbers = input("Enter numbers (comma-separated): ").strip()
        try:
            numbers = [int(num) for num in numbers.split(",")]
            break
        except ValueError:
            print("Invalid input. Please enter a comma-separated list of integers.")
    print(remove_duplicates(numbers))