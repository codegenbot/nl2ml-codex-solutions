
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word.
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True


    a = a.lower()
    b = b.lower()
    length = len(b)
    if a.find(b) != -1:
        return True
    else:
        for i in range(length):
            b = b[1:] + b[0]
            if a.find(b) != -1:
                return True
        return False

print(cycpattern_check("abcd","abd"))
print(cycpattern_check("hello","ell"))
print(cycpattern_check("whassup","psus"))
print(cycpattern_check("abab","baa"))
print(cycpattern_check("efef","eeff"))
print(cycpattern_check("himenss","simen"))
    """
