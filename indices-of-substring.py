def indices_of_substring(text):
    target = input()
    result = []
    i = 0
    while i < len(text):
        i = text.find(target, i)
        if i != -1:
            result.append(i)
            i += len(target) 
    return result