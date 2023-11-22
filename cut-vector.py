def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        if left_sum == right_sum or abs(left_sum - right_sum) == 1:
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


# Read input from user
vector = []
while True:
    try:
        line = input()
        vector.append(int(line))
    except EOFError:
        break

# Call the function and print the output
result1, result2 = cut_vector(vector)
for num in result1:
    print(num)
for num in result2:
    print(num)