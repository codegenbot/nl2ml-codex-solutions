def indices_of_substring(text, target):
    if not target or not text:
        return [0]
    
    indices = []
    start = 0
    while start < len(text):
        index = text.find(target, start)
        if index == -1:
            break
        indices.append(index)
        start = index + 1
    return indices