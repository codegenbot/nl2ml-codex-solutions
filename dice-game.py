```
import math
def dice_game(n, m):
    return sum(1/i for i in range(1, n-m+2))/n