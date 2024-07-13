def leaders(arr):
    n = len(arr)
    leaders_list = [arr[i] for i in range(n-1, -1, -1) if all(x <= arr[i] for x in arr[i+1:])]
    return leaders_list