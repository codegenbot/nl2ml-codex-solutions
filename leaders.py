def leaders(input_vector):
    leaders = []
    max_right = float('inf')
    for i in range(len(input_vector) - 1, -1, -1):
        if input_vector[i] >= max_right:
            leaders.append(input_vector[i])
        max_right = input_vector[i]
    return list(reversed(leaders))