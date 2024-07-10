def reverse_string(s: str, i: int) -> str:
    return s[:i][::-1]

def make_palindrome(s: str) -> str:
    for i in range(len(s) + 1):
        if s == reverse_string(s, i):
            return s[:i][::-1] + s
    return s + s[::-1]

result = make_palindrome(input("Enter a string: ").strip())
print(result)