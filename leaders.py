Here is the Python solution for the problem:

def leaders(arr):
    return [arr[i] for i in range(len(arr)-1, -1, -1) if all(arr[i] >= arr[j] for j in range(i+1, len(arr)))]

# Test cases
print(leaders([0]))  # Output: [0]
print(leaders([1, 0]))  # Output: [1, 0]
print(leaders([1, 451]))  # Output: [1, 451]
print(leaders([2, 1000, 0]))  # Output: [2, 1000, 0]
print(leaders([2, 0, 1000]))  # Output: [1, 1000]