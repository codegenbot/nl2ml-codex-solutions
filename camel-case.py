def camel_case(s):
    return "".join(word.capitalize() if i > 0 else word.lower().lstrip('-').replace('-', '').lower() for i, word in enumerate(s.replace('-', ' ').split()))