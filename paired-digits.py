```python
def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if (i == len(s)-1 or str(int(s[i+1])) == digit))