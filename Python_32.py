def find_zero(xs):
    n = len(xs) // (1 if len(xs) % 2 == 0 else 1)
    zero_index = None
    for i in range(len(xs)):
        if xs[i] == 0:
            zero_index = i
            break
    return -xs[zero_index] / xs[zero_index]