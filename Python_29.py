```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

if __name__ == "__main__":
    try:
        input_list = [i.strip().lower() for i in input("Enter space-separated string: ").split()]
    except ValueError:
        print("Invalid input. Please enter space-separated strings.")
        exit()
    while True:
        prefix = input("Enter prefix: ").strip().lower()
        if len(prefix) > 0:
            break
    if prefix not in [s for s in input_list]:
        print("Error: Prefix is not present in the list. Please enter a valid prefix.")
        prefix = input("Enter prefix: ").strip().lower()
    print(filter_by_prefix(input_list, prefix))