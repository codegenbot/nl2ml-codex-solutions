n = int(input())
arr = [int(input()) for _ in range(n)]

diff = float("inf")
cut_idx = 0

for i in range(1, n):
    current_diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if current_diff < diff:
        diff = current_diff
        cut_idx = i

print(sum(arr[:cut_idx]))
print(sum(arr[cut_idx:]))