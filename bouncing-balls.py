def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    current_height = starting_height
    for _ in range(num_bounces * 2):
        total_distance += abs(current_height - starting_height)
        current_height /= bounciness_index
    if num_bounces % 2 == 1:
        current_height = 0
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = calculate_bounciness_index(starting_height, first_bounce_height)
total_distance = calculate_total_distance(bounciness_index, num_bounces)

print(f"{total_distance:.4f}")