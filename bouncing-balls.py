starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height

for i in range(1, num_bounces):
    total_distance += 2 * first_bounce_height
    first_bounce_height *= bounciness_index
    total_distance += first_bounce_height

print(total_distance)