def add_elements(arr, k):
    return sum(num for num in arr[: min(k, len(arr))] if 10 <= num <= 99)