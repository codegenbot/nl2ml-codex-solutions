def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0.0

    for _ in range(num_bounces):
        total_distance += bounciness_index
        bounciness_index /= 2.0

    print(bounciness_index * 2 + start_height)


bouncing_balls()