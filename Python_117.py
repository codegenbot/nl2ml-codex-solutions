
def select_words(s, n):
    words = s.split()
    for word in words:
        if len(word) == n and word.isalpha():
            return word
```