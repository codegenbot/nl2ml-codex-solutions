def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    for i in range(len(string)):
        if is_palindrome(string[i:]):
            half = string[: i + 1]
            second_half = string[i:]
            return half + second_half[::-1] + half[0]