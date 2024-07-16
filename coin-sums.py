```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    
    for coin in coins:
        count = cents // coin
        if count > 0:
            result.append(count)
            cents %= coin
    
    return result

cents = int(input())
counts = coin_sums(cents)
print(len(counts))
for count in counts:
    print(count)