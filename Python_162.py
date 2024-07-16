import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest() if text else None

try:
    while True:
        input_text = input().strip()
        if not input_text and input_text != '' and input_text != ' ':
            break
        result = string_to_md5(input_text)
        print(result)
except EOFError:
    pass