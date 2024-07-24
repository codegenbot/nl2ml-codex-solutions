import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

input_text = input("Enter a string: ")
result = string_to_md5(input_text)
print(result)