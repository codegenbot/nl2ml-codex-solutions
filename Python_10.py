```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    else:
        return s + s[::-1]