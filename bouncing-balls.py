def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        (2**0.5)
        * (
            (1 + bounciness_index) ** (num_bounces + 1)
            - (1 - bounciness_index) ** (num_bounces + 1)
        )
        / (bounciness_index**2)
    )

    print(f"{total_distance:.6f}")


bouncing_balls()