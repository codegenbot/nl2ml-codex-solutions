import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

text = input("Enter a string: ")
output = string_to_md5(text)
print(output)