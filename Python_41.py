```
def car_race_collision():
    n = int(input("Enter a positive integer: "))
    total = 0
    for i in range(1, n+1):
        if i % 2 != 0:
            total += i ** 2
    return total