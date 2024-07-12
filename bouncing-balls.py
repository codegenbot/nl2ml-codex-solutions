def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height
    previous_bounce_height = first_bounce_height
    for i in range(num_bounces):
        current_bounce_height = previous_bounce_height * bounciness_index
        total_distance += current_bounce_height
        previous_bounce_height = current_bounce_height
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)