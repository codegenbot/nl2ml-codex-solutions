def cut_vector(vector):
    total_sum = sum(vector)
    prefix_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector)):
        prefix_sum += vector[i]
        suffix_sum = total_sum - prefix_sum
        diff = abs(prefix_sum - suffix_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index + 1 :]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the output
left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)