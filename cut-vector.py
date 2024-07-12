arr = list(map(int, input().split()))
split_index = min(range(1, len(arr)), key=lambda x: abs(sum(arr[:x]) - sum(arr[x:])))
subvector1 = arr[:split_index]
subvector2 = arr[split_index:]
print("Subvector 1:", subvector1)
print("Subvector 2:", subvector2)