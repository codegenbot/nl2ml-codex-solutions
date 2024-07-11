def bouncing_balls():
    s_height = float(input())
    first_bounce = float(input())
    bounciness_index = first_bounce / s_height

    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (s_height + first_bounce) * 2
        s_height *= bounciness_index
        first_bounce *= bounciness_index

    return round(total_distance, 5)


print(bouncing_balls())