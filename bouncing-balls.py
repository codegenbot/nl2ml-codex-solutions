starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + first_bounce_height

for _ in range(num_bounces - 1):
    total_distance += 2 * bounciness_index * first_bounce_height
    bounciness_index = bounciness_index ** 2

print(total_distance)