def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = (2 * first_bounce_height) / start_height
    num_bounces = int(input())

    total_distance = 0
    height = start_height

    for _ in range(num_bounces):
        total_distance += height * 2
        height *= bounciness_index

    print(total_distance)

bouncing_balls()