def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text[i:].startswith(target)]