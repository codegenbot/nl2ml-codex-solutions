def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (h1 + h2) * ((bounciness_index - 1) ** (bounces))

    print(f"{total_distance:.4f}")


bouncing_balls()