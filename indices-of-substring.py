def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            indices.extend(list(range(i, i + len(input()))))
    return indices