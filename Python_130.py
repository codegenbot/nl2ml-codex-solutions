def tri(n):
    if n <= 0:
        return []
    
    sequence = [3]
    for i in range(1, n):
        if i % 2 == 0:
            sequence.append(1 + i // 2)
        else:
            sequence.append(sequence[i-1] + sequence[i-2] + sequence[i-4])
    return sequence