import math

def closest_integer(value):
    '''
    Create a function that takes a value (string) representing a number
    and returns the closest integer to it. If the number is equidistant
    from two integers, round it away from zero.

    Examples
    >>> closest_integer("10")
    10
    >>> closest_integer("15.3")
    15

    Note:
    Rounding away from zero means that if the given number is equidistant
    from two integers, the one you should return is the one that is the
    farthest from zero. For example closest_integer("14.5") should
    # Complete the following code given the task description and function signature.
    # Do not change the function signature.
    pass
    return 15 and closest_integer("-14.5") should return -15.
    '''
    if value.is_integer():
        return int(value)
    elif value == 0:
        return 0
    else:
        if int(value) > 0:
            return int(math.ceil(value))
        else:
            return int(math.floor(value))


if __name__ == "__main__":
    print(closest_integer("0"))
