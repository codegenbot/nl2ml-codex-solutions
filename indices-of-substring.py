def indices_of_substring(text, target):
    indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target or text.find(target, i+1, i+len(target)+1) == i+1]
    return indices