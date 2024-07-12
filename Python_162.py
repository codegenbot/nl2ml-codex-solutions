Here is the corrected code:

```
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Please enter a string: ")
print(string_to_md5(text))