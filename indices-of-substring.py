text = input()
target = input()

indices = []
i = 0
while i < len(text):
    if text[i:i+len(target)] == target:
        indices.append(i)
        i += 1
    else:
        i += 1

print(*indices)