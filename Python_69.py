def search(lst):
    max_num = -1
    for num in lst:
        if num > 0:
            max_num = num
        else:
            return -1
    return max_num if max_num != -1 else -1

numbers = []
while True:
    user_input = input("Enter a number (or 'stop' to finish): ")
    if user_input.lower() == 'stop':
        break
    try:
        numbers.append(int(user_input))
    except ValueError:
        print("Invalid input. Please enter a valid integer or 'stop'.")

print(f"The maximum number in the list is {search(numbers)}")