def spin_words(s):
    words = s.split()
    result = []
    for i, word in enumerate(words):
        if len(word) >= 5 and i < len(words) - 1: 
            result.append(word[::-1])
        else:
            result.append(word)
    return " ".join(result)