def tri(n):
    sequence = [3]
    if n == 0:
        return sequence
    elif n == 1:
        sequence.append(1)
        return sequence
    else:
        sequence.append(1)
        for i in range(2, n + 1):
            if i % 2 == 0:
                sequence.append(sequence[i-1] + sequence[i-2] + 1)
            else:
                sequence.append(sequence[i-1] + sequence[i-2] - 1)
        return sequence