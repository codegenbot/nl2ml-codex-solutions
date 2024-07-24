```
from typing import List


def filter_integers() -> List[int]:
    while True:
        values = input("Enter a list of integers (separated by commas): ")
        if not values.strip():
            print("Invalid input. Please enter numbers separated by commas.")
            continue
        num_list = [
            int(x) for x in values.split(",") if x.strip().replace(",", "").isdigit()
        ]
        if all(isinstance(i, int) for i in num_list):
            return num_list
        else:
            print("Invalid input. The following values were not integers: ")
            for value in num_list:
                if not isinstance(value, int):
                    print(f"{value}")
            print("Please retry.")
            input("Press Enter when ready.")