```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    for i in range(len(string)):
        if is_palindrome(string):
            return string
        if is_palindrome(string[i:] + string[:i][::-1]):
            return string[:i+1] + (string[i:] + string[:i][::-1])
    return string