Here is the modified code:

```python
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        result[i] = cents // coins[i]
        cents %= coins[i]

    return result