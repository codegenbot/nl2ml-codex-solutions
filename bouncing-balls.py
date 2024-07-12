```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for i in range(num_bounces):
        new_height = (first_bounce_height - start_height) * (2**i)
        total_distance += new_height * bounciness_index
        first_bounce_height = new_height

    return "{:.3f}\n{}".format(bounciness_index, total_distance)

print("{:.3f}\n{}".format(*bouncing_balls()))