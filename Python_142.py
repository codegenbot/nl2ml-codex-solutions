```Python
def sum_squares(lst):
    return sum(i**2 for i in lst)

while True:
    try:
        while input("Do you want to start? (yes/no): ") != "yes":
            pass
        lst = input("Enter a list of numbers separated by space: ").split()
        int_lst = [int(i) for i in lst if i.lstrip("-").isdigit()]
        if all(-100 <= n <= 100 for n in int_lst):
            print(sum_squares(int_lst))
            break
        else:
            print("Some numbers are out of range.")
    except ValueError as e:
        print(f"Invalid input. Please enter numeric values: {e}. Try again!")