def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = start_height
    for _ in range(bounces):
        total_distance += abs(current_height - first_bounce_height)
        current_height *= bounciness_index
    return str(total_distance + first_bounce_height)


print(bouncing_balls())