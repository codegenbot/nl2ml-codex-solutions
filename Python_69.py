```
from collections import Counter


def search():
    while True:
        user_input = input("Enter a list of numbers separated by space: ")
        if user_input == "":
            print("No input received.")
            return None
        try:
            lst = [int(x) for x in user_input.split()]
            counter = Counter(lst)
            max_num, _ = counter.most_common(1)[0]
            return max_num
        except ValueError:
            print(
                "Invalid input. Please enter a list of numbers separated by space."
            )
            continue