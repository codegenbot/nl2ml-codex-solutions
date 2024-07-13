starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / starting_height
total_distance = starting_height + bounce_height

for _ in range(2, num_bounces + 1):
    bounce_height *= bounciness_index
    total_distance += bounce_height * 2

print(total_distance)