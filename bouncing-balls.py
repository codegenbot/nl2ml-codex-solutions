```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 2 * (first_bounce_height + start_height) * bounciness_index * (num_bounces * 2 + 1)

    print(total_distance)

bouncing_balls()