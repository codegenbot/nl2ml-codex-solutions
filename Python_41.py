def car_race_collision(n: int):
    return n * (n - 1)

while True:
    try:
        n = int(input("Enter a number: "))
        if n > 0:
            print(car_race_collision(n))
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter a whole number.")
    else:
        if not isinstance(n, int):
            print("Invalid input. Please enter a whole number.")