def car_race_collision(n: int) -> int:
    collision_count = 0
    for i in range(n):
        collision_count += i
    return collision_count