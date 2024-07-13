```python
def cut_vector(vector):
    min_diff = float("inf")
    cut_index = 0
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if (diff == 0 or diff < min_diff) and ((sum(vector[:i]) <= sum(vector[i:]))):
            min_diff = diff
            cut_index = i
    return vector[:cut_index], vector[cut_index:]