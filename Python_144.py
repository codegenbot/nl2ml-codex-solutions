```
def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))

    common_divisor = min(x_denom, n_denom)
    
    return (x_num * n_num) % (common_divisor * common_divisor) == 0