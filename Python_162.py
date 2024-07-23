Here is the solution to the problem:

```python
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = input("Enter a string: ")
    try:
        print(string_to_md5(text))
    except TypeError:
        print("Invalid input. Please enter a string.")