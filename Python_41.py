def car_race_collision(n=None):
    if n is None:
        n = int(input("Enter the number of cars: ") or 1)
    return str(binomial_coefficient(n))