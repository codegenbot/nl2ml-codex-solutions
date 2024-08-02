starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / starting_height
distance = starting_height + (starting_height + bounce_height) * (
    bounciness_index**num_bounces - 1
) / (bounciness_index - 1)
print(distance)