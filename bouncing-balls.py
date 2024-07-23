```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    total_distance = 0
    height = start_height

    for _ in range(num_bounces + 1):
        bounciness_index = first_bounce_height / start_height if _ == 0 else height / start_height
        total_distance += 2 * start_height
        if height > 0:
            start_height = height
            height *= bounciness_index

    return str(total_distance)