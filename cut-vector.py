```python
def cut_vector(vector):
    min_diff = float('inf')
    index = -1
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            index = i
    return vector[:index], vector[index:]

# Read input from user
vector = []
while True:
    try:
        vector.append(int(input()))
    except EOFError:
        break

# Call the function and print the output
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
print()
for num in subvector2:
    print(num)
```