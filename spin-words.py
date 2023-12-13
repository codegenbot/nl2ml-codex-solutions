def spin_words(sentence):
    words = sentence.split()
    words = [word[::-1][::-1] if len(word) >= 5 else word for word in words]
    return ' '.join(words)