def even_odd_count(num):
    return (len([int(d) for d in str(abs(num)) if int(d) % 2 == 0]), len([int(d) for d in str(abs(num)) if int(d) % 2 != 0]) )