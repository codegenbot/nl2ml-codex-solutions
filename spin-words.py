def spin_words(sentence):
    words = sentence.split()
    words = [word[::-1] if len(word) > 4 else word for word in words]
    return ' '.join(words)