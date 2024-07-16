while True:
    try:
        user_input = input("Enter numbers separated by space: ")
        lst = list(map(int, user_input.split()))
        if len(lst) < 2 or not all(isinstance(num, int) for num in lst):
            raise ValueError
        break
    except (ValueError, EOFError):
        print("Invalid input. Please enter more than one number separated by spaces.")

total_sum = sum(i for i in lst[1::2] if i % 2 == 0)
print(total_sum)