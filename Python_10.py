def reverse_string(s: str, i: int) -> str:
    return s[i-1::-1]

def make_palindrome(s: str) -> str:
    for i in range(1, len(s) + 1):
        if s == reverse_string(s, i):
            return s[:i][::-1] + s
    return s + s[::-1]

input_str = input("Enter a string: ").strip()
result = make_palindrome(input_str)
print(result)