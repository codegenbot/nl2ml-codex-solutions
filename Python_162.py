import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

user_input = input("Enter a string to calculate MD5 hash: ")
result = string_to_md5(user_input)
print("MD5 hash value:", result)