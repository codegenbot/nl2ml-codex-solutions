```
def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())
    total_distance = 0
    for _ in range(n):
        distance_traveled = (b - h) + (h - b)
        total_distance += distance_traveled
        h, b = b, (b - h) * i

    return format(total_distance, ".6f")