def car_race_collision(n: int):
    return sum(i * (n - i - 1) for i in range(1, n))