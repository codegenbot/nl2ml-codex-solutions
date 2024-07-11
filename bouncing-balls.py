starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

bounciness_index = height_after_first_bounce / starting_height
total_distance = starting_height + height_after_first_bounce * (1 - bounciness_index**num_bounces) / (1 - bounciness_index**2)

print(total_distance)