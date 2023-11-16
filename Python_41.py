

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    a = []
    b = []
    for i in range(n):
        a.append(int(input()))
        b.append(int(input()))

    c = 0
    for i in range(n):
        for j in range(n):
            if a[i] == b[j]:
                c += 1
    print(c)


car_race_collision(2)

    This function outputs the number of such collisions.
    """
