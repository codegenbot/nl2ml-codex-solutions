```
def circular_shift(x, shift):
    x = str(x)[::-1]
    shift %= len(x)
    return str(int(x[shift:]+x[:shift]))[::-1]