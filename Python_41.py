```
def car_race_collision(n: int, m: int):
    if n < m:
        return n * m
    else:
        return m * (m - 1)