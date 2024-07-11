```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    elif ',' in txt:
        return txt.split(',')
    else:
        odd_count = sum(ord(c) % 2 == 1 for c in txt.lower())
        return odd_count