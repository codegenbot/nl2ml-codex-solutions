```
```
def camel_case(s):
    words = s.replace("-", " ").split()
    result = ""
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word.lower()
    return result
```