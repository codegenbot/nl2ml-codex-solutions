text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]
print(*[i+1 for i in indices if text[i-1:i+len(target)-1] != target])