```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    count = [0, 0, 0, 0]
    
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            count[i] += 1
            
    return count[3], count[2], count[1], count[0]

cents = int(input())
pennies, nickles, dimes, quarters = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)