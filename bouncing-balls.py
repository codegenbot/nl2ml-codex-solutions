def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height
    previous_bounce_height = first_bounce_height
    for i in range(1, num_bounces):
        current_bounce_height = previous_bounce_height * bounciness_index
        total_distance += 2 * current_bounce_height
        previous_bounce_height = current_bounce_height
    return total_distance

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)