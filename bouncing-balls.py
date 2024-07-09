def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 2 * abs(first_bounce_height)
    for _ in range(num_bounces):
        current_height *= bounciness_index
        total_distance += 2 * abs(current_height)

    print(total_distance)


bouncing_balls()