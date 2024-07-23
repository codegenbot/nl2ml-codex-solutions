def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = 0

    for _ in range(bounces):
        total_distance += (h1 + h2) * 2
        h1, h2 = h2, h2 * bounciness_index

    return "{:.6f}\n{}".format(total_distance, int(total_distance))


print(bouncing_balls())