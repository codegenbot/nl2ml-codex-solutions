def bouncing_balls():
    s_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / s_height

    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += bounciness_index * s_height

    return round(total_distance, 3)


print(bouncing_balls())