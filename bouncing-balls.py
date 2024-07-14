def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        first_bounce_height *= bounciness_index
        total_distance += 2 * start_height

    print(total_distance)


bouncing_balls()