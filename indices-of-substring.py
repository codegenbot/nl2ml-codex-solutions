```
def indices_of_substring(text):
    target = input()
    return [i for i in range(len(text)) if text.find(target) >= 0]