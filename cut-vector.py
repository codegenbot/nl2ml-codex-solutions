def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    min_diff = float("inf")
    cut_index = -1

    for i in range(n - 1):
        left_sum += vector[i]
        right_sum -= vector[i]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i + 1

    return vector[:cut_index], vector[cut_index:]


vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)