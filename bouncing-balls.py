def calculate_total_distance(starting_height, height_after_first_bounce, num_bounces):
    bounciness_index = height_after_first_bounce / starting_height
    total_distance = (
        starting_height + 2 * (bounciness_index**num_bounces) * starting_height
    )
    return total_distance


starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

result = calculate_total_distance(
    starting_height, height_after_first_bounce, num_bounces
)
print(result)