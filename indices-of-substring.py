```python
"""def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if i + len(target) > len(text): 
            break
        if text[i:i+len(target)] == target:
            result.append(i)
    return result""'"