import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

try:
    input_str = input("Enter a string: ")
    result = string_to_md5(input_str)
    print(result)
except EOFError:
    print("Error: No input provided")