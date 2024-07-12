import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

user_input = input("Enter a string: ")
result = string_to_md5(user_input)
print(result)