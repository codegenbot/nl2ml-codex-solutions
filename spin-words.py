def spin_words(sentence):
    words = sentence.split()
    result = ' '.join([word[::-1] if len(word) > 4 else word for word in words]).strip()
    return result