```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        for i in range(26):
            if chr(i+ord('a')) in txt.lower():
                return i + 1
        return 0