from typing import List


def get_all_prefixes(s: str) -> List[str]:
    return [s[:i] for i in range(len(s))]


def all_prefixes() -> None:
    while True:
        try:
            s = input("Please enter a string: ")
            if not s.strip() or not s.isalnum():
                print("Error: Please provide a non-empty alphanumeric string.")
            else:
                break
        except ValueError as e:
            print(f"Invalid input. Please enter a string.")

    while True:
        try:
            n = int(input("Please enter the number of prefixes: "))
            if n <= 0:
                print("Error: Number of prefixes must be positive.")
            else:
                break
        except ValueError as e:
            print(f"Invalid input. Please enter an integer.")

    for prefix in get_all_prefixes(s)[:n]:
        print(prefix)