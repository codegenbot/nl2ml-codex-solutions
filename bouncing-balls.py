def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for _ in range(num_bounces + 1):
        height = start_height * (bounciness_index ** (_ + 1))
        total_distance += abs(2 * height - start_height) if _ == 0 else 2 * height
    print(round(total_distance, 2))