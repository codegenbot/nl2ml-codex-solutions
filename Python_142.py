def sum_squares(lst):
    return sum(i**i if i%3==0 and i%4!=0 else i**(i//2) for i in range(len(lst)))