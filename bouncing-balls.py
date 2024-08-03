def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2**bounces - 1) * start_height * bounciness_index

    print(total_distance)


bouncing_balls()