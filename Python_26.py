```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    while True:
        print("Enter comma-separated integers: ")
        numbers = input()
        if not numbers: 
            print("No input entered.")
        else: 
            try:
                numbers = [int(num) for num in numbers.split(",") if num]
                print(remove_duplicates(numbers))
                cont = input("Do you want to continue? (y/n): ")
                if cont.lower() != 'y':
                    break
                else:
                    continue
            except ValueError as e:
                print(f"Invalid input. {str(e)}. Please enter comma-separated integers.")