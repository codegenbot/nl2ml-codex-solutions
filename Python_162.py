import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = input().strip()
    result = string_to_md5(text)
    print(result)