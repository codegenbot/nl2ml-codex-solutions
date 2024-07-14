def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += math.log2(bounciness_index) + 1

    print("{:.6f}".format(total_distance))


bouncing_balls()