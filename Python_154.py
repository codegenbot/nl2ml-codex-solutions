def cycpattern_check(a, b):
    return len(a) == len(b) and b in (a[i:] + a[:i] for i in range(len(a)))


# Test the function
print(cycpattern_check("winemtt", "tinem"))  # Output: True