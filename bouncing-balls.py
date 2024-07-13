def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for i in range(num_bounces):
        distance = (2 ** (i+1)) * bounciness_index
        total_distance += distance - 1
    print(total_distance)

bouncing_balls()