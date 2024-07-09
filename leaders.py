def leaders(arr):
    leaders = [arr[-1]]
    max_right = arr[-1]

    for i in range(len(arr) - 2, -1, -1):
        if arr[i] <= max_right:
            break
        max_right = arr[i]
        leaders.insert(0, max_right)

    return leaders