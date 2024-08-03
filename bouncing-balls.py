def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_bounces = int(input())
    total_distance = 0
    for _ in range(num_bounces):
        total_distance += 2 * (h1 + h2)
        h1, h2 = h2, h1 * bounciness_index
    print(format(total_distance, ".4f"))


bouncing_balls()