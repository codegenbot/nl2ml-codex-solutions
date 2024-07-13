def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


# Read input
text = input().strip()
target = input().strip()

# Get and print output
result = indices_of_substring(text, target)
for idx in result:
    print(idx, end=" ")