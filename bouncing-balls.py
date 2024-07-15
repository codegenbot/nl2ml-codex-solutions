def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for i in range(num_bounces):
        if start_height > 0:
            distance = abs(start_height - start_height/2) * 2
            total_distance += distance
            start_height /= 2  # update height for the next bounce

    print(total_distance)


bouncing_balls()