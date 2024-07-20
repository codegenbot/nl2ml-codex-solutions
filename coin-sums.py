def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]
    
    while cents > 0:
        for i in range(len(coins)-1, -1, -1):
            count = cents // coins[i]
            if count > 0:
                result[i] = count
                cents %= coins[i]
    
    return tuple(result)