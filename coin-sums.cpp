[PYTHON]
def get_coin_sums(cents):
    coins = [0] * 4
    while cents > 0:
        if cents >= 25:
            coins[3] += 1
            cents -= 25
        elif cents >= 10 and cents < 25:
            coins[2] += 1
            cents -= 10
        elif cents >= 5 and cents < 10:
            coins[1] += 1
            cents -= 5
        else:
            coins[0] += 1
            cents = 0
    return coins
[/PYTHON]
[TESTS]
# Test case 1:
assert get_coin_sums(1) == [1, 0, 0, 0]
# Test case 2:
assert get_coin_sums(2) == [2, 0, 0, 0]
# Test case 3:
assert get_coin_sums(3) == [3, 0, 0, 0]
# Test case 4:
assert get_coin_sums(4) == [4, 0, 0, 0]
# Test case 5:
assert get_coin_sums(5) == [0, 1, 0, 0]
# Test case 6:
assert get_coin_sums(25) == [0, 0, 0, 1]
# Test case 7:
assert get_coin_sums(35) == [0, 0, 1, 1]
# Test case 8:
assert get_coin_sums(6577) == [249, 3, 1, 1]
[/TESTS]
