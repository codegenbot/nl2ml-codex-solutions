```
text = input()
target = input()

indices = [i for i in range(len(text)) if text[i:i+len(target)] == target or text[i:i+len(target)-1] == target]
print(' '.join(map(str, indices)))
```