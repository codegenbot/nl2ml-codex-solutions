def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        distance = 2 * (current_height - (1 - bounciness_index) * current_height)
        total_distance += distance
        current_height *= bounciness_index

    print(total_distance)


bouncing_balls()