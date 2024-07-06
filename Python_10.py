Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + string[::-1]
    for i in range(len(string)):
        postfix = string[i:]
        prefix = string[:i][::-1]
        if postfix == postfix[::-1]:
            return prefix + postfix
    return None