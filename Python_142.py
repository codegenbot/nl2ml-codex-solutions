```
def sum_squares(lst):
    return sum([i**3 if i%12==0 else i**2 if i%4==0 else i for i in lst])