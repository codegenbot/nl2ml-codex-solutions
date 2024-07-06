```
def camel_case(s):
    s = s.replace('-', ' ').replace(' ', '')
    return ''.join(word.capitalize() if i == 0 else word[0].upper() + word[1:].lower() for i, word in enumerate(s.split()))