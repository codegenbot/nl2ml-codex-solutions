import hashlib

def string_to_md5(text):
    if text is None:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter the string: ")
result = string_to_md5(text)
print(result)