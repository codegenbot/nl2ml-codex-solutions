def spin_words(sentence):
    words = [word[::-1] if len(word) > 4 else word for word in sentence.split()]
    return ' '.join(words)