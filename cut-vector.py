a = list(map(int, input().split()))
if a:
    if len(a) == 1:
        print(a[0])
    else:
        min_diff = min(abs(sum(a[:i]) - sum(a[i:])) for i in range(1, len(a)))
        split_index = next(i for i in range(1, len(a)) if abs(sum(a[:i]) - sum(a[i:])) == min_diff)
        print(*a[:split_index], sep="\n")
        print(*a[split_index:], sep="\n")