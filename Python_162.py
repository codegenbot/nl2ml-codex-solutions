import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    while True:
        input_text = input("Enter a string: ").strip()
        result = string_to_md5(input_text)
        print(result)
except EOFError:
    pass