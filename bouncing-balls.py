def bouncing_balls(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    current_height = first_bounce_height
    for _ in range(num_bounces - 1):
        current_height *= bounciness_index
        total_distance += 2 * start_height + 2 * (current_height - start_height)
    return round(total_distance, 3)


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(round(bouncing_balls(start_height, first_bounce_height, num_bounces), 3))