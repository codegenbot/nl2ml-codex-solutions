def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for i in range(num_bounces):
        start_height = first_bounce_height
        first_bounce_height *= 1 - bounciness_index
        if start_height > 0 and first_bounce_height > 0:
            total_distance += abs(start_height - first_bounce_height) * (2**i)

    print(total_distance)


bouncing_balls()