def car_race_collision(n: int, m: int=5):
    if n < m:
        return n * m
    else:
        return m * (m - 1)

print(car_race_collision(10))