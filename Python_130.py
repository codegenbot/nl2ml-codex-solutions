```
def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        while len(sequence) <= n:
            if len(sequence) % 2 == 1:
                next_num = sequence[-1] + sequence[-2] + sequence[-3]
            else:
                next_num = 1 + (len(sequence) // 2)
            sequence.append(next_num)
        return sequence