def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height

    num_bounces = int(input())

    total_distance = 0
    height = first_bounce_height

    for _ in range(num_bounces):
        height /= bounciness_index
        total_distance += 2 * abs(height)

    print(total_distance)


bouncing_balls()