def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height * (
        1 + bounciness_index**num_bounces + bounciness_index ** (num_bounces - 1)
    )
    return total_distance


starting_height = float(input().strip())
first_bounce_height = float(input().strip())
num_bounces = int(input().strip())

result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)