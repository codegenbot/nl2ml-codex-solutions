Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string)):
        suffix = string[i:]
        if suffix == suffix[::-1]:
            return string + suffix[::-1]