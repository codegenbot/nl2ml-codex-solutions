starting_height = float(input())
first_bounce_height = float(input())
bounces = int(input())

bounciness_index = first_bounce_height / starting_height

total_distance = (1 + bounciness_index) ** bounces - 1
print(total_distance)