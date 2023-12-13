def spin_words(sentence):
    words = sentence.split()
    words = [word[::-1] if len(word) >= 5 else word for word in words if word.isalpha()]
    return ' '.join(words)