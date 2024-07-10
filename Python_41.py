def car_race_collision(num_cars=None):
    if num_cars is None:
        try:
            num_cars = int(input("Enter the number of cars: "))
        except ValueError:
            num_cars = 1
    return sum(range(2, num_cars + 1))