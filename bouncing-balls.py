def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height
    for _ in range(num_bounces):
        total_distance += first_bounce_height
        first_bounce_height *= bounciness_index
    return round(total_distance, 14)

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)