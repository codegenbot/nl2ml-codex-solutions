```python
def cut_vector(vector):
    min_diff = float('inf')
    cut_index = -1
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    return vector[:cut_index], vector[cut_index:]

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the output
left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)
```
Note: The code assumes that the input will be provided through standard input, with each number on a separate line. The program will keep reading input until there is no more input to read (EOFError).