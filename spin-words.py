def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(' '.join(word.split()[::-1]))
        else:
            result.append(word)
    return " ".join(result)