def spin_words(text):
    words = text.split()
    return " ".join([word if len(word) < 5 else word[::-1] for word in words])