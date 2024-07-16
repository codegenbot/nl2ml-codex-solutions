import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

while True:
    input_text = input("Enter a string: ").strip()
    if input_text:
        result = string_to_md5(input_text)
        print(result)
        break
    else:
        print("Invalid input")