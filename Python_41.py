def car_race_collision(n: int):
    if n < 2:
        return 0
    return (n * (n - 1)) // 2