import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

try:
    text = input("Enter text to convert to MD5: ")
    if not text:
        raise ValueError("Input text cannot be empty")
    result = string_to_md5(text)
    print(result)
except ValueError as ve:
    print("Error: Invalid input -", ve)
except Exception as e:
    print("Error occurred while processing input:", e)