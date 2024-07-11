def cycpattern_check(a, b):
    if len(b) > len(a) // 2:
        return False
    a = a + a
    for i in range(len(a)):
        if a[i : i + len(b)].lower() == b.lower():
            return True
    return False


def check():
    a = input("Enter the string: ")
    b = input("Enter the pattern to be checked: ")
    result = cycpattern_check(a, b)
    print("Is cyclic pattern present?" if result else "Cyclic pattern is not present")


check()