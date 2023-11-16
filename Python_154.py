
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True


    if(b in a):
        return True
    n = len(b)
    aaa = b
    for i in range(n):
        aaa = aaa[1:]+aaa[0]
        if(aaa in a ) :
            return True

    return False
    """
