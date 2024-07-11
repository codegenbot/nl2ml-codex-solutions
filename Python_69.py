```
from collections import Counter


def search():
    while True:
        print("Please enter a list of numbers separated by space.")
        user_input = input("Enter a list of numbers separated by space: ")
        if not user_input:
            print("No input received.")
            continue
        try:
            lst = [int(x) for x in user_input.split()]
            counter = Counter(lst)
            max_num, _ = counter.most_common(1)[0]
            print(max_num)
            break
        except ValueError:
            print("Invalid input. Please enter a list of numbers separated by space.")
            continue