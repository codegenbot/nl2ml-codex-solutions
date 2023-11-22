def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_index = 0

    for i in range(n - 1):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i + 1

    return vector[:cut_index], vector[cut_index:]


# Read vector from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the function and print the results
result1, result2 = cut_vector(vector)
for num in result1:
    print(num)
print()
for num in result2:
    print(num)