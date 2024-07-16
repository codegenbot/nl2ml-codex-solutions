import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

while True:
    try:
        input_text = input().strip()
    except EOFError:
        break
    if not input_text:
        break
    result = string_to_md5(input_text)
    print(result)