```
def sum_of_squares(n):
    return n ** 2

def check(x):
    if x > 100:
        return "Greater than 100"
    elif x == 100:
        return "Equal to 100"
    else:
        return "Less than or equal to 99"

result = sum_of_squares(11)
print(check(result))