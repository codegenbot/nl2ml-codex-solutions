n = int(input())
m = int(input())

def dice_game(n, m):
    count = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                count += 1
    return "{:.7f}".format(count / (n * m))

print(dice_game(n, m))