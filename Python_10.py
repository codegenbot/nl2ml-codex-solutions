def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    for i in range(len(string)):
        if is_palindrome(string[i:]):
            return string + string[i:][::-1]
    return string

input_str = input("Enter a string: ")
print(make_palindrome(input_str))