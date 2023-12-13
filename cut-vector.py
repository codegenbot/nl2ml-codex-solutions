```python
def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float('inf')
    cut_index = 0
    
    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    return vector[:cut_index+1], vector[cut_index+1:]

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the function and print the result
result1, result2 = cut_vector(vector)
for num in result1:
    print(num)
for num in result2:
    print(num)
```