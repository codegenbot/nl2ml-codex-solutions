```
def sum_of_odd_numbers_in_every_other_element():
    while True:
        try:
            input_str = input("Enter the elements of a list separated by space: (or 'q' to quit) ")
            if input_str.lower() == "q":
                break
            numbers = list(map(int, input_str.split()))
            if not numbers:
                raise ValueError
        except ValueError:
            print("Invalid input. Please enter valid integers separated by spaces.")
            continue

    return sum(i for i in numbers[1::2] if i % 2 != 0)