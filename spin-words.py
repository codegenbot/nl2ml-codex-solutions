def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        result.append(word)
        if len(word) >= 5:
            result[-1] = word[::-1]
    return " ".join(result)