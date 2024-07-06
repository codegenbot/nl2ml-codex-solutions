def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            if set(word[::-1]).issubset('aeiou'):
                result.append(word[::-1] + ' way')
            else:
                result.append(word[::-1])
        else:
            result.append(word)
    return " ".join(result)