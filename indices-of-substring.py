text = input()
target = input()

indices = [i + 1 for i in range(len(text) - len(target) + 2) if text[i:i+len(target)] == target]
print(*indices)