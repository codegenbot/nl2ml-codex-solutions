def eat(number, need, remaining=0):
    total = number + need
    if total > remaining:
        return [total, 0]
    else:
        return [total, remaining - total]