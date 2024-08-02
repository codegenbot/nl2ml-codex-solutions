def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, n):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index + 1 :]


vector = list(map(int, input().split()))
print(cut_vector(vector))