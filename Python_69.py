The solution is:

```python
def search(lst):
    frequency_dict = {}
    for num in lst:
        if num in frequency_dict:
            frequency_dict[num] += 1
        else:
            frequency_dict[num] = 1
    max_value = -1
    for num, freq in frequency_dict.items():
        if num > 0 and freq >= num:
            max_value = num
            break
    return max_value