n = int(input())
vector = [int(input()) for _ in range(n)]

total_sum = sum(vector)
left_sum = 0
right_sum = total_sum
min_diff = total_sum
cut_index = 0

for i in range(n):
    left_sum += vector[i]
    right_sum -= vector[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*vector[: cut_index + 1])
print(*vector[cut_index + 1 :])