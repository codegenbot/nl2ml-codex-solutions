def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = []
    i = 0
    while i + len(target) <= len(text):
        if text[i:].startswith(target):
            indices.append(i)
            i += len(target)
        i += 1

    return indices

output = indices_of_substring()
print(*output)