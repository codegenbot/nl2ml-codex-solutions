Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    s = string[::-1]
    for i in range(len(s)):
        if s[i:] + s[:i] == string:
            return string + s
    return string + s