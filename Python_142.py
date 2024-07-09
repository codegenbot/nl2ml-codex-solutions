def check():
    while True:
        try:
            lst = list(map(int, input("Enter numbers separated by space: ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    result = sum(x**2 if i % 3 == 0 and i < len(lst) - 1 and (i + 1) % 4 != 0 \
                 else x**3 if i % 4 == 0 and i < len(lst) - 2 and (i + 2) % 3 != 0 \
                 else x for i, x in enumerate(lst))

    return result