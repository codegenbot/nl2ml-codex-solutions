```
def car_race_collision(num_cars=0):
    num_cars = int(input("Enter number of cars: "))
    total_speed = 1
    for i in range(num_cars):
        speed = int(input(f"Enter speed of car {i+1}: "))
        total_speed *= speed
    return int(math.pow(total_speed, 1/num_cars))