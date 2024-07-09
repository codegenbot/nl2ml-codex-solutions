def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) > 4:
            result.append(word[::-1])
        else:
            result.append(word)
    return ' '.join(result)