def check(func):
    return func([1, 5, 3, 19, 18, 25])

def double_the_difference(lst):
    if len(lst) < 2:
        return 0
    avg = sum(lst) / len(lst)
    diff = abs(max(lst) - min(lst)) - abs(avg - min(lst))
    return 2 * diff

print(check(double_the_difference))