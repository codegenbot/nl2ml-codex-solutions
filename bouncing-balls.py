def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (1 + 2 * math.pow(bounciness_index, num_bounces)) - 1

    print(total_distance)


bouncing_balls()