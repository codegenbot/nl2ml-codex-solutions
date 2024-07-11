def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    t = list(s)
    l, r = 0, len(t) - 1
    while l < r:
        if t[0] != t[r - l + 1]:
            mid = (l + r) // 2
            t.pop(r), t.insert(mid, t[0])
            l, r = l + 1, len(t) - 1
        else:
            l, r = l + 1, r - 1
    return "".join(t)